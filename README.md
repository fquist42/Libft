## Libft
This is an expanded version of the "original" Libft Project from the 42-Core_Curriculum. 
The task is to create your own C library with some highly useful standard functions.

This library will expand with further projects.

## How to use it:
To use this library for your code just follow these 3 steps.

**0. Clone the repo**
```
git clone https://github.com/tjensen42/libft.git
```
**1. Make the library**

call Make from libft-folder 
```
make
```
**2. Include the Headerfile in your ```.c``` files**
```c
#include "libft.h"
```
**3. Compile your srcs with the library**
```
gcc your-srcs.c path_to_libft/libft.a -I./path_to_libft/libft/include
```


<br>
<hr>
<b>*All 42 projects must be written in C (later C++) in accordance to the 42 School Norm.<br></b>
<br>

At 42 we have to follow a strict Norm to improve the structure of our code.
> #### Sample restrictions:
> - All variables have to be declared and aligned at the top of each function.
> - Each function can not have more then 25 lines.
> - Projects should be created with allowed std functions otherwise it is considered cheating.
