#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion;
    float num1, num2; //Operandos
    float resultado_suma, resultado_resta, resultado_division, resultado_multiplicacion;
    long long resultado_factorial;
    int flagNum1=0, flagNum2=0; //Flags que determinan si el operando correspondiente fue ingresado o no.

    while(seguir=='s')
    {
        opcion=menu(num1, num2, flagNum1, flagNum2);

        switch(opcion)
        {
            case 1:

                num1=operando();
                if (flagNum1==0) {flagNum1++;}
                break;

            case 2:
                num2=operando();
                if (flagNum2==0) {flagNum2++;}
                break;

            case 3:
                if(flagNum1==0 || flagNum2==0)
                {
                    printf("Para poder operar debe ingresar los dos numeros.\n \a");
                    break;
                }

                resultado_suma=suma(num1, num2);
                break;

            case 4:
                if(flagNum1==0 || flagNum2==0)
                {
                    printf("Para poder operar debe ingresar los dos numeros.\n \a");
                    break;
                }

                resultado_resta=resta(num1, num2);
                break;

            case 5:
                if(flagNum1==0 || flagNum2==0)
                {
                    printf("Para poder operar debe ingresar los dos numeros.\n \a");
                    break;
                }
                if(num2==0)
                {
                    printf("No se puede dividir por cero. Reingrese el divisor.\n");
                }

                resultado_division=division(num1, num2);
                break;

            case 6:
                if(flagNum1==0 || flagNum2==0)
                {
                printf("Para poder operar debe ingresar los dos numeros.\n \a");
                break;
                }

                resultado_multiplicacion=multiplicacion(num1, num2);
                break;

            case 7:
                if(flagNum1==0)
                {
                    printf("Por favor ingrese un valor en A\n \a");
                    break;
                }


                opcion=validar_numero_entero(num1);
                if(opcion==-1)
                {
                    break;
                }

                opcion=validar_numero_positivo(num1);
                if(opcion==-1)
                {
                    break;
                }

                resultado_factorial=factorial(num1);
                printf("El factorial es %d\n", resultado_factorial);
                break;

            case 8:
                if(flagNum1==0 || flagNum2==0)
                {
                printf("Para poder operar debe ingresar los dos numeros.\n \a");
                break;
                }

                if(num2==0)
                {
                    printf("No se puede dividir por cero. Reingrese el divisor.\n");
                }

                opcion=validar_numero_entero(num1);
                if(opcion==-1)
                {
                    break;
                }

                opcion=validar_numero_positivo(num1);
                if(opcion==-1)
                {
                    break;
                }

                resultado_suma=suma(num1, num2);
                resultado_resta=resta(num1, num2);
                resultado_division=division(num1, num2);
                resultado_multiplicacion=multiplicacion(num1, num2);
                resultado_factorial=factorial(num1);

                printf("El resultado del factorial es: %d\n", resultado_factorial);

                break;

            case 9:
                seguir = 'n';
                break;

            default:
                printf("Por favor ingrese una opcion valida.\n \a");
                break;
        }

    }
    return 0;
}
