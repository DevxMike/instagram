#include <stdio.h>

int main(){
    int tablica[10]; //deklaracja tablicy 10 elementów typu int

    for(int i = 0; i < 10; ++i){
        //przypisanie elementowi o indeksie i wartości 2 * i
        tablica[i] = 2 * i; 
    }

    for(int i = 0; i < 10; ++i){
        //wypisanie zawartości tablicy
        printf("tablica[%d] = %d\n", i, tablica[i]);
    }

    return 0;
}