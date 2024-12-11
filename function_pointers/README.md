# C-Function pointer

## TASKS

### 0-print_name.c : Write a function that prints a name.

### 1-array_iterator.c
Write a function that executes a function given as a parameter on each element of an array.

### 2-int_index.c
Write a function that searches for an integer.
- int_index returns the index of the first element for which the cmp function does not return 0
- If no element matches, return -1
- If size <= 0, return -1

### .3. A goal is not always meant to be reached, it often serves simply as something to aim at :
Write a program that performs simple operations.
- Usage: calc num1 operator num2
- The program prints the result of the operation, followed by a new line
- if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

3.(This task requires that you create four different files)

#### .3. Different files :
- 3-calc.h : This file should contain all the function prototypes and data structures used by the program. 
- 3-op_functions.c
- 3-get_op_func.c : This file should contain the function that selects the correct function to perform the operation asked by the user.
_where s is the operator passed as argument to the program
_This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add
_If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL
- 3-main.c
