#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d=max(max(max(max(a+b*c,(a+b)*c),max(a*b+c,a*(b+c))),a*b*c),a+b+c);
    cout<<d;
}

