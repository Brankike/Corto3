#include "iostream"
#include "stdlib.h" //libreria que se uso para la funcion exit ();
using namespace std;
int main()
{
    int x = 0, i = 0, numero;
    cout <<"Bienvenido al Numero Magico" << endl;
    cout << "Si te aburres puedes escribir cero y retirarte" << endl;
    cout << "Solo tienes 5 intentos para ganar \n Buena Suerte" << endl;
    numero = 46;
    do{
        cout << "Digite un numero del 1 - 100"<< endl;
        cin >> x;
        if(x == 0){
            cout << "Hasta la proxima" << endl;
            i++;//debido a que el programa se cierra se agrega el contador aquí
            cout << i << " intentos" << endl;
            exit (1); //terminar el programa
        }
        if(x < numero){
            cout << "El numero que buscas es mayor" << endl;
        }
        if(x > numero){
            cout << "El numero que buscas es menor" << endl;
        }
        if(x == numero){
            cout << "Felicidades lo Lograste" << endl;
            i++;//debido a que el programa se cierra se agrega el contador aquí
            cout << i << " intentos" << endl;
            exit (1);
        }
        i++;
        cout << i << " intentos" << endl;
    }while(i <= 4);
    cout << "Lo lamento, has fallado" << endl;
    return 0;
}



