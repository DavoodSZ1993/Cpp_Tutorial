## C++ cmath Library
  * `float pow(float base, float exp)`: Computes the value of base raised to the power exp.
  * `float sqrt(float arg)`: Computes the square root of arg.
  * `float cbrt(float arg)`: Computes the cube root of arg.
  * `float sin(float arg)`: Computes the sine of arg (measured in radians).
  * ......

## C++ Standard Library (cstdlib)
* `size_t`: Is the unsigned integer type of the result of `sizeof` operator.
* `int rand()`: Returns a pseudo-random integer value between `0` and `RAND_MAX` (`0` and `RAND_MAX` included).
* `void srand(unsigned seed)`: Seeds the pseudo-random number generator used by `rand()` with the value seed.

## C++ ctime Library
* `time_t time(time_t *arg)`: Returns the current calender time encoded as `time_t` object, and also stores it in the object pointed to by `arg`, unless `arg` is a null pointer (`nullptr`).

## Function Prototypes in C++
* In C++ compiler must know the function details before it is called. This can be challenging and troublesome in programs with large number of functions.
* However, this problem can be easily solved by function prototying. 
* A function prototype is a **declaration** of the function that tells the program about the type of value returned by the function and the number and type of arguments.

## Arrays in C++ Functions
We can pass an array to a function by providing square brackets in the formal parameter description as follows:

`void print_array(int numbers []);`

The array elements are not copied. Since the array name evaluates to the location of the array in memory, this address is what is copied. So the function has no idea how many elements are in the array since all it knows is the location of the first element (the name of the array). We can solve this problem by including the size of the array as the function input argument.

`void print_array(int numbers [], size_t size)`

In fact, when we pass an array to a function, a pointer is actually passed.

## Pass by Reference in C++ Functions
We can use reference parameters to tell the compiler to pass in a reference to the actual parameter. The formal parameter will now be an alias for the actual parameter.

We can use `&` sign to pass by reference in C++ functions.

`void scale_number(int &num)`

## Scope Rules in C++
C++ uses static or lexical scoping.

### Local or Block Scope
* Identifiers declared in a block {}.
* Function parameters have block scope, only visible within the block {} where declared.
* Function local variables are only active while the function is executing and local variables are not preserved between function calls.
* With nested blocks, inner blocks can see out but outer blocks cannot see in.

### Static Local Variable
* Declared with static qualifier

`static int value {10};`

* Value is preserved between function calls.
* Only initialized the first time the function is called.

### Global Scope
* Identifier declared outside any function or class.
* Visible to all parts of the program after the global indentifier has been declared.
* Global constants are OK, but don't use global variables.

## Const in C++ Function Declaration
The const keyword specifies that a variable's value is constant and tells the compiler to prevent the programmer from modifying it.

## Passing Vector to a C++ Function

### Pass by Value
Pass by value keeps the original vector unchanged and doesn't modify the original values of the vector.

### Pass by Reference
Passing by reference saves a lot of time and makes the implementation of the code faster.

If we do not want a function to modify a vector, we can pass it as a **const** reference also.







## References
* [C++ Standard Library headers](https://en.cppreference.com/w/cpp/header)
* [C++ cmath library](https://en.cppreference.com/w/cpp/header/cmath)
* [C++ Standard Library](https://en.cppreference.com/w/cpp/header/cstdlib)
