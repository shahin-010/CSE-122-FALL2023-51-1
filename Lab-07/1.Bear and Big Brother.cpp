#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int i=0;

    while(a<=b){
        a=a*3;
        b=b*2;

        i+=1;
    }

    cout<<i<<endl;

    return 0;
}
