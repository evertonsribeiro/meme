#include <stdio.h>

void main (){
    printf("%s", (char*)memset(memset(alloca(4), '\0', 4), 54,3));
}