#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED

//Funci�n para validar la contrase�a del usuario.
int login(){
    int i=0, attemp=0, password = 1407;

    for(i=3; i>0; i--){
        printf("Ingrese su pin numerico (tiene %d intentos): ", i);
        scanf("%d", &attemp);

        if(attemp == password){
            printf("\n");
            return 0;
        }else{
            printf("\n--- Constrasena incorrecta ---\n\n");
        }
    }
    printf("\n\n\n\n\n************   Demasiados intentos fallidos   ************\n\n\n\n\n");
exit(0);
}

int logincuenta(int hrm4){
    if((hrm4==1)||(hrm4==2)||(hrm4==3)){
        return 1;
    }else{
        printf("\t--- opcion no valida ---\n\n");
        return 0;
    }
}

//Funcion que comprueba si los datos ingresados por el usuario son validos.
//Funciona tanto para el deposito (suma) como para el retiro (resta)
int comprobacion(int operacion, float hrm2, float balance){
        switch(operacion){
        case 1:     //Comprobaci�n para el retiro
            if((balance>=hrm2)&&(hrm2>0)){
                return 1;
            }else{
                return 0;
            }
            break;
        case 0:     //Comprobacion para el deposito
            if(hrm2>0){
                return 1;
            }else{
                return 0;
            }
        }
    }

//Funcion encargada del cambio de valores en la variable global saldo
//Funciona para el deposito y tambi�n para el retiro
float cambio(int opcion, float saldo){

    float hrm1=0.0;
    int hrm3;

    if(opcion == 0){    //Proceso del deposito
        do{
            printf("\n\nSu saldo acutal es: %.2f\n", saldo);
            printf("La cantidad a depositar: ");
            scanf("%f", &hrm1);

            hrm3 = comprobacion(opcion,hrm1,saldo);   //Se mandan a verificar los valores

                if(hrm3){
                    saldo = saldo + hrm1;
                }else{
                    printf("\n--- cantidad no valida ---");
                }

        }while(hrm3!=1);    //Do-While para repetir el proceso hasta obtener una cantidad valida
    }

    if(opcion == 1){    //Proceso del retiro

        do{
            printf("\n\nSu saldo acutal es: %.2f\n", saldo);
            printf("La cantidad a retirar: ");
            scanf("%f", &hrm1);

            hrm3 = comprobacion(opcion,hrm1,saldo);   //Se mandan a verificar los valores

            if(hrm3){
                saldo = saldo - hrm1;
            }else{
                printf("\n--- cantidad no valida ---");
            }

        }while(hrm3!=1);    //Do-While para repetir el proceso hasta obtener una cantidad valida

    }

return saldo;   //Se regresa el valor de la variable global saldo
}

#endif // ATM_H_INCLUDED
