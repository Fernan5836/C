#include <stdio.h>

int main(){
    int seg, min, hour;
    printf("Conversor de seg a min y horas\n");
    printf("Ingrese una cantidad de segundos: ");
    scanf("%d" , &seg);

    printf("Equivale a %d segundos\n" , seg );

    min = seg/60;
    printf("Equivale a %d minutos\n" , min);

    hour = seg/ 3600;
    printf("Equivale a %d hora" , hour);
    
}