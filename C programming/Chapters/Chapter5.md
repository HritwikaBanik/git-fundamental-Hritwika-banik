# FUNCTIONS and POINTERS

------------------------------------------------------------------------
## What are [Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)?
- ##### Self-contained block of statement
- #####  Performs coherent task of some kind
- ##### Every C program has at least one function, which is [`main()`](https://www.javatpoint.com/what-is-the-main-in-c).
 
### **Importance points of the [`main()`]() function**
- A *main* is a predefined keyword or function in C.
- `main()` function is an entry point of the programming code to start its execution
-  we can pass parameters to the `main()` function according to the requirement of a program.
-  Syntax 
  ```c 
  main()  
            {  
              // codes start from here  
            }
 ```
 ### Two types of functions:~
  1. [Library Functions]()  {examples: `printf()` , `scanf()` ,etc}</br>
  2. [User-defined Functions]()  {examples : `cars()` , `students()` etc}
 
 
 -----------------------------------------------------------------------------------------
 
 ### Passing Values between Functions:
 
- Arguments are sometimes also called `‘parameters’.` 
- In `main( )` we receive the values of` a, b and c` through the keyboard.
- However,the calculation of sum is done in a different function called `calsum( )`.
  
------------------------------------------------------------------------
 
 | Function declaration |Function definition |
| --------------------- | --------------------- |
| tells the compiler about a function's name, return type, and parameters|  provides the actual body of the function.|

### Function Declarations
##### Tells the compiler about a function name and how to call the function. The actual body of the function can be defined separately.

A function declaration has the following parts −
```c
return_type function_name( parameter list );
//  For the above defined function max(), the function declaration is as follows −

int max(int num1, int num2);
// Parameter names are not important in function declaration only their type is required,</br> so the following is also a valid declaration −

int max(int, int);
```
###### Function declaration is required when you define a function in one source file and you call that function in another file.</br>In such case, you should declare the function at the top of the file calling the function.

### Function definition 
The general form is as follows −
```c
return_type function_name( parameter list ) {
   body of the function
}
```
#### [*Return Type*]() − The return_type is the data type of the value the function returns . 

#### [*Function Name*]() − The function name and the parameter list together constitute the function signature.

#### [*Parameters*]() − The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.

#### [*Function Body*]() - The function body contains a collection of statements that define what the function does.
