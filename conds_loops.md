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

