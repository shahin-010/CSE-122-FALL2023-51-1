#include <iostream>
using namespace std;

void big(int n)
{
    if(n==1)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a >= b && a >= c)cout<<a;
        else if (b >= a && b >= c) cout<<b;
        else cout<<c;
    }
    else if(n==2)
    {
        char a,b,c;
        cin>>a>>b>>c;
        if (a >= b && a >= c)cout<<a;
        else if (b >= a && b >= c) cout<<b;
        else cout<<c;
    }
    else if(n==3)
    {

        float a,b,c;
        cin>>a>>b>>c;
        if (a >= b && a >= c) cout<<a;
        else if (b >= a && b >= c) cout<<b;
        else cout<<c;
    }
}

int main()
{
    cout<<"1.Integer"<<endl<<"2.Character"<<endl<<"3.Float"<<endl;
    int n;
    cin>>n;
    big(n);

    return 0;
}
