#include <iostream>

using namespace std;

int main()
{
    int v, res;
    //numero de operaciones por realizar
    int n;
    cout << endl;
    cin >> n;
    cout << endl;
    //arreglo
    int a[n];
    //valores del arreglo
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << endl;

    for (int i=0; i<n; i++){
        res=(a[i]*(a[i]-1))/2;
        cout << res;
        cout << endl;
    }
    return 0;
}
