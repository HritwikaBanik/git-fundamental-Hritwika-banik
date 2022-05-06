# Getting started with~ Chapter 1
## What is C ?

- C is a programming language.
- Developed at AT & T’s Bell Laboratories in USA in 1972.
- Designed and Written by [DENNIS RITCHIE](https://en.wikipedia.org/wiki/Dennis_Ritchie).
- Reliable , simple and easy to use language.
- Case sensitive language(always in lower case)

-------------------------------------------------------------------------------------
## Steps in learning C programming:
###### Alphabet           - variables
###### Digits           :point_right:   - constants  :point_right:    Instructions  :point_right:  program
###### special symbols          - keywords

#### Alphabets: A, B, ….., Y, Z  a, b, ……, y, z  
#### Digits:0, 1, 2, 3, 4, 5, 6, 7, 8, 9  
#### Special symbols: ~ ‘ ! @ # % ^ & * ( ) _ - + = | \ { }  [ ] : ; " ' < > , . ? / <br/>

-------------------------------------------------------------------------------------
## CONSTANTS:
- Primary Constant
   - [Integer constant](https://fresh2refresh.com/c-programming/c-constants/#:~:text=Types%20of%20C%20constant%3A%20%20%20Constant%20type,%2F%2Astarts%20with%200x%2A%2F%29%20%202%20more%20rows%20)
   - [Real constant](https://fresh2refresh.com/c-programming/c-constants/#:~:text=Types%20of%20C%20constant%3A%20%20%20Constant%20type,%2F%2Astarts%20with%200x%2A%2F%29%20%202%20more%20rows%20)
   - [Character constant](https://fresh2refresh.com/c-programming/c-constants/#:~:text=Types%20of%20C%20constant%3A%20%20%20Constant%20type,%2F%2Astarts%20with%200x%2A%2F%29%20%202%20more%20rows%20)
- Secondary constant
   - [Array](https://newbedev.com/const-arrays-in-c)
   - [pointer](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
   - [structure](https://www.tutorialspoint.com/cprogramming/c_structures.htm)
   - [Enum](https://www.simplilearn.com/tutorials/c-tutorial/enum-in-c#:~:text=We%20can%20use%20enums%20in%20C%20for%20multiple,C%203%20While%20using%20switch-case%20statements%20in%20C)
   - [Union](https://www.tutorialspoint.com/cprogramming/c_unions.htm)
 -------------------------------------------------------------------------------------
 ## Keywords
1.Words whose meaning has already been explained to [compiler](https://www.geeksforgeeks.org/introduction-to-compilers/).<br/>
2.Only 32 keywords available in c.<br/>
3.Also known as “Reserved words”.<br/>
</br>      

`int`, `signed`,` typedef`,`auto`,`for`,`const`,`char`,`unsigned`
</br>
`enum`,`extern`,`while`,`volatile`,`float`,`short`,`register`,`do`  </br>
`sizeof`,`double`,`long`,`static`,`if`,`goto`,`struct` ,`void`,<br/>
`else`,`continue`,` union`,`return`,`switch`,`break`,`case`,`default`   </br>

-------------------------------------------------------------------------------------
## Variables:
#### Rules for Constructing Variable Names  
 - A variable name is any combination of 1 to 31 alphabets, digits or underscores.<br/>
 -  Some compilers allow variable names  whose length could be up to 247 characters. Still, it would be  safer to stick to the rule of 31 characters.<br/>
 -  Do not create  unnecessarily long variable names as it adds to your typing  effort. </br> 
 - The first character in the variable name must be an alphabet or  underscore.  <br/>
 - No commas or blanks are allowed within a variable name.  </br>
 - No special symbol other than an underscore (as in **gross_sal**) can be used in a variable  name.<br/>
-------------------------------------------------------------------------------------
## Where to write C programs?
#### EDITOR—> COMPILER—--->OUTPUT
( *write the program )  (converts in machine language*)

**IDE**: [Integrated Development Environment](https://en.wikipedia.org/wiki/Integrated_development_environment) </br>
       This consists of an editor as well as compiler.
       
 **main()**:</br>
* A function</br>
* All statements under this has to be enclosed by {}.</br>
  * Always returns integer value.</br>
  * So  we write `int main()`.</br>
  * Integer value returns `0`. 0 means success.</br></br>

**printf()**:</br>
Library function `printf()`;shows output.</br></br>
**#include:** </br>
Its a preprocessor directive `#include<>`.</br>
</br>
[**Format specifiers**:](https://www.bing.com/images/search?view=detailV2&ccid=Y%2FRxcbmW&id=750C16415CFA27B094029579B01678F3F2D3F731&thid=OIP.Y_RxcbmWZHZHE62HjLZOEgHaDw&mediaurl=https%3A%2F%2F2.bp.blogspot.com%2F-PY8lttIc7zg%2FWGDNPYCIZDI%2FAAAAAAAARBc%2F8FudWC6YyV0UCgBVDnDNiqGgJJK8LSAtQCLcB%2Fs1600%2FFormat%252Bspecifiers%252Bin%252BC.JPG&exph=406&expw=801&q=format+specifiers&simid=608010800669211589&form=IRPRST&ck=A469452876847F2EA7E2BF795BE91978&selectedindex=30&ajaxhist=0&ajaxserp=0&vt=0&sim=11)
he format specifiers are used in C for input and output purposes. Using this concept the compiler can understand that what type of data is in a variable during taking input using the scanf() function and printing using printf() function.












