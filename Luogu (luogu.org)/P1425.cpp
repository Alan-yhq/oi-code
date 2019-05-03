#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=c-a;
    f=d-b;
    if(f<0)
    {
        e--;
        f+=60;
    }
    cout<<e<<" "<<f<<endl;
    return 0;
}