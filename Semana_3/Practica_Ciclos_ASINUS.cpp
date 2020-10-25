#include <iostream>

using namespace std;

int main()
{
    int num1, cont=0, suma=0;
    char letra;


    cout << "Escribe la lista de numeros que desea sumar, y cuando termines coloca una letra";
    cout << letra << endl;
    //cin >> num1;
    while(num1 != letra){
            cout;
            cin >> num1;
            if(num1 == letra){
                    cout << "La cantidad de numeros ingresados son: ";
                    cout <<cont<<endl;
                    cout << "Y la suma de los numeros es: ";
                    cout <<suma<<endl;
            }else{
                cont++;
                suma+=num1;
              }
    }
    return 0;

}
