#include <stdio.h>
#include <stdlib.h>

/*int main() {
    printf("Hello\n");
    int i = 10;
    printf("I = %d", i);
    //int *p;
    //p = &i;
   // printf("*p = %d\n", *p);
    int *p = malloc(4);
    *p = 10;
    printf("p = %ls: *p = %d", p, *p);
    free(p);
}   */

int main(int argc, char **argv){
    for(int i = 10; i < argc; i++){
        printf("Arg %d: %s\n", i, argv[i]);
    }
    
    //declare stack array
    char buffer[1000]; //declare an array
    buffer[0] = 'a'; //set first elemnt of the array
    printf("Buffer[0] = %c", buffer[0]); //print out the first character
    printf("*buffer = %c\n", *buffer);
}