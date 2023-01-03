# 0x00. C-Hello, World
``C``
## Concept
* C is an imperative (procedural) language created by Dennis MacAlistair Ritchie
* C file needs to be compiled (for instance gcc) to create an executable file

**Declaration**  
Syntax: ``type var_name;``  
Array Declaration: ``type var_name[number_of_items];``  
Structures Creation and declaration:
```
struct structure_name {
    type name;
    [...]
};
struct structure_name var_name;
```

Function Sytax:
```
return_type function_name(type param, type2 param2 [...])  
[block]
```

Control structures:
```
if (expression)
    [block1]
else if (expression)
    [block2]
else
    [block3]
```

```
while (expression)
    [block]
```

```
for (initialize; condition; update)
    [block]
```

```
return (expression); /* expression is the return value of the function */
return;
```

Data types | Integer types (on most 64bits computers)
| Type | Storage size |
|------|--------------|
char | 1 byte
short | 2 bytes
int | 4 bytes
long | 8 bytes

1 byte = 8bit :: value range: 1 byte = 2^8 = 256  
therefore, char: value range: -128 to 127  
unsigned type:- type restricted to hold positive value, hence enlarged by 2.

The entry point | main  
Program starts with the entry point. From the main function you can call other functions, when main returns, the program stops.
``int main(void)``  
``int main(int argc, char **argv)``  
``int main(int argc, char **argv, char **env)``

``p = &c; /* p now holds the address in memory of the variable c */
