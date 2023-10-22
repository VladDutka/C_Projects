# Requirements

1. Answer Part 1 questions here in this file
2. Answer Part 2 questions in the source files
3. Submit this file and the two source files on to the Gradescope

# Part1: Short Answer Questions

### 1. Called by Value (10 Points)

What it means called by value in C?
What are the values being passed when arguments are integer and char array respectively?

**Answer**: Called by a value in C is a method that passes parameters and arguments to the function and copies the
original values. Then they are passed. So, changes made to the parameter or arguments inside the function do not have
an effect on the passed values. So when we pass the Int variable to the parameter this updated in the new value. The 
same happens when char is passed. This is only if they are passed through the formal arguments, not the function. 

### 2. Scope (10 Points)

What is the scope of a variable in C? What's the usage of the
key word *extern* in C?

**Answer**: A scope of a variable is whether that variable can be accessed. So if a variable is local then 
only in that specific group that variable can be accessed. If a variable is global then it can be accessed throughout 
the program. The keyword extern is used to extend the scope of the variable. This can be used to bring a variable from a  
different file over.

### 3. Static (10 Points)

What is the static key word means for an external and an internal variable?

**Answer**: An external static variable is one that is ones that are used through the running of the program. They have
permanent storage in the program and are used similarly to global variables in which they can be used anywhere in the 
program. They are also declared above the main function. An internal Static variable that used inside of function, 
similarly to a local variable. Declared within the main function and use block storage which is storage that is only
used by that one function. Only active for that one function running. 
### 4. Commandline Arguments (10 Points)

How to use commandline arguments in C? Give an example.

**Answer**: Commandline arguments in C are arguments/ parameters that are given through a terminal when running a program
They are passed through the main function, provided to the program when compiled and run, and can be used to control the 
program from outside or inside. Arg[0] is the first argument. 
To use commandline arguments (Program with two arguments) you would do in terminal:
gcc main.c -o test.c
Argv[0]:./test 
Argv[1]:(Argument 1) 
Argv[2]:(Argument 2)

# Part2: Coding  (60 Points)

Read the question in the README file and then complete the [solution] function
in the Source Code file for submission.

Coding 1: [README](coding_1.MD) and [Source Code](coding_1.c)

Coding 2: [README](Coding_2.MD) and [Source Code](coding_2.c)
