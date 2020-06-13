#include "iostream"
using namespace std;
bool bisiesto (int anio){
    return ((anio %4 == 0 && anio %100!=0) || anio %400 == 0);
}// Por que son dos valores y pueden ser verdad o falso
int main()
{
    int anio;//Por evitar utilizar la n mis disculpas
    cout << "Anios bisiesto" << endl;
    cout << "Ingresa el anio" << endl;
    cin >> anio;
    cout << "El anio " << anio << (bisiesto(anio) ? "" : " no") << " es bisiesto." <<endl;
    cin.get();
    return 0;
}



