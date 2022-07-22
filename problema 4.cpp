#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,vinaltimi[100],vinaltimisort[100],val;
    char vsexe[100];
    cin>>n;
    for(i=0; i<=n-1; i++)
        cin>>vinaltimi[i];
    for(i=0; i<=n-1; i++)
        cin>>vsexe[i];
    val=0;
    for(i=0; i<=n-1; i++)
    {
        val=vinaltimi[i];
        if(vsexe[i]=='b') val=vinaltimi[i]+100000;
        vinaltimisort[i]=val;
    }
    for(i=0; i<=n-1; i++)
        for(j=1; j<=n; j++)
            if(vinaltimisort[i]>vinaltimisort[i+1]) swap(vinaltimisort[i+1],vinaltimisort[i]);
    for(i=0; i<=n-1; i++)
        if(vinaltimisort[i]>100000) vinaltimisort[i]=vinaltimisort[i]-100000;
    for(i=0; i<=n-1; i++)
        cout<<vinaltimisort[i]<<" ";
}
