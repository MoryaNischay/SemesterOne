
# Instructions
- Fork this Repository
- Clone your forked repository to your pc ( ``git clone "url from clone option"``)
- Create a new branch for your modifications (ie. ``git checkout -b new-user``)
- Add new Files in the ./Programs Directory
- Make sure your Programs don't contain ``main`` and only comprise Functions
- The final executable functions should be in Pascal Case (LikeThis) while the file name should be in Camel Case (likeThis)
- In ``main.c`` add ``"#include "Programs/NAME_OF_PROGRAM.c"``
- Add your files (``git add .``), commit (``git commit -m "added NAME_OF_PROGRAMS_SEPERATED_BY_COMMAS"``) and push (``git push origin new-program``)
- Create a pull request
- Star this repository 🌟

# Valid Examples of Correct Code
``foobarbaz.c``
```c
#include <stdio.h>

int foo(){
    Top Secret Nuclar Codes
    return 420;
}

int bar(){
    How to overthrow the Present Democracy on Mars
    return 69;
}

int fooBarBaz(){
    How to overthrow the Present Democracy on Mars using Secret Nuclear Codes
    return funnyNumber
}
```
``main.c``
```c
/* Execution Site for Programs */

#include "Programs/addNumber.c"
...
#include "Programs/fooBarBaz.c"

int main()
{
    // Enter Functions you want to run
    HelloWorld();
}

```