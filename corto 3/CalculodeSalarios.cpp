#include "iostream"
using namespace std;
int main()
{
    int i = 1, n;//El contador es igual a 1 debido que si es cero ejecuta el servicio una vez más
    float hn, he, st, sr, a, b, c;//agregue más variable para poder diferenciar mejor los pasos
    cout << "Calculo de Salarios" << endl;
    cout << "Ingrese la Cantidad de Salarios a Caclular:";
    cin >> n;
    do{
        cout << "Ingrese las Horas de Trabajo" << endl;
        cout << "Ingrese Horas Extras:" << endl;
        cin >> he;
        cout << "Ingrese Horas Laborales" << endl;
        cin >> hn;
        he = (he*2.50);
        hn = (hn*1.75);
        st = (he+hn);
        if(st >= 500){ //Mayor o igual de 500 dolares recibe renta
            a = ((st * 10)/100);
            a = (st - a);//Se resta el porcentaje obtenido de la cantidad entera y se sistituye
            b = ((a * 4)/100);
            b = (a - b);
            c = ((b * 6.25)/100);
            sr = (b -c);
            cout << "Salario total:"<< st << endl;
            cout << "Salario real:" << sr << "\n"  << endl;
        }else{ //Menor de 500 dolares 
            a = ((st * 4)/100);
            a = (st - a);
            b = ((a * 6.25)/100);
            sr = (a - b);
            cout << "Salario total:"<< st << endl;
            cout << "Salario real:" << sr << "\n" << endl;
        }
        i++;//contador del bucle
    }while (i <= n);
    return 0;
}

