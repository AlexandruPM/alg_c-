#include <iostream>

using namespace std;

int main()
{
    int n,i,v[101],ok=1,x=-2000000000;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]%2==0){
            if(v[i]>x) x=v[i];
            else ok=0;
        }
    }
    if(ok==1) cout<<"DA";
    else cout<<"NU";
}
