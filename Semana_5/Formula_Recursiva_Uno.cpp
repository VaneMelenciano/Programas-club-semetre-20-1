#include <iostream>

using namespace std;

int res(int n);

int main()
{
    int n;
    cin >> n;
    cout << res(n) << endl;

    return 0;
}

int res(int n){
if(n<=5)return 1;

return 5 * res(n-2);
}
