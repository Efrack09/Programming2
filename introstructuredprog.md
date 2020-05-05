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
auto|else|long|	switch
break|	enum|	register|	typedef
case|	extern|	return	|union
char|	float|	short|	unsigned
const|	for	signed	|void
continue|	goto	|sizeof|	volatile
default|	if|	static|	while
do|	int|	struct|	_Packed
double|
[Benjamin Barona](https://github.com/benjamin-bar)

[Efrain Matu](https://github.com/Efrack09)
