#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


/** \brief Muestra el menu en pantalla.
 *
 * \param operando1 es el primer número.
 * \param operando2 es el segundo número.
 * \param flagOp1 es la bandera que comprueba si se le asignó un valor a num1.
 * \param flagOp2 es la bandera que comprueba si se le asignó un valor a num2.
 * \return la opción seleccionada del menu.
 *
 */
int menu(float operando1, float operando2, int flagOp1, int flagOp2)
{
        int opcion;

            if(flagOp1==0)
            printf("1- Ingresar 1er operando (A=x)\n");
        else
            printf("1- Ingresar 1er operando (A=%.3f)\n", operando1);

        if (flagOp2==0)
            printf("2- Ingresar 2do operando (B=y)\n");
        else
            printf("2- Ingresar 2do operando (B=%.3f)\n", operando2);

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        system("cls");

        return opcion;
}



/** \brief Solicita uno de los operandos.
 *
 * \return Devuelve el operando.
 *
 */

float operando(void)
{
    float numero;
    printf("Ingrese un numero: ");
    scanf("%f", &numero);
    return numero;
}


/** \brief Calcula la suma.
 *
 * \param Recibe el primer numero.
 * \param Recibe el segundo.
 * \return Retorna el resultado de la suma.
 *
 */
float suma(float a, float b)
{
    float resultado;
    resultado=a+b;
    printf("El resultado de la suma es: %.3f\n", resultado);
    return resultado;
}

/** \brief Calcula la resta.
 *
 * \param Recibe el primer numero.
 * \param Recibe el segundo.
 * \return Retorna el resultado de la resta.
 *
 */


float resta(float a, float b)
{
    float resultado;
    resultado=a-b;
    printf("El resultado de la resta es: %.3f\n", resultado);
    return resultado;
}

/** \brief Calcula la division.
 *
 * \param Recibe el primer numero.
 * \param Recibe el segundo.
 * \return Retorna el resultado de la division.
 *
 */


float division(float a, float b)
{
    float resultado;
    resultado=a/b;
    printf("El resultado de la division es: %.3f\n", resultado);
    return resultado;
}

/** \brief Calcula la multiplicacion.
 *
 * \param Recibe el primer numero.
 * \param Recibe el segundo.
 * \return Retorna el resultado de la multiplicacion.
 *
 */


float multiplicacion(float a, float b)
{
    float resultado;
    resultado=a*b;
    printf("El resultado de la multiplicacion es: %.3f\n", resultado);
    return resultado;
}



/** \brief Calcula el factorial.
 *
 * \param Recibe el primer numero.
 * \param
 * \return Retorna el resultado del factorial.
 *
 */


long long factorial (int num)
{
    long long resultado;

    if (num==0)
    {
        return 1;
    }

    resultado=num*factorial(num-1);

    return resultado;
}





/** \brief Valida que el numero sea entero, caracteristica necesaria para el factorial.
 *
 * \param Recibe el primer numero
 * \param
 * \return Retorna 0 si es entero y -1 si no es entero.
 *
 */


int validar_numero_entero(float x)
{
    int aux;
    int retorno;
    aux = (int)x;
    if(aux==x)
    {
        retorno=0;
    }
    else
    {
        printf("Para calcular el factorial, por favor ingrese un numero entero.\n");
        retorno=-1;
    }
    return retorno;
}



/** \brief Valida que el numero ingresado sea positivo. Necesario para el factorial.
 *
 * \param Recibe el primer numero-
 * \param
 * \return Devuelve -1 si es negativo.
 *
 */


int validar_numero_positivo(float x)
{
    if(x<0)
    {
        printf("Para calcular el factorial, por favor ingrese un numero positivo.\n");
        return -1;
    }
}
