#include <bits/stdc++.h>

using namespace std;

bool anagrama(string S1, string S2);

int main(){
    string S1, S2;
    cin >> S1 >> S2;
    if (anagrama(S1, S2)){
        cout << "ANAGRAMA!" << endl;
    }
    else{
        cout << "No :(" << endl;
    }
}
bool anagrama(string S1, string S2){
    for(int i=0; i < S1.size(); i++){
        if (S2.find(S1[i]) == string::npos){
            return false;
        }
    }
return true;
}
