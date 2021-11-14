#include <stdio.h>

int main(){
    int arg1 = 1, arg2 = 2;

    //#1
    if(arg1 < arg2){
        printf("Liczba %d jest mniejsza od liczby %d\n", arg1, arg2);
    } //konstrukcja if

    //#2
    if(arg1 > arg2){
        printf("Liczba %d jest wieksza od liczby %d\n", arg1, arg2);
    }
    else{
        printf("Liczba %d jest mniejsza lub rowna liczbie %d\n", arg1, arg2);
    } //konstrukcja if-else

    //#3
    if(arg1 == arg2){
        printf("Liczba %d jest rowna liczbie %d\n", arg1, arg2);
    }
    else if(2 * arg1 == arg2){
        printf("Liczba 2 * %d jest rowna liczbie %d\n", arg1, arg2);
    }
    else{
        printf("Liczba %d jest rozna od liczby %d\n", arg1, arg2);
    } //konstrukcja if-else if

    return 0;
}