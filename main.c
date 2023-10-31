#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void foo(void); //prototype
void bar(void); //prototype

int main(int argcn, char **argv){
    foo();
    bar();
    printf("Hello!\n");
}
void foo(void){
    printf("foo!\n");
}

void bar(void){
    printf("Bar!\n");
}