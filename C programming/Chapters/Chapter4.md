# The Case Control Structure
------------------------------------------------------------------
### Decision with [Switch](https://en.wikipedia.org/wiki/Switch_statement)
- ##### `switch`-`case`-`default` :~ these 3 keywords makes the control Statement.</br>
 - ##### Tests the value of a variable and compares it with multiple cases.
 *Syntax~*
 ```c
switch( expression )
{
	case value-1:
			Block-1;
			Break;
	case value-2:
			Block-2;
			Break;
	case value-n:
			Block-n;
			Break;
	default:
			Block-1;
			Break;
}
Statement-x;
```
***Note:*** 
- `case` is followed by only **[integers](https://en.wikipedia.org/wiki/Integer)** or **[characters](http://aboutc.weebly.com/c-character-set.html)**.</br>
- `case` labels always end with a colon ( : )
- There can be only one `default` label.

[Examples of Switch case statements](https://www.guru99.com/c-switch-case-statement.html#:~:text=%20Summary%20%201%20A%20switch%20is%20a,can%20be%20nested%20within%20one%20another.%20More%20)
</br>
---------------------------------------------------------------------------------------------
## *Switch* vs *If-Else* ~~ 
#### [Disadvantages of `switch-case` over `if-else`](https://www.geeksforgeeks.org/switch-vs-else/) :~
| **Basis of comparison** | **`switch-case`** | **`if-else`** |
|----------------|---------------|-------------------|
| Expression| Can be either a character or integer variable.|Either logical or equality expression.
| Evaluation| Evaluates either an integer, or character. |Evaluates all types of data, such as integer, floating-point, character or Boolean.
|Sequence of execution| Executes one case after another till the break  |First, the condition is checked. If the condition is true then 'if' block is executed otherwise 'else' block
|Default execution|If the value does not match with any case, default statement is executed.| If the condition is not true, then by default, else block will be executed.
|Editing|Editing of any case will not interrupt the execution of other cases.| Editing is not easy in the 'if-else' statement.
| Speed| switch statement is the best option as the speed of the execution will be much higher than 'if-else'.|For multiple , then the speed of the execution is slow.
</br>

-----------------------------------------------------------------------------------------------------------

</br>

## The [ *goto* ](https://en.wikipedia.org/wiki/Goto) statement<br/>
##### Used after the normal sequence of program execution by transferring the control to some other part of program.<br/>
##### This word is redundant in C and encourages poor programming style.
