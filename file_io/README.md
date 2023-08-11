# C - File I/O


File I/O (Input/Output) is a fundamental aspect of programming that involves reading data from and writing data to files on a computer's storage. In the context of the C programming language, File I/O allows you to interact with files by opening them, reading their contents, writing new data, and closing them when you're done.

## C provides a set of standard library functions for performing file I/O operations. Here are some of the key functions and concepts related to C File I/O:

### Opening a File:

fopen(): Used to open a file. It takes two arguments: the filename and the mode (e.g., "r" for reading, "w" for writing, "a" for appending, etc.).
### Closing a File:

fclose(): Closes an open file. It's important to close a file when you're done with it to free up system resources.
### Reading from a File:

fgetc(): Reads a single character from a file.
fgets(): Reads a line of text from a file.
fscanf(): Reads formatted data from a file.
fread(): Reads a block of data from a file.
### Writing to a File:

fputc(): Writes a single character to a file.
fputs(): Writes a string to a file.
fprintf(): Writes formatted data to a file.
fwrite(): Writes a block of data to a file.
### File Positioning:

ftell(): Returns the current file position indicator.
fseek(): Moves the file position indicator to a specified location in the file.
### Error Handling:

File I/O functions often return NULL or a specific value to indicate errors. You can use feof() and ferror() to check for end-of-file and error conditions.

