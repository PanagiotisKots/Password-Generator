#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <thread>
#include <atomic>
#include <chrono>
#include <cmath>  // Changed from <math.h> to <cmath>

// namespaces
using namespace std;
using namespace std::chrono;

int generateAllPasswords(const string &charset, string prefix, int length, vector<string> &passwords, atomic<int> &progress) {
    if (length == 0) {
        passwords.push_back(prefix);
        progress++;
        return 1;
    }

    for (char ch : charset) {
        generateAllPasswords(charset, prefix + ch, length - 1, passwords, progress);
    }
}

string savePasswordsToFile(const vector<string> &passwords, const string &filename) {
    ofstream outfile(filename);
    if (!outfile) {
        cerr << "Error opening file: " << filename << endl;
        return "error";
    }
    for (const auto &password : passwords) {
        outfile << password << endl;
    }
    return "success";
}

void printPasswordsToScreen(const vector<string> &passwords) {
	
	cout<<"\n\n\nPress enter to continue: ";
	getchar();
	while(getchar()!= '\n'){
	}
    for (const auto &password : passwords) {
        cout << password << endl;
    }
}

void showLoadingBar(atomic<int> &progress, int total, atomic<bool> &done) {
    while (!done) {
        int completed = progress;
        int barWidth = 70;
        float progressPercentage = (float)completed / total;

        cout << "[";
        int pos = barWidth * progressPercentage;
        for (int i = 0; i < barWidth; ++i) {
            if (i < pos) cout << "=";
            else if (i == pos) cout << ">";
            else cout << " ";
        }
        cout << "] " << int(progressPercentage * 100.0) << " %\r";
        cout.flush();
        this_thread::sleep_for(milliseconds(10));
    }
}

// main
int main() {
    // variables
    string charset;
    int length;
    string filename;

    // user input
    cout << "Enter the characters to use for generating passwords (e.g., abc123): ";
    cin >> charset;
    cout << "Enter the length of each password: ";
    cin >> length;
    cout << "Enter the output filename: ";
    cin >> filename;

    vector<string> passwords;
    atomic<int> progress(0);
    atomic<bool> done(false);

    // total number of passwords to generate
    int totalPasswords = pow(charset.size(), length);

    // estimate file size
    int passwordLength = length;
    int newlineLength = 1; // Each password is followed by a newline character
    int totalFileSizeBytes = totalPasswords * (passwordLength + newlineLength); // Size in bytes

    // convert to megabytes and gigabytes
    double totalFileSizeMB = totalFileSizeBytes / (1024.0 * 1024.0);
    double totalFileSizeGB = totalFileSizeMB / 1024.0;

    // Output estimated file size
    cout << "Estimated file size: " << totalFileSizeBytes << " bytes (" 
         << totalFileSizeMB << " MB, " 
         << totalFileSizeGB << " GB)" << endl;

    // password generation in a separate thread
    thread generatorThread(generateAllPasswords, charset, "", length, ref(passwords), ref(progress));

    // loading bar in a separate thread
    thread loadingBarThread(showLoadingBar, ref(progress), totalPasswords, ref(done));

    generatorThread.join(); 
    done = true;
    loadingBarThread.join(); 

    // printing and saving to file
    printPasswordsToScreen(passwords);
    savePasswordsToFile(passwords, filename);

    cout << "All possible passwords have been generated and saved to " << filename << endl;

    return 0; // end of program successfully
}


