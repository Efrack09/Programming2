## Introduction to Structured Programming <h1>

# Identifiers  
In programming languages, identifiers are used for identification purposes. Or in other words, identifiers are the user-defined name of the program components. In Go language, an identifier can be a variable name, function name, constant, statement labels, package name, or types.

# _Example_
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

⋅⋅* The name of the identifier must begin with a letter or an underscore(_). And the names may contain the letters ‘a-z’ or ’A-Z’ or digits 0-9 as well as the character ‘_’.
⋅⋅* The name of the identifier should not start with a digit.
⋅⋅* The name of the identifier is case sensitive.
⋅⋅* Keywords is not allowed to use as an identifier name.
⋅⋅* There is no limit on the length of the name of the identifier, but it is advisable to use an optimum length of 4 – 15 letters only.

[Benjamin Barona](https://github.com/benjamin-bar)

[Efrain Matu](https://github.com/Efrack09)
