#include <bits/stdc++.h>
using namespace std;
int getsum(int n,int k);
int main(int argc, char** arg)
{
    int prime[1120][2],i=0,n=0,k=0;
    string fileName = "prime.txt";

    ifstream prime_input (fileName.c_str());
    if(!prime_input){
        cout<<"can't open file:"<<fileName<<endl;
        return 0;
    }
    while(!prime_input.eof()){
        prime_input >> prime[i++][0];
    }
    cin>>n>>k;
    cout<<getsum(n,k)<<endl;
}

int getsum(int n,int k){
    if()
}
