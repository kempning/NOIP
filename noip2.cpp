#include <bits/stdc++.h>
using namespace std;
#define N 1120
#define K 14
int getsum(int n,int k);
int main(int argc, char** arg)
{
    int prime[1120],size=0,n=0,k=0;
    string fileName = "prime.txt";
    int dp[1121][15];memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    ifstream prime_input (fileName.c_str());
    if(!prime_input){
        cout<<"can't open file:"<<fileName<<endl;
        return 0;
    }
    while(!prime_input.eof()){
        cout<<size<<endl; 
        prime_input >> prime[size];
        size++;
        
    }
    cin>>n>>k;
    
    for(int i=0;i<size;i++){    
        for(int j=14;j>=1;j--){    
           for(int m=1120;m>=prime[i];m--){
               dp[m][j]=dp[m][j]+dp[m-prime[i]][j-1];
            }
        }
    }
    cout<<dp[n][k]<<endl;

    //cout<<getsum(n,k)<<endl;
}
