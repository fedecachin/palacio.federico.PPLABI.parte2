#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct
{
    int id;
    char nombre[20];
    char sexo;
}eCliente;

#endif // CLIENTE_H_INCLUDED



/** \brief busca y consigue el nombre de un cliente por si id
 *
 * \param id int
 * \param lista[] eCliente
 * \param tam int
 * \param nombre[] char
 * \return int devuelve 0 si hubo un error en la carga de los parametros y 1 si no hubo errores
 *
 */
int cargarNombreCliente(int id, eCliente lista[], int tam, char nombre[]);

/** \brief busca el lugar en el vector de clientes donde se encuntra el cliente con el id ingresado
 *
 * \param lista[] eCliente
 * \param tam int
 * \param id int
 * \return int devuelve el indice en el vector de clientes donde se encuntra la solicitada
 *
 */
int buscarCliente(eCliente lista[], int tam, int id);

/** \brief muestra a un cliente
 *
 * \param unCliente eCliente
 * \return void
 *
 */
void mostrarCliente(eCliente unCliente);

/** \brief muestra en su totalidad el vector de clientes en forma de lista
 *
 * \param clientes[] eCliente
 * \param tam int
 * \return int devuelve 0 si hubo un error en la carga de los parametros y 1 si no hubo errores
 *
 */
int mostrarClientes(eCliente clientes[], int tam);
