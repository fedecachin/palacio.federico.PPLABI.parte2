#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "informes.h"
#include "validaciones.h"

int listarColorBicicleta(eBicicleta Bicicletas[], int tamB, eColor colores[], int tamC, eTipo tipos[], int tamT, eCliente clientes[], int tamCl)
{
    int colorElejido;
    int bandera;
    int todoOk = 0;

    if(Bicicletas != NULL && tamB > 0 && colores != NULL && tamC> 0 && tipos != NULL && tamT > 0 && clientes != NULL && tamCl > 0)
    {
        mostrarColores(colores, tamC);
        printf("elija id del color: ");
        scanf("%d", &colorElejido);
        while(!validarColor(colorElejido))
        {
            printf("error, elija id del color: ");
            scanf("%d", &colorElejido);
        }

        for(int i = 0; i < tamB; i++)
        {
            if(Bicicletas[i].isEmpty == 0 && colorElejido == Bicicletas[i].idColor)
            {
                mostrarBicicleta(Bicicletas[i], colores, tamC, tipos, tamT, clientes, tamCl);
                bandera = 1;
            }
            if(bandera == 0)
            {
                printf("no se encotro ninguna bicicleta de ese color");
            }
        }
        todoOk = 1;
    }
    return todoOk;
}

int listarTipoBicicleta(eBicicleta Bicicletas[], int tamB, eColor colores[], int tamC, eTipo tipos[], int tamT, eCliente clientes[], int tamCl)
{
    int tipoElejido;
    int bandera;
    int todoOk = 0;

    if(Bicicletas != NULL && tamB > 0 && colores != NULL && tamC > 0 && tipos != NULL && tamT > 0 && clientes != NULL && tamCl > 0)
    {
        mostrarTipos(tipos, tamT);
        printf("elija id del tipo: ");
        scanf("%d", &tipoElejido);
        while(!validarTipo(tipoElejido))
        {
            printf("error, elija id del tipo: ");
            scanf("%d", &tipoElejido);
        }

        for(int i = 0; i < tamB; i++)
        {
            if(Bicicletas[i].isEmpty == 0 && tipoElejido == Bicicletas[i].idTipo)
            {
                mostrarBicicleta(Bicicletas[i], colores, tamC, tipos, tamT, clientes, tamCl);
                bandera = 1;
            }
            if(bandera == 0)
            {
                printf("no se encotro ninguna bicicleta de ese tipo\n");
            }
        }
        todoOk = 1;
    }
    return todoOk;
}

int listarBicicletasMenorRodado(eBicicleta Bicicletas[], int tamB, eColor colores[], int tamC, eTipo tipos[], int tamT, eCliente clientes[], int tamCl)
{
    int todoOk = 0;
    int banderaMenor = 0;
    float menorRodado;

    if(Bicicletas != NULL && tamB > 0 && colores != NULL && tamC > 0 && tipos != NULL && tamT > 0 && clientes != NULL && tamCl > 0)
    {
        for(int i = 0; i < tamB ; i++)
        {
            if(banderaMenor == 0 || (Bicicletas[i].rodado < menorRodado))
            {
                menorRodado = Bicicletas[i].rodado;
                banderaMenor = 1;
            }
        }

        for(int i = 0; i < tamB ; i++)
        {
            if(Bicicletas[i].rodado == menorRodado)
            {
                mostrarBicicleta(Bicicletas[i], colores, tamC, tipos, tamT, clientes, tamCl);
            }
        }
        todoOk = 1;
    }
    return todoOk;
}

int listarBicicletasTodosTipos(eBicicleta Bicicletas[], int tamB, eColor colores[], int tamC, eTipo tipos[], int tamT, eCliente clientes[], int tamCl)
{
    int todoOk = 0;
    char tipoDescripcion[20];
    int bandera;
    int idTipo;

    if(Bicicletas != NULL && tamB > 0 && colores != NULL && tamC > 0 && tipos != NULL && tamT > 0 && clientes != NULL && tamCl > 0)
    {
        system("cls");

        for(int i = 0; i < tamT; i++)
        {

            idTipo = tipos[i].id;
            strcpy(tipoDescripcion, tipos[i].descripcion);
            printf("\n******************* tipo %s ************************\n", tipoDescripcion);
            bandera = 1;

            for(int j = 0; j < tamB; j++)
            {
                if(Bicicletas[j].isEmpty == 0 && Bicicletas[j].idTipo == idTipo)
                {
                    mostrarBicicleta(Bicicletas[j], colores, tamC, tipos, tamT, clientes, tamCl);
                    bandera = 0;
                }
            }
            if(bandera)
            {
                printf("no hay bicicletas de este tipo\n");
            }
        }
        todoOk = 1;
    }
    return todoOk;
}

int contarBicicletasTipoColor(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamT, eColor colores[], int tamC)
{
    int todoOk = 0;
    int tipoElejido;
    int colorElejido;
    int contador = 0;

    if(bicicletas != NULL && tamB > 0 && tipos != NULL && tamT > 0 && colores != NULL && tamC > 0)
    {
        mostrarTipos(tipos, tamT);
        printf("elija id del tipo: ");
        scanf("%d", &tipoElejido);
        while(!validarTipo(tipoElejido))
        {
            printf("error, elija id del tipo: ");
            scanf("%d", &tipoElejido);
        }

        mostrarColores(colores, tamC);
        printf("elija id del color: ");
        scanf("%d", &colorElejido);
        while(!validarColor(colorElejido))
        {
            printf("error, elija id del color: ");
            scanf("%d", &colorElejido);
        }

        for(int i = 0; i < tamB; i++)
        {
            if(bicicletas[i].idTipo == tipoElejido && bicicletas[i].idColor == colorElejido)
            {
                contador++;
            }
        }
        if(contador == 0)
        {
            printf("no hay ninguna bicicleta con ese mismo color y ese mismo tipo\n");
        }
        else
        {
            printf("la cantidad de bicicletas con ese mismo color y ese mismo tipo son %d\n", contador);
        }
        todoOk = 1;

    }
    return todoOk;
}

int coloresMasElegidos(eBicicleta bicicletas[], int tamB, eColor colores[], int tamC)
{
    int todoOk = 0;
    int contadorGris = 0;
    int contadorNegro = 0;
    int contadorBlanco = 0;
    int contadorAzul = 0;
    int contadorRojo = 0;
    char nombreColor[20];

    if(bicicletas != NULL && tamB > 0 && colores != NULL && tamC > 0)
    {
        for(int i = 0; i < tamB ; i++)
        {
            switch(bicicletas[i].idColor)
            {
            case 5000:
                contadorGris++;
                break;
            case 5001:
                contadorNegro++;
                break;
            case 5002:
                contadorBlanco++;
                break;
            case 5003:
                contadorAzul++;
                break;
            case 5004:
                contadorRojo++;
                break;
            }
        }
        if(contadorGris > contadorNegro && contadorGris > contadorBlanco && contadorGris > contadorAzul && contadorGris > contadorRojo)
        {
            cargarNombreColor(5000, colores, tamC, nombreColor);
            printf("el color mas elegido por los clientes es %s\n", nombreColor);
        }else if(contadorNegro > contadorBlanco && contadorNegro > contadorAzul && contadorNegro > contadorRojo )
        {
            cargarNombreColor(5001, colores, tamC, nombreColor);
            printf("el color mas elegido por los clientes es %s\n", nombreColor);

        }else if(contadorBlanco > contadorAzul && contadorBlanco > contadorRojo )
        {
            cargarNombreColor(5002, colores, tamC, nombreColor);
            printf("el color mas elegido por los clientes es %s\n", nombreColor);

        }else if(contadorAzul > contadorRojo)
        {
            cargarNombreColor(5003, colores, tamC, nombreColor);
            printf("el color mas elegido por los clientes es %s\n", nombreColor);
        }else
        {
            cargarNombreColor(5004, colores, tamC, nombreColor);
            printf("el color mas elegido por los clientes es %s\n", nombreColor);
        }

        todoOk = 1;

    }
    return todoOk;
}

