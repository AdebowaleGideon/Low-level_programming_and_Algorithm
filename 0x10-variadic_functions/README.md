# 0x10. C - Variadic functions
`C`

**Resource**
* [Why Variadic Functions are Used](https://www.gnu.org/software/libc/manual/html_node/Why-Variadic.html)
* [Example of a Variadic Function](https://www.gnu.org/software/libc/manual/html_node/Variadic-Example.html)


**Note**  
`stdarg.h` is a header in the C standard library that allows functions to accept an indefinite number of arguments. It provides facilities for stepping through a list of function arguments of unknown number and type.

The contents of `stdarg.h` are typically used in `variadic functions` though they may be used in other function (e.g., vprintf) called by variadic functions.

**Variadic Functions**  
variadic functions are functions which may take a variable number of arguments and are declared with an `ellipsis` in place of the last parameter. A typical declaration is  
`int check(int a, double b, ...);`  
**Varaidic functions must have at least one named parameter.**

**Accessing the arguments**  
To access the unnamed arguments, one must declare a variable of type `va_list` in the variadic function. The macro `va_start` is then called with two argument: (the `va_list` type; name of the last named parameter of the function).  
After this, each invocation of the `va_arg` macro yields the next argument. The first argument to `va_arg` is the `va_list` and the second is the type of the next argument passed to the function.  
Finally, the `va_end` macro must be called on the `va_list` before the function returns. (It is not required to read in all the arguments.)

**Passing unnamed arguments to other calls**  
Because the size of the unnamed argument list is generally unknown, there is also no reliable, generic way to forward the unnamed arguments into another variadic function (even where determining the size of the argument list is possible by indirect means).  
To some extent, this restriction can be can be relaxed by employing `variadic macros` instead of variadic function. Additionally, most standard library procedures provide `v`-prefix alternative versions which accept a reference to the unnamed argument list (i.e. an initialized `va_list` variable) instead of the unnamed argument list itself. for example, `vfprintf()` is an alternative version of `fprintf()` expecting `va_list` instead of actual unnamed argument list. A user-defined variadic function can therefore initialize a `va_list` variable using `va_start` and pass it to an appropriate standard library function, in effect passing the unnamed argument list by reference instead of doing it by value.  
Because there is no reliable way to pass unnamed argument list by value in `C`, providing variadic `API` functions without also providing equivalent functions accepting `va_list` is considered a bad programming practice.

**Type safety**  
The compiler usually cannot check whether the unnamed arguments passed are of the type the function expects, or convert them to the required type. Therefore, care should be taken to ensure correctness in this regard, since undefined behaviour results if the types do not match. For example, if the expected type is `int *`, then a null pointer should be passed as `(int *)NULL`. Writing just `NULL` would result in an argument of type either `int` or `void *`, neither of which is correct.  
Another consideration is the default argument promotions applied to the unnamed arguments. A `float` will automatically be promoted to a `double`. Likewise, arguments of types narrower than an `int` is promoted to `int` or `unsigned int`. The function receiving the unnamed arguments must expect the promoted type.

**Example**
```
#include <stdio.h>
#include <stdarg.h>

/* print all args one at a time until a negative argument is seen;
   all args are assumed to be of int type */
void printargs(int arg1, ...)
{
  va_list ap;
  int i;

  va_start(ap, arg1); 
  for (i = arg1; i >= 0; i = va_arg(ap, int))
    printf("%d ", i);
  va_end(ap);
  putchar('\n');
}

int main(void)
{
   printargs(5, 2, 14, 84, 97, 15, -1, 48, -1);
   printargs(84, 51, -1, 3);
   printargs(-1);
   printargs(1, -1);
   return 0;
}
```
This program yields the output:
```
5 2 14 84 97 15
84 51

1
```
To call other var args function from withing your function (such as sprintf) you need to use the var arg version of the function:
```
void MyPrintf(const char *format, ...)
{
  va_list args;
  char buffer[BUFSIZ];

  va_start(args, format);
  vsnprintf(buffer, sizeof buffer, format, args);
  va_end(args);
  FlushFunnyStream(buffer);
}
```

## Tasks

| File | Description |
|------|-------------|
