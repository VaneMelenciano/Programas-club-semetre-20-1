#include <iostream>
//n(n+1)/2
using namespace std;


int main()
{
    int n, sum1=0, tot=0, total=0;
    cin >> n;
    for(int j=n; j>=1; j--){//total de sumatorias por hacer
    for(int i=1; i<=j; i++){
        sum1=((i+1)*i)/2;
        tot=tot+sum1;
    }
    total=total+tot;
    tot=0;
    }
    cout << total;
}
