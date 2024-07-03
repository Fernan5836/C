#include <stdio.h>

int main(){
    int var1, var2, var3, prom;
    printf("Ingrese tres numeros:\n");
    scanf("%d\n" , &var1);
    scanf("%d\n" , &var2);
    scanf("%d" , &var3);

    prom = (var1 + var2 + var3)/3;
    printf("El promedio es: %d" ,  prom);
}