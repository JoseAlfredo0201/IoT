#include <stdio.h>

int main(int arg, char **argv){
    for (int i = 1;i<arg; i++){
        printf("Hola %s %s \n", argv[i], argv[2]);
    }
    return 0;
}