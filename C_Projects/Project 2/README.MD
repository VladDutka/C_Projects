# Requirements

1. Answer Part 1 questions here in this file
2. Answer Part 2 questions in the source files
3. Submit this file and the two source files on to the Gradescope

# Part1: Short Answer Questions

### 1. How to add custom search path for header files and libraries file for gcc compiling (10 Points)

**Answer**: There are multiple ways to add a custom search path for a header file. The one that I find is gcc -I/<path> -L/<path>. The -I /<path> would find any .h (header) files in that path. -L would find any .a and .s files in that path. You could also do #include <B.File.hpp> and then compile use g++ -I /<your>/<source>/<root> /<your>/<source>/<root>/A/code.cpp.

### 2. How to create a int array of length 100 using heap memory (10 Points)

**Answer**: arr = (int*) malloc(100 * sizeof(int)); 

### 3. Give each an example of dangling pointer and wild pointer (10 Points)

**Answer**: Dangling Pointer:
#include <stdlib.h>
#include <stdio.h>
int main()
{
    Int *ptr = (int*) malloc(100 * sizeof(int));
    free(ptr);
    ptr = Null;
    return 0;
}
Wild Pointer:
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr;
    *ptr = 10;
    printf("%d\n", *ptr);
    return 0;
}

### 4. What are the four different segments of a C program runtime memory layout and what are they used of? (10 Points)

**Answer**: Text is a section of the program in a object file that contains executable instructions for out program. It is placed below a 
heap and stack in order to stop overflows. Data is a section that contains global and static variables. It is where all the data elements are stored 
in the program. The heap is a dynamically allocated memory when our program runs. It is used with malloc and calloc. The size changes as the program runs.
The stack has temp. data which are in the forms functions and methods. It is where the program auto assigns memory. The size depends on the functions paramters
and fucntions calls on its size. 

# Part2: Coding  (60 Points)

Read the question in the README file and then complete the [solution] function
in the Source Code file for submission.

Coding 1: [README](coding_1.MD) and [Source Code](coding_1.c)

Coding 2: [README](coding_2.MD) and [Source Code](coding_2.c)
