#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * \brief Recibe el primer numero y lo envia por referencia
 * \param Variable a la cual se guardará el numero ingresado
 * \return 0 para confirmar que la función se completo de forma correcta.
 *
 */

int firstNumber(float *numberOne)
{
    float localNumberOne;
    printf("\nIngrese el primer numero \n");
    scanf("%f", &localNumberOne);
    *numberOne = localNumberOne;
    return 0;
}

/**
 * \brief Recibe el segundo numero y lo envia por referencia
 * \param Variable a la cual se guardará el numero ingresado
 * \return 0 para confirmar que la función se completo de forma correcta.
 *
 */

int secondNumber(float *numberTwo)
{
    float localNumberTwo;
    printf("\nIngrese el segundo numero \n");
    scanf("%f", &localNumberTwo);
    *numberTwo = localNumberTwo;
    return 0;
}

/**
 * \brief Suma los numeros ingresados por el usuario.
 * \param1 Primer numero (operando)
 * \param2 Segundo numero (operando)
 * \param3 Recibe un valor para confirmar si se ingresaron ambos operandos. Si es 0 se ingresaron, sino no se ingresaron.
 * \return 0 para confirmar que la función se completo de forma correcta. -1 si algo salió mal.
 *
 */

int addNumbers(float addFirstNumber, float addSecondNumber, int confirmInputs)
{
    int returnValue = -1;
    float mathResult;
    if (confirmInputs)
    {
        printf("ERROR: No se ha ingresado alguno de los 2 operandos.");
    }else
    {
        mathResult = addFirstNumber + addSecondNumber;
        printf("\nLa suma es: %f", mathResult);
        returnValue = 0;
    }
    return returnValue;
}

/**
 * \brief Resta los numeros ingresados por el usuario.
 * \param1 Primer numero (operando)
 * \param2 Segundo numero (operando)
 * \param3 Recibe un valor para confirmar si se ingresaron ambos operandos. Si es 0 se ingresaron, sino no se ingresaron.
 * \return 0 para confirmar que la función se completo de forma correcta. -1 si algo salió mal.
 *
 */

int substractNumbers(float subFirstNumber, float subSecondNumber, int confirmInputs)
{
    int returnValue = -1;
    float mathResult;
    if (confirmInputs)
    {
        printf("ERROR: No se ha ingresado alguno de los 2 operandos.");
    }else
    {
        mathResult = subFirstNumber - subSecondNumber;
        printf("\nLa resta es: %f", mathResult);
        returnValue = 0;
    }
    return returnValue;
}

/**
 * \brief Multiplica los numeros ingresados por el usuario.
 * \param1 Primer numero (operando)
 * \param2 Segundo numero (operando)
 * \param3 Recibe un valor para confirmar si se ingresaron ambos operandos. Si es 0 se ingresaron, sino no se ingresaron.
 * \return 0 para confirmar que la función se completo de forma correcta. -1 si algo salió mal.
 *
 */

int multiplyNumbers(float multiFirstNumber, float multiSecondNumber, int confirmInputs)
{
    int returnValue = -1;
    float mathResult;
    if (confirmInputs)
    {
        printf("ERROR: No se ha ingresado alguno de los 2 operandos.");

    }else
    {
        mathResult = multiFirstNumber * multiSecondNumber;
        printf("\nEl producto es: %f", mathResult);
        returnValue = 0;
    }
    return returnValue;
}

/**
 * \brief Factoriza los numeros ingresados por el usuario, multiplicando ese numero por todos sus anteriores.
 * \param1 Numero a factorizar (operando)
 * \param2 Recibe un valor para confirmar si se ingreso el valor a factorizar. Si es 0 se ingreso, sino no se ingreso.
 * \return 0 para confirmar que la función se completo de forma correcta. -1 si algo salió mal.
 *
 */

int factorizeNumbers(float factorFirstNumber, int confirmInputs)
{
    int returnValue = -1;
    float mathResult = factorFirstNumber;
    int i;
    float buffer = factorFirstNumber;
    float tempBuffer = roundf(buffer); //roundf(buffer) sirve para sacarle el contenido decimal a un numero
    if (confirmInputs)
    {
        printf("ERROR: No se ha ingresado el primer operando.");
    }else
    {
        if(tempBuffer - buffer == 0) //al restar un numero completo por su valor con decimal, podemos comprobar si un float tiene coma o no.
        {
            for(i = factorFirstNumber - 1;i>0;i--)
            {
            mathResult = mathResult * i;
            }
            printf("\nLa factorizacion es: %f", mathResult);
            returnValue = 0;
        }else
        {
            printf("ERROR: El numero no es entero.");
        }
    }
    return returnValue;
}


int divideNumbers(float divideFirstNumber, float divideSecondNumber, int confirmInputs)
{
    int returnValue = -1;
    float mathResult;
    if (confirmInputs)
    {
        printf("ERROR: No se ha ingresado alguno de los 2 operandos.");

    }else
    {
        if(divideSecondNumber == 0)
        {
            printf("ERROR: La division no puede ser por cero.");
        }else
        {
            mathResult = divideFirstNumber / divideSecondNumber;
            printf("\nLa division es: %f", mathResult);
            returnValue = 0;
        }
    }
    return returnValue;
}
