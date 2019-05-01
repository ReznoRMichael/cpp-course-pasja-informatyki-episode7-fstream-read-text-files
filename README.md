# Learning basics of C++ - read a .txt file (fstream)
> Training course - Pasja Informatyki, C++ course, episode 7 ( [Link](https://www.youtube.com/watch?v=h2Taf16gQDI) )

## General info
The basics of working with text files in C++ using the `fstream` standard library. File `dane.txt` contains 3 lines: first name, second name and a number. Program opens the file, then reads the contents of it with a `while` loop and `getline()` function until the end of the file. Depending on the content of each line it saves the content to an appriopriate container - `string` for names, and `int` for the number. The conversion from string to int is done via the standard `atoi()` function. When the contents are saved, the file is closed, and the program outputs the contents of the lines on the screen.
If the file doesn't exist, it shows a warning and it ends. 

## Technologies
* C++
* CodeBlocks (IDE)
* GNU GCC Compiler (minGW)

## Contact
Created by [ReznoRMichael](https://github.com/ReznoRMichael)