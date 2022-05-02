#include <iostream>

using namespace std;

int main()
{
    int n,i,j,v[1001],a[1001],ok=1;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>v[i];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        for(j=1; j<=n; j++)
            if(v[j]==a[i])
            {
                v[j]=-1;
                j=n+1;
            }
    }
    for(i=1; i<=n; i++)
        if(v[i]!=-1)
        {
            ok=0;
            i=n+1;
        }
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
}
