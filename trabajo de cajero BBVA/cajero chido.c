#include <stdlib.h>
#include "ATM.h"

int main(){

    int option = 0, cuenta = 0, timer = 2;
    float saldo[3] = {1000.00, 2000.00, 10000,00};

    printf("La contrase�a es 1407\n");
    login();    //Llamado de la funci�n encargada de la verificaci�n de la contrase�a

    do{
    printf("*****         Seleccione Su Cuenta          *****\n\n");
    printf("1.\t Cuenta 1\n");
    printf("2.\t Cuenta 2\n");
    printf("3.\t Cuenta 3\n");
    printf("\nSeleccione una opcion:\t");
    scanf("%d", &cuenta);
    printf("\n************************************************\n\n");

    }while(logincuenta(cuenta)!=1);
    cuenta--;

    do{
        printf("*****        Cajero Automatico BBVA        *****\n\n");
        printf("1.\t Consultar saldo\n");
        printf("2.\t Depositar dinero\n");
        printf("3.\t Retirar dinero\n");
        printf("4.\t Salir\n");
        printf("\nSeleccione una opcion:\t");
        scanf("%d", &option);
        printf("\n************************************************\n\n\n");

        switch(option){
        case 1: //Muestra el saldo en pantalla
            printf("*****           Consultar Saldo            *****");
            printf("\n\nSu saldo es: %.2f\n\n", saldo[cuenta]);
            printf("************************************************\n\n\n");
            sleep(timer);
            printf("                     ------\n\n\n");
            break;
        case 2: //Manda a llamar a la funcion de cambio y muestra el valor despues de haberlo cambiado
            printf("*****           Depositar Dinero           *****");
            saldo[cuenta] = cambio(0, saldo[cuenta]);
            printf("\nSu saldo actual es: %.2f\n\n", saldo[cuenta]);
            printf("************************************************\n\n\n");
            sleep(timer);
            printf("                     ------\n\n\n");
            break;
        case 3: //Manda a llamar a la funcion de cambio y muestra el valor despues de haberlo cambiado
            printf("*****            Retirar Dinero            *****");
            saldo[cuenta] = cambio(1, saldo[cuenta]);
            printf("\nSu saldo actual es: %.2f\n\n", saldo[cuenta]);
            printf("************************************************\n\n\n");
            sleep(timer);
            printf("                     ------\n\n\n");
            break;
        case 4: //Da el mensaje de salida
            printf("*****                Salida                *****");
            printf("\n\n\n\tGracias por usar nuestro cajero BBVA\n\n\n");
            printf("************************************************\n\n\n");
            sleep(timer);
            break;
        default:    //Mesaje si la opcion no existe
            printf("                     ------\n\n\n");
            printf("************************************************");
            printf("\n\tOpcion no valida\n");
            printf("************************************************\n\n\n");
            sleep(timer);
            printf("                     ------\n\n\n");
            break;
        }

    }while(option != 4); //Do-While para repetir el proceso hasta que se ingrese una opcion valida



return 0;
}
