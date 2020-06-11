/* Trabajo Practico 3 -
Alumno : Tomas Quintana
Legajo : 172.548.8 */

#include <iostream>
#include <cassert>
using namespace std;

bool IsBisiesto(unsigned);//prototipo de la funcion


//funcion de principal
int main (){
    assert(IsBisiesto (2000));// prueba con divisible por 400
    assert(IsBisiesto ( 1900));// prueba con divisible solo por 100
    assert(IsBisiesto (205));// Prueba con menor que 1582

         
system("PAUSE(0)");
}
bool IsIsBisiesto (unsigned year)//implementacion de la funcion
 {
     return year > 1582 and (year%4 == 0) and (year%100 !=0) or (year%400 == 0);// esto va fuera de int main porque son dos funciones
 }