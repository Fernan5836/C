#include <stdio.h>

int main(){
    int day, month, year, algoritmo;
    char * DayWeek[] = {"Sabado" , "Domingo" , "Lunes" , "Martes" , "Miercoles" , "Jueves" , "Viernes"};

    printf("Ingrese la fecha en el formato DD/MM/AAAA: ");
    scanf("%d/%d/%d" , &day , &month , &year);
    
    if (month < 3)
    {
        month += 12;
        year--;
    }

    algoritmo = (day + (13 * (month + 1) / 5) + year + (year / 4) - (year / 100) + (year / 400)) % 7;

    printf("El dia de la semana es: %s\n" , DayWeek[algoritmo]);
}
