/******************************************************************
* Programa: Calculadora (Trabajo Práctico Numero 1)
*
* Objetivo:
*   -Crear una función que permita ingresar un numero al usuario y lo pase por referencia.
*   -Crear funciones que permiten realizar 5 funciones matematicas basicas
*   (Suma, resta, multiplicación, división, factorización)
*   -Realizar una biblioteca que contenga todas las funciones utilizadas.
*   -Documentar las funciones.
*
* Autor: Ignacio Rolón
*
* *******************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <math.h>

int main()
{
    char seguir='s';
    int opcion=0;
    float numberOne;
    float numberTwo;
    int confirmInputOne = -1; //estas variables sirven para confirmar que ya hayan ingresado un numero.
    int confirmInputTwo = -1;
    int confirmedInputs = -1; //esto pasará a ser verdadero si se ingresaron ambos operandos
    while(seguir=='s')
    {
        if (confirmInputOne == 0)
        {
            printf("\n \n1- Ingresar 1er operando (A=%f)\n", numberOne);
        }else
        {
            printf("\n \n1- Ingresar 1er operando (A=x)\n");
        }
        if (confirmInputTwo == 0)
        {
            printf("2- Ingresar 2do operando (B=%f)\n", numberTwo);
        }else
        {
            printf("2- Ingresar 2do operando (B=x)\n");
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                confirmInputOne = firstNumber(&numberOne);
                break;
            case 2:
                confirmInputTwo = secondNumber(&numberTwo);
                break;
            case 3:
                addNumbers(numberOne, numberTwo, confirmedInputs);
                break;
            case 4:
                substractNumbers(numberOne, numberTwo, confirmedInputs);
                break;
            case 5:
                divideNumbers(numberOne, numberTwo, confirmedInputs);
                break;
            case 6:
                multiplyNumbers(numberOne, numberTwo, confirmedInputs);
                break;
            case 7:
                factorizeNumbers(numberOne, confirmInputOne);
                break;
            case 8:
                if(confirmedInputs)
                {
                    printf("\nERROR: No se ha ingresado alguno de los 2 operandos.");
                    if(!(confirmInputOne)) //se realiza esta distinción porque el factoreo puede realizarse con solo 1 operando
                    {
                        factorizeNumbers(numberOne, confirmInputOne);
                    }
                }else
                {
                    addNumbers(numberOne, numberTwo, confirmedInputs);
                    substractNumbers(numberOne, numberTwo, confirmedInputs);
                    divideNumbers(numberOne, numberTwo, confirmedInputs);
                    multiplyNumbers(numberOne, numberTwo, confirmedInputs);
                    factorizeNumbers(numberOne, confirmInputOne);
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }
        if(confirmInputOne == 0 && confirmInputTwo == 0)
        {
            confirmedInputs = 0;
        }
    }
    return 0;
}

