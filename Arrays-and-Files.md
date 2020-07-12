# _Describe concepts and characteristics of arrangements_

## One-dimensional 
A one-dimensional array is a structured collection of components (often called array elements) that can be accessed individually by specifying the position of a component with a single index value. int number[50]; creates the number array which has 50 components, each capable of holding one int value.

## Multidimension
Concep of a data file The file system is the most viable aspect of an operating system. It provides the mechanism for on line storage of and access to both data and programs of the operating system and all the users of the computer system. The file system consists of two distinct parts: a collection of files, each storing related data, and directory structure, which organizes and provides information about all the files in the system. Some file systems have a third part, partitions, which are used to separate physically or logically large collection of directories.

Is an array with more than two dimensions. Each element is defined by two subscripts, the row index and the column index. Multidimensional arrays are an extension of 2-D matrices and use additional subscripts for indexing. 

# _Characteristics of files_

## Binary file
A binary file is a computer file that is not a text file.[1] The term "binary file" is often used as a term meaning "non-text file".[2] Many binary file formats contain parts that can be interpreted as text; for example, some computer document files containing formatted text, such as older Microsoft Word document files, contain the text of the document but also contain formatting information in binary form.

## Text 
On a computer, every file is a long string of ones and zeros. Specifically, a file is a finite-length sequence of bytes, where each byte is an integer between 0 and 255 inclusive. Files can be broadly classified as either binary or text. These categories have different characteristics and need different tools to work with such files.

# _Characteristics of file managements_
 
## Creation
If the file is not present on the system, then it is created and then opened. If a file is already present on the system, then it is directly opened using this function. fp is a file pointer which points to the type file.

Whenever you open or create a file, you have to specify what you are going to do with the file. A file in 'C' programming can be created or opened for reading/writing purposes. A mode is used to specify whether you want to open a file for any of the below-given purposes. Following are the different types of modes in 'C' programming which can be used while working with a file.

FILE *fp;
fp = fopen ("file_name", "mode"); In the above syntax, the file is a data structure which is defined in the standard library.

## Opening
 If a file is in reading mode, then no data is deleted if a file is already present on a system. w : Open a file for writing. If a file is in writing mode, then a new file is created if a file doesn't exist at all. If a file is already present on a system, then all the data inside the file is truncated, and it is opened for writing purposes. a : Open a file in append mode. If a file is in append mode, then the file is opened. The content within the file doesn't change. r+ : Open for reading and writing from beginning w+ : Open for reading and writing, overwriting a file a+ : Open for reading and writing, appending to file In the given syntax, the filename and the mode are specified as strings hence they must always be enclosed within double quotes.

## Close 
The fclose function takes a file pointer as an argument. The file associated with the file pointer is then closed with the help of fclose function. It returns 0 if close was successful and EOF (end of file) if there is an error has occurred while file closing. After closing the file, the same file pointer can also be used with other files.

      #include <stdio.h> 
      int main() { FILE * file_pointer; char buffer[30], c;

      file_pointer = fopen("fprintf_test.txt", "r");
      printf("----read a line----\n");
      fgets(buffer, 50, file_pointer);
      printf("%s\n", buffer);

      printf("----read and parse data----\n");
      file_pointer = fopen("fprintf_test.txt", "r"); //reset the pointer
      char str1[10], str2[2], str3[20], str4[2];
      fscanf(file_pointer, "%s %s %s %s", str1, str2, str3, str4);
      printf("Read String1 |%s|\n", str1);
      printf("Read String2 |%s|\n", str2);
      printf("Read String3 |%s|\n", str3);
      printf("Read String4 |%s|\n", str4);

      printf("----read the entire file----\n");

      file_pointer = fopen("fprintf_test.txt", "r"); //reset the pointer
      while ((c = getc(file_pointer)) != EOF) printf("%c", c);

      fclose(file_pointer);
      return 0;
      }


## Reading

The file read operations can be performed using functions fscanf or fgets. Both the functions performed the same operations as that of scanf and gets but with an additional parameter, the file pointer. So, it depends on you if you want to read the file line by line or character by character.

And the code snippet for reading a file is as:

    FILE * filePointer; 
    filePointer = fopen(“fileName.txt”, “r”);
    fscanf(filePointer, "%s %s %s %d", str1, str2, str3, &year);

## Writing
The file write operations can be perfomed by the functions fprintf and fputs with similarities to read operations. The snippet for writing to a file is as :

    FILE *filePointer ; 
    filePointer = fopen(“fileName.txt”, “w”);
    fprintf(filePointer, "%s %s %s %d", "We", "are", "in", 2012);

