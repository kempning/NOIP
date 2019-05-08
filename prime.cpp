#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("prime.txt","w",stdout);
    for(int i = 2; i < 1120; i++){
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                break;
            }        
            if(j == i - 1){
                cout << i << endl;
        }
        }

    }
    return 0;
}
