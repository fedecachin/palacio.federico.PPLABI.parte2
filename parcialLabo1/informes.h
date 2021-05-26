#include "tipo.h"
#include "color.h"
#include "cliente.h"
#include "bicicletar.h"
#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED



#endif // INFORMES_H_INCLUDED

/** \brief lista todas las bicicletas ,en el vector de bicicletas, del color elejido por el usuario
 *
 * \param Bicicletas[] eBicicleta
 * \param tamB int
 * \param colores[] eColor
 * \param tamC int
 * \param tipos[] eTipo
 * \param tamT int
 * \param clientes[] eCliente
 * \param tamCl int
 * \return int devuelve 0 si hubo un error en la carga de los parametros y 1 si no hubo errores
 *
 */
int listarColorBicicleta(eBicicleta Bicicletas[], int tamB, eColor colores[], int tamC, eTipo tipos[], int tamT, eCliente clientes[], int tamCl);

/** \brief lista todas las bicicletas ,en el vector de bicicletas, del tipo elejido por el usuario
 *
 * \param Bicicletas[] eBicicleta
 * \param tamB int
 * \param colores[] eColor
 * \param tamC int
 * \param tipos[] eTipo
 * \param tamT int
 * \param clientes[] eCliente
 * \param tamCl int
 * \return int devuelve 0 si hubo un error en la carga de los parametros y 1 si no hubo errores
 *
 */
int listarTipoBicicleta(eBicicleta Bicicletas[], int tamB, eColor colores[], int tamC, eTipo tipos[], int tamT, eCliente clientes[], int tamCl);

/** \brief lista todas las bicicletas ,en el vector de bicicletas, con el rodado mas chico
 *
 * \param Bicicletas[] eBicicleta
 * \param tamB int
 * \param colores[] eColor
 * \param tamC int
 * \param tipos[] eTipo
 * \param tamT int
 * \param clientes[] eCliente
 * \param tamCl int
 * \return int devuelve 0 si hubo un error en la carga de los parametros y 1 si no hubo errores
 *
 */
int listarBicicletasMenorRodado(eBicicleta Bicicletas[], int tamB, eColor colores[], int tamC, eTipo tipos[], int tamT, eCliente clientes[], int tamCl);

/** \brief lista todas las bicicletas, separadas por tipo
 *
 * \param Bicicletas[] eBicicleta
 * \param tamB int
 * \param colores[] eColor
 * \param tamC int
 * \param tipos[] eTipo
 * \param tamT int
 * \param clientes[] eCliente
 * \param tamCl int
 * \return int devuelve 0 si hubo un error en la carga de los parametros y 1 si no hubo errores
 *
 */
int listarBicicletasTodosTipos(eBicicleta Bicicletas[], int tamB, eColor colores[], int tamC, eTipo tipos[], int tamT, eCliente clientes[], int tamCl);

/** \brief cuenta y muestra la cantidad de bicicletas de un mismo tipo y mismo color, elejidos por el usuario
 *
 * \param bicicletas[] eBicicleta
 * \param tamB int
 * \param tipos[] eTipo
 * \param tamT int
 * \param colores[] eColor
 * \param tamC int
 * \return int devuelve 0 si hubo un error en la carga de los parametros y 1 si no hubo errores
 *
 */
int contarBicicletasTipoColor(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamT, eColor colores[], int tamC);

/** \brief mustra el color mas eljido por los usuarios
 *
 * \param bicicletas[] eBicicleta
 * \param tamB int
 * \param colores[] eColor
 * \param tamC int
 * \return int devuelve 0 si hubo un error en la carga de los parametros y 1 si no hubo errores
 *
 */
int coloresMasElegidos(eBicicleta bicicletas[], int tamB, eColor colores[], int tamC);
