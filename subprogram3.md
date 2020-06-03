## Subprograms and Recursion

A subprogram is a sequence of instructions whose execution is invoked from one or more remote locations in a program, with the 
expectation that when the subprogram execution is complete, execution resumes at the instruction after the one that invoked the
subprogram. In high-level languages, subprograms are also called subroutines, procedures, and functions. In object-oriented languages,
they are usually called methods or constructors. In most modern high-level languages, subprograms can have parameters, local variables,
and returned values. 

### By Reference

The call by reference method of passing arguments to a subprogram copies the address of an argument into the formal parameter. 
Inside the subprogram, the address is used to access the actual argument used in the call. This means that changes made to the 
parameter affect the passed argument.
In order to pass the arguments by reference, Pascal allows to define variable parameters. This is done by preceding the formal 
parameters by the keyword var. Let us take the example of the procedure swap() that swaps the values in two variables and reflect
the change in the calling subprogram.

```
    procedure swap(var x, y: integer);
    var
    temp: integer;

    begin
    temp := x;
     x:= y;
     y := temp;
    end;
  ```
### By Value

The call by value method of passing arguments to a subprogram copies the actual value of an argument into the formal parameter of the subprogram. In this case, changes made to the parameter inside the function have no effect on the argument.
By default, Pascal uses call by value method to pass arguments. In general, this means that code within a subprogram cannot alter the arguments used to call the subprogram.

      #include <stdio.h>
      char toUpperByValue(char);
      int main()
      {
       char letra = 'a';
       printf("El valor inicial de la variable letra es %c\n", letra);
       letra = toUpperByValue(letra);
       printf("El nuevo valor de la variable letra es %c\n", letra);
       return 0;
      }
      char toUpperByValue(char c)
      {
       if (c >= 'a' && c < 'z') /* es una letra minuscula */
       c = c - 32; /* la cambia a mayúscula */
       return c;
       
## Recursive processes       

The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function. Using recursive algorithm, certain problems can be solved quite easily. Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, etc.
In the recursive program, the solution to the base case is provided and the solution of the bigger problem is expressed in terms of smaller problems.

Recursion are mainly of two types depending on whether a function calls itself from within itself or more than one function call one another mutually. The first one is called direct recursion and another one is called indirect recursion.

      int fact(int n)
      {
          if (n < = 1) // base case
              return 1;
          else    
              return n*fact(n-1);    
      }
      
### Direct

 If a recursive function calling itself and that recursive call is the last statement in the function then it’s known as Tail Recursion.After that call the recursive function performs nothing. The function has to process or perform any operation at the time of calling and it does nothing at returning time. 
 
       #include <stdio.h> 

      // Recursion function 
      void fun(int n) 
      { 
          if (n > 0) { 
              printf("%d ", n); 

              // Last statement in the function 
              fun(n - 1); 
          } 
      } 

      // Driver Code 
      int main() 
      { 
          int x = 3; 
          fun(x); 
          return 0; 
      } 
      
### Indirect 
In this recursion, there may be more than one functions and they are calling one another in a circular manner. From the above diagram fun(A) is calling for fun(B), fun(B) is calling for fun(C) and fun(C) is calling for fun(A) and thus it makes a cycle.

 
      #include <stdio.h> 

      void funB(int n); 

      void funA(int n) 
      { 
          if (n > 0) { 
              printf("%d ", n); 

              // Fun(A) is calling fun(B) 
              funB(n - 1); 
          } 
      } 

      void funB(int n) 
      { 
          if (n > 1) { 
              printf("%d ", n); 

              // Fun(B) is calling fun(A) 
              funA(n / 2); 
          } 
      } 

      // Driver code 
      int main() 
      { 
          funA(20); 
          return 0; 
      } 
 
 ### Reference
 
 [1](https://www.geeksforgeeks.org/types-of-recursions/)
 [2](https://www.csee.umbc.edu/portal/help/oracle8/server.815/a67842/07_subs.htm)
