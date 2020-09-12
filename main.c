#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/** \brief en la funcion sumarOperandos se toma los dos valores enteros para sumar.
 *
 * \param int operandoA.
 * \param int operandoB.
 * \return devuelve el resultado de la suma.
 *
 */
/** \brief en la funcion restarOperandos toma los dos valores enteros para restar.
 *
 * \param int operandoA.
 * \param int operandoB.
 * \return devuelve el resultado de la resta.
 *
 */
 /** \brief en la funcion multiplicacionOperando toma los dos valores enteros para multiplicar.
  *
  * \param int operandoA.
  * \param int operandoB.
  * \return devuelve el resultado de la multiplicacion
  *
  */
  /** \brief en la funcion divisionDeOperandos se toma los dos valores enteros para dividir.
   *
   * \param int operandoA.
   * \param int operandoB.
   * \return devuelve el resultado de la division en entero o flotante o si un numero se divide por cero envia un mensaje.
   *
   */
   /** \brief en funcion factorialOperandos toma los valores enteros de los dos valores.
    *
    * \param int operandoA.
    * \param int operandoB.
    * \return devuelve el resultado factorial de los dos operandos.
    *
    */


int main()
{
    int operandoA;
    int operandoB;

    printf("ingrese el primer operando:");
    scanf("%d",&operandoA);
    printf("ingrese el segundo operando:");
    scanf("%d",&operandoB);


    printf("\n los valores son A: %d e valor b: %d",operandoA,operandoB);
    printf("\n el resultado de la suma es: %d",sumarOperandos(operandoA,operandoB));
    printf("\n el resultado de la resta es: %d",restarOperandos(operandoA,operandoB));
    printf("\n el resultado de la multiplicacion es: %d",multiplacionOperando(operandoA,operandoB));
    if(operandoB == 0)
    {
        printf("\n no se puede dividir por 0");
    }
    else{
        printf("\n el resultado de la division es: %f",divisionDeOperandos(operandoA,operandoB));
    }
    printf("\n el resultado factorial de valor A es: %d",factorialOperandos(operandoA));
    printf("\n el resultado factorial de valor B es: %d",factorialOperandos(operandoB));
    return 0;
}
