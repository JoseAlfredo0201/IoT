#include <unistd.h>
#include <stdio.h>

int main (){
    int pid = fork();
    if (pid ==0){
        printf("soy el hijo\n");
        execl("./hola", "hola", "pedro", "mary",(char *)NULL);
        printf("ESTA LINEA NO DEBE MOSTRARSE");
    }
    printf("soy el padre");
    return 0;
}