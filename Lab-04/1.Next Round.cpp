#include<iostream>
using namespace std;
 
int main(){
 
    int n,k,i,j,next=0;
    cin>>n;
    cin>>k;
    int arr[n];
 
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
 
    for(j=0;j<n;j++){
        if(arr[j]>=arr[k-1] && arr[j]>0){
            next++;
        }
    }
 
 
    cout<<next;
 
 
    return 0;
}
