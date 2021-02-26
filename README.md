# CENG231_HW-1

## Description of Program:
- A simple C Program that opens an input file, "file.in" and creates (or opens if already created) and an output file, "file.out", where the contents of the input file is copied to the output file.
- The program has error checking conditions that utilize errno and perror to give the programmers more information in case they run into any errors with opening or reading/writing to a file.

## Instructions to run the program:
- Compile with gcc: gcc copy_file.c
- create an input file called file.in if not already created. Make sure the input file is not empty.
- Run the prgoram with the command: ./a.out

## Source Files:
- copy_file.c
- file.in
- file.out
- README.md
- .gitignore
## Sources referred to:
- C Error Handling: https://www.tutorialspoint.com/cprogramming/c_error_handling.htm
- C read method: https://man7.org/linux/man-pages/man2/read.2.html
- C open method: https://man7.org/linux/man-pages/man2/open.2.html
- C write method: https://www.man7.org/linux/man-pages/man2/write.2.html 
