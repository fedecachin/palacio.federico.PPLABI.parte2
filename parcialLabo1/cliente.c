#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

int cargarNombreCliente(int id, eCliente lista[], int tam, char nombre[])
{
    int todoOk = 0;
    int indice;

    if( lista != NULL && tam > 0 && nombre != NULL)
    {
        indice = buscarCliente(lista, tam, id);
        if(indice != -1)
        {
            strcpy(nombre, lista[indice].nombre);
            todoOk = 1;
        }

    }
    return todoOk;
}

int buscarCliente(eCliente lista[], int tam, int id)
{
    int indice = -1;

    if(lista != NULL && tam > 0)
    {
        for(int i = 0; i < tam; i++)
        {
            if(lista[i].id == id)
            {
                indice=i;

                break;

            }
        }

    }
    return indice;
}

void mostrarCliente(eCliente unCliente)
{
    printf("%d   %10s\n   %c", unCliente.id, unCliente.nombre, unCliente.sexo);
}

int mostrarClientes(eCliente clientes[], int tam)
{
    int todoOk = 0;
    if(clientes != NULL && tam > 0)
    {
        printf("******lista de clientes*******\n");
        printf("id    descripcion   sexo\n");
        for(int i = 0; i < tam; i++)
        {
            mostrarCliente(clientes[i]);
        }
    }
    return todoOk;
}
