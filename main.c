#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

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
