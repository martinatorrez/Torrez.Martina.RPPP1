#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int aplicarDescuento(int precio);
int contarCaracteres(char cadena[], char caracter);
int main()
{
    int precio=100;
    int precioDescuento;
    char cadena[]="Holaa";
    int cantidadA;
    printf("Precio original: %d\n", precio);
    precioDescuento=aplicarDescuento(precio);
    printf("Precio con descuento: %d\n", precioDescuento);
    cantidadA = contarCaracteres(cadena,'a');
    printf("%d", cantidadA);
    return 0;
}
int aplicarDescuento(int precio)
{
    int descuento;
    int precioDescuento;
    descuento=precio*(5/100);
    precioDescuento=precio-descuento;

    return precioDescuento;
}
/*1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto
 y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main. */
 int contarCaracteres(char cadena[], char caracter)
 {
    int tam= strlen(cadena);
    int contadorCaracter=0;
    for(int i = 0; i < tam; i ++)
    {

        if(caracter == cadena[i])
        {

            contadorCaracter++;

        }

    }
    return contadorCaracter;
 }
 /*2. Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro
  y un carácter como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena */
