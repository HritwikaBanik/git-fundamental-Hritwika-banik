#The Decision Control Structure
-------------------------------------------------------------------------------------------
C has three major decision making instructions:-
- if
- if-Else
- switch

## The [if](https://www.tutorialspoint.com/cprogramming/if_statement_in_c.htm) Statement  :
*Syntax~*       `if ( this condition is true )`
                           </br> `execute this statement ;`</br>
                                                      
## The [if-else](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm) Statement :
*Syntax~*    ` if(condition){
		                  statements;
           			}
               else
                {
                      statements;
                      }`</br>
## The [Nested if-elses](https://www.tutorialspoint.com/explain-nested-if-else-statement-in-c-language) :
##### An entire if-else construction within either the body of the if statement or the body of an else statement  is called ‘nesting’ of ifs.<br/>
Example:
``` c
main( )  
{  
 int i ;  
 printf ( "Enter either 1 or 2 " ) ;  
 scanf ( "%d", &i ) ;  
 if ( i == 1 )  
 printf ( "You would go to heaven !" ) ;  
 else  
 {  
 if ( i == 2 )  
 printf ( "Hell was created with you in mind" ) ;   else  
 printf ( "How about mother earth !" ) ;  
 }  
} 

```
-------------------------------------------------------------------------------------------

## [The Logical Operators](https://www.tutorialspoint.com/cprogramming/c_logical_operators.htm#:~:text=Logical%20Operators%20in%20C%20%20%20%20Operator,%20%21%20%28A%20%26%26%20B%29%20is%20true.%20)  :
- `&&` - AND
- `||` - OR
-  `!` - NOT
## [The Relational Operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm#:~:text=Relational%20Operators%20in%20C%20%20%20%20Operator,B%29%20is%20true.%20%202%20more%20rows%20)
- `<` 
-  `>`
-   `>=`
-   `<=`
-   `==`
-    `!=`
## [The Arithmatic & modulus Operators](https://press.rebus.community/programmingfundamentals/chapter/arithmetic-operators/)
- `+`
- `-`
- `\`
- `%`
- `*`
## [The Assignment Operators](https://www.geeksforgeeks.org/assignment-operators-in-c-c/)
- `=`
## [The Conditional Operators](https://ssonlinecoding.com/c-language/c-conditional-operator/#:~:text=Conditional%20%28or%29%20Ternary%20operator%3A%201%20Conditional%20operator%20in,3%20is%20statement%20followed%20of%20condition%20is%20false.)
Also known as ternary operators.
- `?` 
-  `:` 
*Syntax:*
```c
      Expression 1 ? Expression 2: Expression 3
      ```
 






