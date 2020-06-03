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
