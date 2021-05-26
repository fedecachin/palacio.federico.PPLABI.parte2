#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

int menu()
{
    int opcion;

    system("cls");
    printf("  ****menu de opciones****\n\n");
    printf("1. alta bicicleta\n");
    printf("2. modificar bicicleta\n");
    printf("3. baja bicicleta\n");
    printf("4. listar bicicletas\n");
    printf("5. listar tipos\n");
    printf("6. listar colores\n");
    printf("7. listar servicios\n");
    printf("8. alta trabajo\n");
    printf("9. listar trabajos\n");
    printf("10. mostrar bicicletas por un color\n");
    printf("11. mostrar bicicletas por un tipo\n");
    printf("12. mostrar bicicletas del menor rodado\n");
    printf("13. mostrar bicicletas por tipos\n");
    printf("14. mostrar cantidad de bicis de un color y mismo tipo seleccionados\n");
    printf("15. mostrar colores mas elgidos por los clientes\n");
    printf("16. salir\n");
    printf("ingrese una opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;

}
