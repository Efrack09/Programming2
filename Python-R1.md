# _Python review_

## Variables

You can name a variable anything as long as it obeys the following three rules:

    It can be only one word.
    It can use only letters, numbers, and the underscore (_) character.
    It can’t begin with a number.
    Variable name starting with an underscore (_) are considered as "unuseful`.
    
    Example:

    spam = 'Hello'

    _spam = 'Hello'
    
## Function docstring:

    def foo():
        """
        This is a function docstring
        You can also use:
        ''' Function Docstring '''
        """

## The print Function

    print('Hello world!')

    a = 1
    print('Hello world!', a)
    
## The input Function

    The input Function

    Example Code:

    print('What is your name?')   # ask for their name
    myName = input()
    print('It is good to meet you, {}'.format(myName))
    
## if Statements

    if name == 'Alice':
        print('Hi, Alice.')

## else Statements

    name = 'Bob'

    if name == 'Alice':
        print('Hi, Alice.')
    else:
        print('Hello, stranger.')

## elif Statements

    name = 'Bob'
    age = 5

    if name == 'Alice':
        print('Hi, Alice.')
    elif age < 12:
        print('You are not Alice, kiddo.')
        
## Glossary

- Text string (string):  my_cadena = "Hello World!"

- Comments: Comments on the same line of the code must be separated by two blank spaces. A single blank space must follow the # symbol. # Correct to = 15 # Age of Mary

- Complex Python data types, has in addition to the types already seen, 3 more complex types, that support a collection of data. These types are:
Tuples
Lists
Dedylists
These three types, can store collections of data of various types, and are differentiated by their syntax and by the way in which the data can be manipulated.
- print (print): it serves to show in detail or that the programmer you want to capture
- - Lists: A list is similar to a tuple with the fundamental difference that it allows modifying the data once created: my_list = ['text string', 15, 2.8, 'other data', 25]
- While loop: This loop is in charge of executing the same action "while" a certain condition is met.
- For loop: The for loop, in Python, is the one that will allow us to iterate over a complex variable, of the list or tuple type.

