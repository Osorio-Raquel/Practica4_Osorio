// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 19/09/2023

// Fecha modificación: 20/09/2023
 
// Número de ejericio: 1

// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto.

#include <iostream>
using namespace std;

void verificar(int year){
    if (year % 4 == 0){
        cout << "El año es bisiesto"<<endl;
    }
    else{
        cout << "El año no es bisiesto"<<endl;
    }

}
int main()
{
    int year;
    cout << "Ingrese el año"<<endl;
    cin >> year;
    verificar(year);
    return 0;
}