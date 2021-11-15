#include <stdio.h>

int main(){
    int tablica[10]; //deklaracja tablicy 10 elementów typu int
    int i = 0; //definicja zmiennej i - deklaracja i przypisanie jej wartości 0

    while(i < 10){
        tablica[i] = 2 * i; //przypisanie elementowi o indeksie i wartości 2 * i
        ++i; //zwiększenie wartości zmiennej i o 1
    }

    i = 0; 

    while(i < 10){
        printf("tablica[%d] = %d\n", i, tablica[i]); //wypisanie wartości elementu tablicy
                                                     //o indeksie i
        ++i; //zwiększenie wartości zmiennej i o 1
    }
}