#include <stdio.h>

int main(){
    int var1;
    printf("Ingrese un numero: ");
    scanf("%d", &var1);
    if (var1%2 == 0)
    {
        printf("El numero es par");
    }else{
        printf("El numero es impar");
    }
}