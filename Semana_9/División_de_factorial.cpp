#include <iostream>
using namespace std;
int factorial(int n);
int faltorial2(int m);

int main()
{
    int n,m;
    cin >> n >> m;
    cout << factorial(n)/factorial(m);

    return 0;
}

int factorial(int n){
    int s;
    if(n == 0|| n == 1) return (s=1);
    s = n * factorial(n-1);
    return s;

}
int faltorial2(int m){
    int c;
    if(m == 0|| m == 1) return (c=1);
    c = m * factorial(m-1);
    return c;
}
