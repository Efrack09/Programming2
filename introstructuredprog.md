# Introduction to Structured Programming <h1>
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
    Live Demo
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
### Diferences
+ When Primitive data is copied to a variable, that variable gets it's own unique copy of the data, stored separately in memory. We say that primitive data is copied by value because the data's value is stored in the memory location allotted to the variable.
+ When Composite data is copied to a variable, only a reference to the data is stored in the variable's memory slot The reference tells the interpreter where the actual data is kept. We say that composite data is copied by reference.
+ If two variables contain data that is primitive they compare by value. This means that if they both contain the same values they are equal.
+ If two variables contain data that is composite they compare by reference. This means that they can only be equal if they refer to the same object.
+ When we pass primitive data as an argument to a function, the function receives a copy of the data, not the original. Changes made to an argument in the function have no effect on the original argument outside the function. Primitive data is passed by value.
+ When we pass composite data as an argument to a function, the function receives a reference that points to the original argument.  
+ Altering the argument affects the original data and therefore affects other variables that point to the same data, even outside the function. Composite data is passed by reference.

[Benjamin Barona](https://github.com/benjamin-bar)

[Efrain Matu](https://github.com/Efrack09)
