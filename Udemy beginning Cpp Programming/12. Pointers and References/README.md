
## Pointers in C++

* Pointers are variables whose value is an address.
* The adress can be another variable or a function.
* Inside functions, pointers can be used to access data that are not defined inside the function scope.
* Pointers can be used to operate on arrays very efficiently.

## Syntax for Declaring Pointers in C++

We declare the pointer variables like variables are declared in C++, except that we add an asterix before the variable name. So, pointer variables can be declared as follows:

`variable_type *variable_name`

We should initialize pointer variables to point nowhere ( like zero in initializing variables). The pointer variable initialization can be expressed as follows:

`variable_type *variable_name {nullptr}`

## Address Operator(&) in C++

* In C++, variables are stored in unique adresses.
* Address operator is a unary operator that evaluates to the address of its operand (cannot be constant or expression.)
