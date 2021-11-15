#include <stdio.h>

int main(){
    int arg1 = 1, arg2 = 2;

    //#1
    if(arg1 < arg2){ //jeśli zmienna arg1 przechowuje wartość mniejszą niż zmienna arg2
        printf("Liczba %d jest mniejsza od liczby %d\n", arg1, arg2); 
        //wypisz to na ekranie
    } //konstrukcja if

    //#2
    if(arg1 > arg2){ //jeśli zmienna arg2 przechowuje wartość mniejszą niż zmienna arg1
        printf("Liczba %d jest wieksza od liczby %d\n", arg1, arg2); 
        //wypisz to na ekranie
    }
    else{
        printf("Liczba %d jest mniejsza lub rowna liczbie %d\n", arg1, arg2); 
        //w przeciwnym wypadku
        //wypisz, że większą lub równą wartość przechowuje zmienna arg2
    } //konstrukcja if-else

    //#3
    if(arg1 == arg2){ //jeśli wartość arg1 jest równa wartości arg2
        printf("Liczba %d jest rowna liczbie %d\n", arg1, arg2);
        //wypisz to na ekranie
    }
    else if(2 * arg1 == arg2){ //w przeciwnym wypadku jeśli zmienna arg1 jest dwa razy większa niż arg2
        printf("Liczba 2 * %d jest rowna liczbie %d\n", arg1, arg2);
        //wypisz to na ekranie
    }
    else{
        printf("Liczba %d jest rozna od liczby %d\n", arg1, arg2);
        //w przeciwnym wypadku, że wartość arg1 jest różna od arg2
    } //konstrukcja if-else if

    return 0;
}