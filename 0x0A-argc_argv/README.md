# 0x0A. C - argc, argv
`C`

**Resource**
* [how to compile with unused variables](https://www.ibm.com/docs/en/ztpf/2021?topic=warnings-unused-variables-functions)

**Note**  
Arguments to main provide a useful opportunity to give parameters to programs. Typically this facility is used to direct he way the program goes about its task.

The declaration of main looks like this:
```
int main(int argc, char *argv[]);
```
This indicates that `main` is a function returning an integer. In hosted environments such as DOS or UNIX, this value (exit status) is passed back to the command line interpreter. Under UNIX, for example, the exit status is used to indicate that a program completed sucessfully (0) or some error occured (a non-zero value). If the host enviroment itself uses a different numbering convention, `exit` will do the necessary translation. Since the translation is implementation-defined, it is now considered better practice to use the values defined in `<stdlib.h>`: `EXIT_SUCCESS` and `EXIT_FAILURE`.

The first argument argv[0] will be a string containing the program's name or a null string if that is not available. Remaining elements of argv represent the arguments supplied to the program.

**How to compile with unused variable**
* Do not give the variable a name (C++)  
`void foo(int /*bar*/) {}`
* Tell your compiler using a compiler specific nonstandard mechanism  
`__attribute__((unused))`
* Switch the warning off  
In Gcc and Clang, add `-Wno-unused-parameter` option at the end of the command line (after options that switch unused parameter warning on, like `-Wall` `-Wextra`)
* Add a cast to void
```
void foo(int bar) {
    (void)bar;
}
```

## Tasks
| File | Description |
|------|-------------|
[0-whatsmyname.c](./0-whatsmyname.c) | prints program name followed by a new line
[1-args.c](./1-args.c) | prints the number of arguments passed into the main function
[2-args.c](./2-args.c) | prints all argument the main function receives
[3-mul.c](./3-mul.c) | program multiplies two numbers
[4-add.c](./4-add.c) | program adds positive numbers
[100-change.c](./100-change.c) | program prints the minimum number of coins to make change for an amount of money. (Usage: `./change cents` where cents is the amount of cents to give back)
