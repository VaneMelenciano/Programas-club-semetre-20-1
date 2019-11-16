#include <iostream>

using namespace std;

bool Primo(int n);

int main()
{
    int m=0, t=0, x=0;
    cin >> m;
    int num[m], num1[m];
    for(int i=0; i<m; i++){
        cin >> num[i];
    }
    for(int i=0; i<m; i++){
        while(num[i]>0){
            x=x +num[i]%10;
            num[i]=num[i]/10;
        }
        num1[i]=x;
        x=0; t=0;
    }
    for(int j=0; j<m; j++){
        int n=num1[j];
        if(Primo(n)==true){
            cout << "UltraPrimo" << endl;
            }
        else{
            cout << "No UltraPrimo" <<endl;
            }
    }
    return 0;
}

bool Primo(int n){
	bool bandera=true;

	for (int i=2; i<n; i++){
		if (n%i ==0){
			bandera=false;
			break;
		}
	}

	return bandera;
}
