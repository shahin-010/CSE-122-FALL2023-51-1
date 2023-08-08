#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    string arr;
    cin>>arr;
    int newarr[1001];

    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]=='+'){
            continue;
        }else{
            newarr[count++]=arr[i]-'0';
        }
    }
    sort(newarr,newarr+count);
    for(int i=0;i<=count;i++){
    cout<<newarr[i];
    if(i==count-1)
        break;
    cout<<'+';
    }
return 0;
}
