#include <iostream>
#include <string.h>

using namespace std;

string decifrado(string mensaje);
int a, b;

int main()
{
    string mensaje;
    cin >> a >> b;
    cin >> mensaje;
    string mensajeDesifrado = decifrado(mensaje);
    cout << mensajeDesifrado << endl;

    return 0;
}

string decifrado(string mensaje){
string res = "";
int longitud = mensaje.size();
    for(int i=0; i<longitud; i++){

        int x = (int)mensaje[i]-13; //cambiar a numero
        int g = ((a*x)+ b);
        int h = g % 26;
        int r = h + 97;
        res+=(char)r;
        //mayusculas
        for(int k = 0; res[k]; k++)
        res[k] = toupper(res[k]);
    }

   return res;
}
