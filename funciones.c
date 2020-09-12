int sumarOperandos(int operandoA, int operandoB)
{
    int resultado;

    resultado=operandoA+operandoB;

    return resultado;
}

int restarOperandos(int operandoA, int operandoB)
{
    int resultado;

    resultado=operandoA-operandoB;

    return resultado;
}

int multiplacionOperando(int operandoA, int operandoB)
{
    int resultado;

    resultado=operandoA*operandoB;

    return resultado;
}

float divisionDeOperandos(int operandoA, int operandoB)
{
    return operandoA/operandoB;
}

int factorialOperandos(int n){
        return (n <= 1)?1:n * factorialOperandos(n-1);

}
