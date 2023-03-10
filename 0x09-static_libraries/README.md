# 0x09. C - Static libraries
`C`

**Resource**  

**Note**  
**Building And Using Satic Libraries**  
As developed programs tends to grow larger and larger, they bring up the overall compilation and linking time to a large figure, and polluting out makefile, and the directory where the source file is placed.  
It is at this point we start thinking about combining out source code into small units of related files, that can be managed with a separate makefile, possibly by a different programmer (for a multi-programmer project).

**What is a "C" Library**  
A library is a file containing several object files, that can be used as a single entity in a linking phase of a program.  
**Normally the library is indexed, so it is easy to find symbols (functions, variables and so on) in them.** For this reason, linking a program whose object files are ordered in libraries is faster than linking a program whose object files are separated on the disk.  
Also, when using a library, we have fewer files to look for and open, which even further speeds up linking.

**Static libraries**  
They are just  collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime (only the program's executable file is needed in order to run the program).

**Shared (dynamic) libraries**  
They are linked into the program in two stages. first, during compile time, the linker **verifies** that all the symbols (functions, variables, ..) required by the program are either linked into the program, or in one of its shared libraries. However, the object fiels from the dynamic library are not inserted into the executable file. Instead, when the program is started, a program in the system (called a dynamic loader) checks out which shared libraries were linked with the program, loads them to memory, and attaches them to the copy of the program in memory.

The complex phase of dynamic loading makes launching the program slightly slower, but this is a very insignificant drawback, that is out-weighted by a great advantage - if a second program linked with same shared library is executed, it can use the same copy of the shared library, thus saving a lot of memory and the executable files much smaller.

However, there is one drawback to this arrangement. If we re-compile the dynamic library and try to run a second copy of our program with the new library, we'll soon get stuck - the dynamic loader will find that a copy of the library is already stored in memory, and thus will attach it to our program, and not load the new (modified) version from disk. However, there are ways around this too.

**Creating A static "C" Library Using "ar" and "ranlib"**  
ar (archiver) - the basic tool used to create, modify and extract static libraries [see man page](https://man7.org/linux/man-pages/man1/ar.1.html)
```
ar rc libutil.a util_file.o util_net.o util_math.o
```
This command creates a static library named 'libutil.a' and puts copies of the object files "util_file.o", "util_net.o" and "util_math.o" in it. If the library file already exists, it has the object files added to it, or replaced, if they are newer than those inside the library. The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to replace older object files in the library, with the new object files.

After an archive is created, or modified, there is a need to index it. This index which is used by the compiler to speed up symbol-lookup inside the library.

randlib - the command used to create or update the index
```
randlib libutil.a
```

When an archive file's index generation date (stored inside the archive file) is older than thie file's last modification date (stored in the file system), a compiler trying to use this library will complain its index is out of date, and abort. To overcome the problem:
1. Use 'randlib' to re-generate the index
2. When copying the archive file to another location, use 'cp -p', instead of only 'cp' to keep all attributes of the file, including its access permissions, owner and its last modification date.

**Using A "C" Library In A Program**  
To use our archive in a program. It is done by adding the library's name to the list of object file names to the linker, using a special flag, normally '-l'
```
gcc main.o -L -lutil -o main
```
This will create a program using object file "main.o" and any symbols it requires from the "util" static library.  
Note: **we omitted the "lib" prefix and ".a" suffix when mentioning the library on the link command.** The linker attaches these parts back to the name of the library to create a name of a file to look for.  
The usage of '-L' flag tells the linker that libraries might be found in the given directory('.') in addition to the standard locations where the compiler looks for system libraries.

nm - list symbols from object files [see man page](https://man7.org/linux/man-pages/man1/nm.1.html)


Note: the linker will first look for a shared '.so' version of the library and if not available, the static '.a' is sought for. This can be overridden using some linker flag (refer to the compiler's or the linker's manual for info about the flags).

## Tasks
| Task | File(s) | Description|
|------|---------|------------|
C Programmimg | [libmy.a](./libmy.a) | a static library containing all functions listed in the header file [main.h](./main.h)
Scripting | [create_static_lib.sh](./create_static_lib.sh) | script creates a static library called liball.a from all .c file in the current directory
