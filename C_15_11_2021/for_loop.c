#include <stdio.h>

int main(){
    int tablica[10]; //deklaracja tablicy 10 elementów typu int

    for(int i = 0; i < 10; ++i){
        tablica[i] = 2 * i; //przypisanie elementowi o indeksie i wartości 2 * i
    }

    for(int i = 0; i < 10; ++i){
        printf("tablica[%d] = %d\n", i, tablica[i]); //wypisanie wartości elementu tablicy
                                                     //o indeksie i
    }

    return 0;
}