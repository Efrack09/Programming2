# Introduction to Structured Programming <h1>
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

Computer programs are widely used for mathematical calculations. We can write a computer program which can do simple calculation like adding two numbers (2 + 3) and we can also write a program, which can solve a complex equation like P(x) = x4 + 7x3 - 5x + 9. If you have been even a poor student, you must be aware that in first expression 2 and 3 are operands and + is an operator. Similar concepts exist in Computer Programming.
#### Example with 10 and 20

| Operator       | Description           | Example  |
| ------------- |:-------------:| -----:|
| +    | Adds two operands | A + B will give 30 |
| -     | Multiplies both operands |   A - B will give -10 |
| * | Divides numerator by de-numerator |    A * B will give 200 |
| / | Divides numerator by de-numerator | B / A will give 2 | 
| % | This gives remainder of an integer division | B % A will give 0 |

## Logical
Logical operators are very important in any programming language and they help us take decisions based on certain conditions. Suppose we want to combine the result of two conditions, then logical AND and OR logical operators help us in producing the final result.

The following table shows all the logical operators supported by the C language. Assume variable A holds 1 and variable B holds 0.
#### Example
| Operator	| Description | Example |
| ------------- |:-------------:| -----:|
| && | Called Logical AND operator. If both the operands are non-zero, then condition becomes true. | (A && B) is false. |
| **|.|** | Called Logical OR Operator. If any of the two operands is non-zero, then condition becomes true. | (A || B) is true. |
| ! | 	Called Logical NOT Operator. Use to reverses the logical state of its operand. If a condition is true then Logical NOT operator will make false. | !(A && B) is true. |

## Relationship
[Benjamin Barona](https://github.com/benjamin-bar)

[Efrain Matu](https://github.com/Efrack09)
