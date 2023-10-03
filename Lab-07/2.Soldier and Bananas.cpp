#include<iostream>
using namespace std;

int main(){

    int k,n,w;
    cin>>k>>n>>w;
    
    int total=0;
    
    for(int i=1;i<=w;i++){
        total=total+(i*k);
    }
    
    if(n>total){
        cout<<0<<endl;
    }else{
        cout<<total-n<<endl;
    }
    
    
    return 0;
}
