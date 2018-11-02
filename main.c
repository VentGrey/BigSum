/* Instrucciones:
 * Calcule e imprima la suma de los elementos dentro de un arreglo, siempre
 * teniendo en cuenta que algunos de los enteros ingresados pueden ser
 * enormes.
 *
 * Parámetos de la función:
 * ar: Un arreglo de enteros
 *
 * Formato de entrada:
 * La primera línea de entrada consiste en un entero n.
 * La segunda línea contiene n enteros separados por un espacio dentro del
 * arreglo.
 *
 * Formato de salida:
 * La suma de los enteros del arreglo :v
 *
 * Condiciones
 * 1 <= n <= 10
 * 10 <= ar[i] <= 10^10
 */

#include <stdio.h>

// prototipo de función

int main(int argc, char *argv[]) {
        int n;
        long long int array[n], suma;

        printf("Ingrese la cantidad de elementos a evaluar: ");
        scanf("%d", &n);

        if(!(n >= 1) || !(n <= 10) ) {

                printf("Las condiciones no se cumplieron, saliendo");
                return 1;

        } else {
                int suma;
                for(int i = 0; i < n; i++) {
                        scanf("%lld", &array[i]);
                }

                 for(int i = 0; i < n; i++) {
                         suma = suma + array[i];
                }
        }
        printf("%lld", suma);
        return 0;

}
