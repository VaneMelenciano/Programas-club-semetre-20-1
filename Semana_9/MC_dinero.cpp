#include <iostream>

void aumenta(int n);
void disminuye(int n);

using namespace std;

int main(){
    int n, i, j;
    cin>>n;
    aumenta(n);
    cout << endl;
    disminuye(n);
}

void aumenta(int n){
int i,j;
    int m=n-1;
for (i=1; i<=n; i++){ //filas
    for (j=0; j<i; j++)//columnas
        cout<<"";
            for (j=0; j<i; j++)
                cout<<"$";
                if(j!=n){
                cout<<endl;
                }
                }
}

void disminuye(int n){
int i,j;
int m=n-1;
for (i=m; i>0; i--){ //filas
    for (j=0; j<i; j++){//columnas
                cout<<"$";
    }
                if(j!=n){
                cout<<endl;
                }
                }
}
