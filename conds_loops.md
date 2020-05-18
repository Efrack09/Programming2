### Instruction for
In C language, the syntax is used to write a for (repetitive for) statement:
The for loop is a variant of the while loop, and like this loop, it can iterate zero or more times. However, the for loop is usually only used when the exact number of times the loop has to iterate is known. This is the case of the problem raised in example 1 of the while statement in C, in which it is known in advance that the loop has to iterate exactly ten times.

Example: Therefore, this problem can be solved with a repeating for statement in the following way:

      #include <stdio.h>

      int main()
      {
         int contador;

         printf( "\n   " );

         for ( contador=1 ; contador<=10 ; contador++ )
             printf( "%d ", contador );

         return 0;
      }

### Instruction Do while
In C language, the syntax is used to write a do while statement (repetitive do while):
In short, a repeating do while statement allows you to repeatedly execute (one or more times) a block of instructions, as long as a certain condition is true.

      #include <stdio.h>

      int main()
      {
      int contador;

      printf( "\n   " );

      contador = 1; /* Inicialización del contador */
      do
      {
         printf( "%d ", contador );   /* Salida */
         contador++;                 /* Incremento */
      } while ( contador <= 10 );     /* Condición */

      return 0;
      }
      
#### Selective Control Structures
Used for decisions choosing between 2 or more alternative paths.
* If statements 
    * Simple conditional 
    * Double Conditional
    * Multiple Conditional 
    * Nested Conditional
    
#### If Statements
The **if** statement allows you to control if a program enters a section of code 
 or not based on whether a given condition is true or false. If the condition is satisfied, the first block
is executed. If the condition is not satisfied, the second block is executed, but the second block is not
mandatory.
 * The important functions of the if statement is that it allows the program 
   to select an action based upon the user's input.
  A true statement is one that evaluates to a nonzero number and a false statement 
   evaluates to zero. When you perform comparison with the relational operators, 
  the operator will return 1 if the comparison is true, or 0 if the comparison is false.
  
  ### Simple Conditional

The expression part can be any expression that evaluates a value, and it must be enclosed in parenthases.
* The best use is to make the expression a Boolean expression, which is an operation that evaluates to true or false
* For other expression (like (x+y), for instance):
    * an expression that evaluates to 0 is considered false
    * an expression that evaluates to anything else (non-zero) is considered true

#### Double Conditional
## If... else statement
 When if statement is false can to execute other intruction, 
 The "else" statement effectively says that whatever code after it (whether 
  a single line or code between brackets) is executed if the if statement is false
 
#### Break and Continue
These statements can be used to alter the flow of control in loops, although they are not specifically needed. (Any loop can be made to exit by writing an appropiate test expression)

## Break
This cause immediate exit from any loops (as well as from switch blocks

Example: 

    for(i=1; i<=10, i++)
    {
        if(i==5)
            break;

        printf("%d", i);
    }
    
#### Continue
When used in a loop, this statement causes the current loop iteration to end.
* In a while or *do.. while* loop, the rest of the body is skipped, and execution moves on to the test condition
* In a for loop, the rest of the loop body is skipped, and execution moves on to the iterative statement

Example:

    for(i=1; i<=10; i++)
    {
        if(i%2==0)
            continue;

        printf("%d",i);
    }
  
