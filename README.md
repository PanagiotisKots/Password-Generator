# Password-Generator
A C++ Fast and Practical Wordlist (Password) generator


Password Generator

A powerful password generator tool written in C++ that creates all possible combinations of passwords using a specified character set and length. This tool leverages multithreading to efficiently handle large password spaces and provides real-time progress updates through a loading bar.
Features

    Custom Character Set: Define your own set of characters to use for password generation.
    Configurable Length: Specify the length of the generated passwords.
    Multithreading: Utilizes all available CPU cores to speed up the password generation process.
    Progress Indicator: Displays a loading bar to show the progress of password generation.

Prerequisites

    C++11 or later
    A modern C++ compiler that supports threading (e.g., GCC, Clang, MSVC)



Building and Running

  Clone the Repository

    git clone https://github.com/yourusername/password-generator.git
    cd password-generator

  Compile the Code

  Use a C++ compiler to build the project. For example, with g++:

    g++ -std=c++11 -o password_generator main.cpp
Run the Program

          ./password_generator

Follow the prompts to enter the character set, password length, and output filename.

Usage


    Enter the characters to use for generating passwords (e.g., abc123): 
    Enter the length of each password: 
    Enter the output filename: 
    Enter the number of threads to use: 






    Characters: The characters used to generate passwords.
    Length: The length of each generated password.
    Filename: The name of the file where the passwords will be saved.
    Number of Threads: The number of threads to use for generation (default is the number of hardware threads).

Example

To generate all possible passwords of length 3 using characters abc123, and save the results to passwords.txt, you can run:


     ./password_generator


      Enter the characters to use for generating passwords (e.g., abc123): abc123
      Enter the length of each password: 3
      Enter the output filename: passwords.txt
      Enter the number of threads to use: 4







Performance

The tool dynamically uses the number of hardware threads available to maximize performance. It efficiently handles large password spaces by writing directly to a file and using multithreading.
Contributing

Feel free to fork the repository and submit pull requests. If you encounter any issues or have suggestions for improvements, please open an issue.



Feel free to adjust the sections or add more details specific to your project as needed!










          

