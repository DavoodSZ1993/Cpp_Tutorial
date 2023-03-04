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
We can pass an array to a function by providing square brackets in the formal parameter description as follows: \\
`void print_array(int numbers []);`





## References
* [C++ Standard Library headers](https://en.cppreference.com/w/cpp/header)
* [C++ cmath library](https://en.cppreference.com/w/cpp/header/cmath)
* [C++ Standard Library](https://en.cppreference.com/w/cpp/header/cstdlib)
