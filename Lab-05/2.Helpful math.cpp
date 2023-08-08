#include<bits/stdc++.h>
#include<map>
#include <algorithm>
#include<vector>
#include<map>
#include<string>
 
using namespace std;
 
int main()
{
    int cnt=0;
    string s;
    cin>>s;
    int b[1000];
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'){
            continue;
        }
        else{
            b[cnt]=s[i]-'0';
            cnt++;
        }
    }
    sort(b,b+cnt);
    for(int i=0;i<cnt;i++){
        cout<<b[i];
        if(i==cnt-1){
            break;
        }
        cout<<"+";
    }
 
 
    return 0;
}
