# Introduction to Structured Programming <h1>
## What is "programming paradigm"? <h2>
A programming paradigm is the style in which someone programs, they serve as a way to classify programming languages based on their features. They are separated in two main cathegories: Imperative and Declarative.  <br>
**Imperative:**  <br>
It uses statements that change a program's state and expresses commands for the computer to perform; imperative programming focuses on describing how a program operates.  <br>
**Declarative:**  <br>
Expresses the logic of a computation without describing its control flow. Declarative programming is a non-imperative style of programming in which programs describe their desired results without explicitly listing commands or steps that must be performed.  <br>  <br>
## Types of Imperative and Declarative programming paradigms: <h2>
### Declarative: <h1> 
1. **Functional:** Programming paradigm where programs are constructed by applying and composing functions. Proponents of purely functional programming claim that by restricting side effects, programs can have fewer bugs, be easier to debug and test, and be more suited to formal verification.  <br>
2. **Dataflow:** In a control flow language, you have a stream of instructions which operate on external data. Conditional execution, jumps and procedure calls change the instruction stream to be executed. In a dataflow language, you have a stream of data which is passed from instruction to instruction to be processed. Conditional execution, jumps and procedure calls route the data to different instructions. <br>
3. **Logic:** Any program written in a logic programming language is a set of sentences in logical form, expressing facts and rules about some problem domain. <br>
4. **Template:**  Templates are used by a compiler to generate temporary source code, which is merged by the compiler with the rest of the source code and then compiled. The output of these templates include compile-time constants, data structures, and complete functions. <br>
5. **Structured:** Its aim is improving the clarity, quality, and development time of a computer program by making extensive use of the structured control flow constructs of selection (if/then/else) and repetition (while and for), block structures, and subroutines. <br>
### Imperative: <h1>
1. **Von Neumann:** The term “von Neumann style” refers to programming languages whose design reflects the way a computer actually works: they have variables to represent memory locations, assignment statements to write to those locations, loops and branches to control the program counter, and so on. <br>
2. **Interpreted:** A program whose instructions are actually a logically sequenced series of operating system commands, handled one at a time by a command interpreter . In turn, the command interpreter requests services from the operating system. <br>
3. **Object-oriented:** It is based on the concept of "objects", which can contain data, in the form of fields (often known as attributes or properties), and code, in the form of procedures (often known as methods). A feature of objects is an object's procedures that can access and often modify the data fields of the object with which they are associated. <br>
	
## _Data representation_
## Identifiers 
In programming languages, identifiers are used for identification purposes. Or in other words, identifiers are the user-defined name of the program components. In Go language, an identifier can be a variable name, function name, constant, statement labels, package name, or types.
#### _Example_
    package main
    import "fmt"

    func main() {

    var name = "GeeksforGeeks"
  
    }  
There is total of three identifiers available in the above example:
main: Name of the package
main: Name of the function
name: Name of the variable

**Rules for Defining Identifiers:** There are certain valid rules for defining a valid Go identifier. These rules should be followed, otherwise, we will get a compile-time error.

+ The name of the identifier must begin with a letter or an underscore(_). And the names may contain the letters ‘a-z’ or ’A-Z’ or digits 0-9 as well as the character ‘_’.

+ The name of the identifier should not start with a digit.

+ The name of the identifier is case sensitive.

+ Keywords is not allowed to use as an identifier name.

+ There is no limit on the length of the name of the identifier, but it is advisable to use an optimum length of 4 – 15 letters only.
## Variables
Variables are the names you give to computer memory locations which are used to store values in a computer program.

For example, assume you want to store two values 10 and 20 in your program and at a later stage, you want to use these two values. Let's see how you will do it. Here are the following three simple steps

Creating variables is also called declaring variables in C programming. Different programming languages have different ways of creating variables inside a program. For example, C programming has the following simple way of creating variables.
#### _Example_
    #include <stdio.h>

    int main() {
    int a;
    int b;
    }
The above program creates two variables to reserve two memory locations with names a and b. We created these variables using int keyword to specify variable data type which means we want to store integer values in these two variables. Similarly, you can create variables to store long, float, char or any other data type.
## Constants
Data values that stay the same every time a program is executed are known as constants. Constants are not expected to change.

_Literal constants_ are actual values fixed into the source code. An example of this might be the character string "hello world". The data value "hello world" has been fixed into the code.

Named constants are values where a name is defined to be used instead of a literal constant. An example of this might be stating that the 'starting level' of a game is always referred to as 1.

#### _Example_
+ The unit of gravity
+ The number of lives available for the player
+ The amount of time allowed for a level in a game
## Reserved Words
Different programming languages provide different set of reserved keywords, but there is one important & common rule in all the programming languages that we cannot use a reserved keyword to name our variables, which means we cannot name our variable like int or float rather these keywords can only be used to specify a variable data type.

| auto       | else         | long  |
| ------------- |:-------------:| -----:|
| break      | enum | register |
| case      | extern     |  typedef |
| char | float     |    short |
| const | for | signed |
| continue | goto | sizeof |
| default | if | static |
| do | int | struct | 
| switch | typef | union |
| unsigned | void | volatile |
| while | packed | double |

#### _Example_
    #include <stdio.h>

    int main() {
    int count;
    count = 10;

    printf( "Value of count = %d\n", count);
#### _Example_
	int main()
	{
	   int x, y, total;
	   x = 10, y = 20;
	   total = x + y;
	   printf ("Total = %d \n", total);
	}
	
## Types of data
### Primitive Data
Primitive data types are the basic units of a langauge; each primitive value is a single datum and holds that datum directly. We have seen examples of numbers and strings these are a the most basic primitive data types. They are simple and can hold text messages, frame numbers, counters, etc.. The primitive data types that ActionScript supports are:
+ Number.
+ String.
+ Boolean.
+ Undefined.
+ Null.
### Composite Data
Using composite data, we can manage multiple pieces of related data as a single datum. For example if you wanted to store information about a person you could store there date of birth, sex, address etc. as single variables but then when you wanted to add another person you would have to remember to create all the variables but with slightly different names. ASs the number of people increased so would the complexity of your naming and the relationship between the variables would be lost. In ActionScript you could create an object called person which had properties to store the date of birth, sex, address etc, you would then create instances of that object. The composite data types that ActionScript supports are:
+ Array.
+ Object.
+ Movie clip.
+ Functions.
### Diferences, memory and range of values 
+ When Primitive data is copied to a variable, that variable gets it's own unique copy of the data, stored separately in memory. We say that primitive data is copied by value because the data's value is stored in the memory location allotted to the variable.
+ When Composite data is copied to a variable, only a reference to the data is stored in the variable's memory slot The reference tells the interpreter where the actual data is kept. We say that composite data is copied by reference.
+ If two variables contain data that is primitive they compare by value. This means that if they both contain the same values they are equal.
+ If two variables contain data that is composite they compare by reference. This means that they can only be equal if they refer to the same object.
+ When we pass primitive data as an argument to a function, the function receives a copy of the data, not the original. Changes made to an argument in the function have no effect on the original argument outside the function. Primitive data is passed by value.
+ When we pass composite data as an argument to a function, the function receives a reference that points to the original argument.  
+ Altering the argument affects the original data and therefore affects other variables that point to the same data, even outside the function. Composite data is passed by reference.
## Data type conversion
In computer science, type conversion or typecasting refers to changing an entity of one datatype into another. There are two types of conversion: implicit and explicit. The term for implicit type conversion is coercion. Explicit type conversion in some specific way is known as casting. Explicit type conversion can also be achieved with separately defined conversion routines such as an overloaded object constructor.
Implicit type conversion, also known as coercion, is an automatic type conversion by the compiler. Some languages allow, or even require compilers to provide coercion.
In a mixed type expression, a subtype s will be converted into a supertype t or some subtypes s1, s2, ... will be converted to a supertype t (maybe none of the si is of type t) at runtime so that the program will run correctly.
#### _Example_
    double  d;
    long    l;
    int     i;
    if (d > i)      d = i;
    if (i > l)      l = i;
    if (d == l)     d *= 2;
## _Operators of structured_
## Conditional
An operator in a programming language is a symbol that tells the compiler or interpreter to perform specific mathematical, relational or logical operation and produce final result. This chapter will explain the concept of operators and it will take you through the important arithmetic and relational operators available in C, Java, and Python.

+ Conditional operators return one value if condition is true and returns another value is condition is false.
+ This operator is also called as ternary operator.
+ In above example, if A is greater than 100, 0 is returned else 1 is returned. This is equal to if else conditional statements.
#### Example 
	#include <stdio.h>

	int main()
	{
	   int x=1, y ;
	   y = ( x ==1 ? 2 : 0 ) ;
	   printf("x value is %d\n", x);
	   printf("y value is %d", y);
	}

## Logical
Logical operators are very important in any programming language and they help us take decisions based on certain conditions. Suppose we want to combine the result of two conditions, then logical AND and OR logical operators help us in producing the final result.

The following table shows all the logical operators supported by the C language. Assume variable A holds 1 and variable B holds 0.

| Operator	| Description | Example |
| ------------- |:-------------:| -----:|
| && | Called Logical AND operator. If both the operands are non-zero, then condition becomes true. | (A && B) is false. |
| Vertical bar | Called Logical OR Operator. If any of the two operands is non-zero, then condition becomes true. | (A || B) is true. |
| ! | 	Called Logical NOT Operator. Use to reverses the logical state of its operand. If a condition is true then Logical NOT operator will make false. | !(A && B) is true. |

#### _Example_
	#include <stdio.h>

	int main() {
	   int a = 1;
	   int b = 0;

	   if ( a && b ) {

	      printf("This will never print because condition is false\n" );
	   }
	   if ( a || b ) {

	      printf("This will be printed print because condition is true\n" );
	   }
	   if ( !(a && b) ) {

	      printf("This will be printed print because condition is true\n" );
	   }
	}
	
## Relationship
The relational operators are often used to create a test expression that controls program flow. This type of expression is also known as a Boolean expression because they create a Boolean answer or value when evaluated. There are six common relational operators that give a Boolean value by comparing (showing the relationship) between two operands. If the operands are of different data types, implicit promotion occurs to convert the operands to the same data type.

| Operator | Meaning | 
| ------------- |:-------------:| 
| <	| less than |
| >	| greater than |
| <=	| less than or equal to |
| >=	| greater than or equal to |
| ==	| equality (equal to) |
| != or <>	| inequality (not equal to) |

#### _Example_
	#include <stdio.h>

	int main() {
	   int a, b;

	   a = 10;
	   b = 20;

	   /* Here we check whether a is equal to 10 or not */
	   if( a == 10 ) {

	      /* if a is equal to 10 then this body will be executed */
	      printf( "a is equal to 10\n");
	   }

	   /* Here we check whether b is equal to 10 or not */
	   if( b == 10 ) {

	      /* if b is equal to 10 then this body will be executed */
	      printf( "b is equal to 10\n");
	   }

	   /* Here we check if a is less b than or not */
	   if( a < b ) {

	      /* if a is less than b then this body will be executed */
	      printf( "a is less than b\n");
	   }

	   /* Here we check whether a and b are not equal */
	   if( a != b ) {

	      /* if a is not equal to b then this body will be executed */
	      printf( "a is not equal to b\n");
	   }
	}	

## Input and Output 
The C language is accompanied by a collection of library functions which includes a  number of input/output functions.These functions are used to permit the transfer  of information between the computer and the standard input/output device. The basic input/output functions  are `getchar`, `putchar`, `puts`, `scanf` and `printf`. The first two functions, `getchar` and `putchar`, are used to transfer single characters. The next function puts is used to output strings, and the last two functions, `scanf` and `printf`, permit the transfer of single characters, numerical values and strings.

An input/output function can be accessed from anywhere within a program simply by writing the function name, followed by a list of arguments enclosed in parentheses. The arguments represent data items that are sent to the function. Some input/output functions do not require arguments, though the empty parentheses must still appear.
#### _Example_
	#include <stdio.h>
	int main( ) {

	   int c;

	   printf( "Enter a value :");
	   c = getchar( );

	   printf( "\nYou entered: ");
	   putchar( c );

	   return 0;
	}
#### _Example_
	$./a.out
	Enter a value : this is test
	You entered: t

#### _Sources_
[Reference 1](https://fresh2refresh.com/c-programming/c-tokens-identifiers-keywords/)

[Reference 2](https://fresh2refresh.com/c-programming/c-variables/)

[Reference 3](https://fresh2refresh.com/c-programming/c-operators-expressions/)

[Reference 4](https://www.tutorialspoint.com/cprogramming/index.htm)

[Benjamin Barona](https://github.com/benjamin-bar)

[Efrain Matu](https://github.com/Efrack09)
