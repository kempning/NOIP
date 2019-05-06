#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
    string a;
    int sum,point=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='O'&&a[i+1]=='X'){
            point++;
            sum=sum+point;
            point=0;
        }
        else if(a[i]=='O'){
            point++;
            sum=sum+point;
        }
        else{
            point=0;
        }
    }
    cout<<sum<<endl;
	return 0;
}