# Password-Generator
A C++ Fast and Practical Wordlist (Password) generator

<img src = "https://t3.ftcdn.net/jpg/06/04/74/88/360_F_604748806_gQSyPrazhAocHefqrUtieGBKK22PS5QZ.jpg">



A tool written in C++ that creates all possible combinations of passwords using a specified character set and length. 
It leverages multithreading to efficiently handle large password spaces and provides real-time progress updates through a loading bar.

## Features

    Custom Character Set: Define your own set of characters to use for password generation.
    Configurable Length: Specify the length of the generated passwords.
    Multithreading: Utilizes threading to speed up the password generation process.
    Progress Indicator: Displays a loading bar to show the progress of password generation.

## Prerequisites (if you want to compile and do changes)

    C++11 or later
    A modern C++ compiler that supports threading (e.g., GCC, Clang, MSVC)



## Building and Running

  Clone the Repository

    git clone https://github.com/PanagiotisKots/Password-Generator.git
    cd Password_Generator <= <Foler or path where you downloaded it>
    
Run the Program

          ./Password_Generator

## Follow the prompts to enter the character set, password length, and output filename.

Usage


    Enter the characters to use for generating passwords (e.g., abc123): 
    Enter the length of each password: 
    Enter the output filename: 
   



    Characters: The characters used to generate passwords.
    Length: The length of each generated password.
    Filename: The name of the file where the passwords will be saved.


## Example

To generate all possible passwords of length 3 using characters abc123, and save the results to passwords.txt, you can do:


     ./password_generator


      Enter the characters to use for generating passwords (e.g., abc123): abc123
      Enter the length of each password: 3
      Enter the output filename: passwords.txt
     





Feel free to fork the repository and submit pull requests. If you encounter any issues or have suggestions for improvements, please open an issue.











          

