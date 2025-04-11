#include <stdlib.h>
#include <string.h>

struct Producto {
    char nombre[60];
    float precio;
    int stock;
};

void nuevoproducto(struct Producto *dato){
    printf("Ingresa el nombre del producto (solo mayusculas): ");
    scanf("%s", dato->nombre);
    printf("Ingresa el precio del producto: ");
    scanf("%f", &dato->precio);
    printf("Ingresa el stock del producto: ");
    scanf("%d", &dato->stock);
};

void mostrarinventario(struct Producto data){
    printf("El nombre del producto es: %s \n", data.nombre);
    printf("El precio del producto es: %.2f \n", data.precio);
    printf("El stock del producto es: %d \n", data.stock);
};

int buscarproducto(struct Producto informacion, char busqueda[60]){
    if(strcmp(informacion.nombre, busqueda) == 0){
        printf("\nEste es el producto que estaba buscando: \n");
        mostrarinventario(informacion);
        return 1;
    }
};

int main(){

    int i=0;
    char busque[60];
    struct Producto p[5] = {
        {"MANZANITA", 12.50, 64},
        {"PEPSI", 18.50, 50},
        {"COCA", 19, 80},
        {"SPRITE", 17.50, 45}
        };

    nuevoproducto(&p[4]);

    printf("\nTenemos los siguientes productos: \n");

    for(i=0;i<5;i++){
        printf("%s \n", p[i].nombre);
    }

    printf("\nIngrese el producto que quiere buscar: ");
    scanf("%s", busque);

    for(i=0;i<5;i++){
        buscarproducto(p[i],busque);
    };

    /*for(i=0;i<5;i++){
        printf("\n\nEl %d producto es:\n", i+1);
        mostrarinventario(p[i]);
    }*/

return 0;
}
