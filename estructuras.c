#include <stdlib.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

struct Materias {
    char nombre[25];
    float calificacion;
    int creditos;
};

void imprimir(struct Estudiante info){
    printf("%s\n", info.nombre);
    printf("%d\n", info.edad);
    printf("%.2f", info.promedio);
};

void askcalificacion(struct Materias *mate){
    printf("Dame la califacion que sacaste en %s :", mate->nombre);
    scanf("%f", &mate->calificacion);
};

void modificar(struct Materias *dato1, struct Materias *dato2, struct Materias *dato3, struct Estudiante *boy){
    boy->promedio = (((dato1->calificacion) + (dato2->calificacion) + (dato3->calificacion))/3);
};

int main(){
    int i = 0;
    struct Estudiante classmate = {"Baruc Gutierrez", 19, 9.2,};
    struct Materias segundo[3] = {
        {"Progra Estruc", 0, 8},
        {"Calculo", 0, 8},
        {"TRS", 0, 4}};

    classmate.promedio = 9.7;

    imprimir(classmate);

    printf("\n\n**************************\n\n");

    for(i=0;i<3;i++){
       askcalificacion(&segundo[i]);
    };

    modificar(&segundo[0], &segundo[1], &segundo[2], &classmate);

    printf("\n\n**************************\n\n");

    imprimir(classmate);


return 0;
}
