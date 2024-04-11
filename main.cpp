//Nombre: Cristian Brayan Huanca Chambi  
//fecha: 11/04/2024
//
/*La idea del proyecto es crear una calculadora en C++ que permite al usuario realizar operaciones matemáticas como Fibonacci, factorial y sumas de números, ofreciendo un menú 
interactivo para seleccionar la operación deseada y mostrar el resultado correspondiente.*/

#include <iostream>
#include <math.h>
using namespace std;

int fibonacci(int n, int a = 0, int b = 1) {
    if (n > 0) {
        cout << a << " ";
        fibonacci(n - 1, b, a + b);
    }
}

int factorial(int a) {
    if (a == 0) {
        return 1; // Cambiado a retornar 1 para el factorial de 0
    } else {
        cout << a << "*";
        return a * factorial(a - 1);
    }
}
void SumatoriaDe1(int n,int a=1){
    int r=0;
    for(int i=a;i<=n;i++)
    {
        r=r+1;
        cout<<1;
        if (i < n)
            cout <<"+";

    }
        cout<<"="<<r<<endl;
}

int Suma_Sucesiva(int a, int c) {
    int ultimo;
    ultimo = a + c - 1;
    return (a * (c + ultimo)) / 2;
}

int Suma_Cuadrados(int a,int c) {
    int ultimo , suma = 0;
    ultimo = a+c-1;
    for (int i = c; i <= ultimo ; i++) {
        suma += pow(i,2);
    }
    return suma;
}

int main() {
    int a, b, c;
    do {
        cout << endl;
        cout << "||-------------|| Calculadora||-------||Prueba||---------------||" <<endl;
        cout << "---|| Elija una opción: ||---" << endl;
        cout << "Fibonacci(1)" << endl;
        cout << "Factorial(2)" << endl;
        cout << "Suma de Repeticiones(3)" << endl;
        cout << "Suma de Números(4)" << endl;
        cout << "Suma de Cuadrados(5)" << endl;
        cout << "Salir(6)" << endl;
        cout << "--> ";
        cin >> a;

        switch (a) {
            case 1:
                do{
                    int c;
                    cout<<"Digite el valor de i:"<<endl;
                    cin>>c;
                    cout<<"Digite el valor de n:"<<endl;
                    cin>>b;
                    }while(b<c);
                        SumatoriaDe1(b,c);
                break;

            case 2:
                do {
                    cout << "Ingrese un numero positivo :" ;
                    cin >> b;
                    cout <<endl;
                } while (b < 0);
                cout << "!" << b << " es: " << factorial(b) << endl;
                break;

            case 3:
                do {
                    cout << "Ingrese un numero positivo :";
                    cin >> b;
                    cout << "Número de veces para repetir ese numero: ";
                    cin >> c;
                    cout <<endl;
                } while (b < 0);
                cout << "La suma de " << b << " repetido " << c << " veces es: " << b * c << endl;
                break;

            case 4:
                int c;
                do {
                    cout << "Ingrese los Limite Superior positivo : " ;cin >> b;
                    cout << "Ingrese los Limite Inferior positivo : " ;
                    cin >> c;
                    cout <<endl;
                } while (b < 0 || c < 0 || c > b);
                cout << "La suma de numeros positivos es: " << Suma_Sucesiva(b,c) << endl;
                break;

            case 5:
                do {
                    cout << "Ingrese los Limite Superior positivo : " ;cin >> b;
                    cout << "Ingrese los Limite Inferior positivo : " ;
                    cin >> c;
                    cout <<endl;
                } while (b < 0 || c < 0 || c > b);
                cout << "La suma de los cuadrados es: " << Suma_Cuadrados(b,c) << endl;
                break;

            case 6:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (a != 6);

    return 0;
}

