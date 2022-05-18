#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,a[100][100],maxim,minim,s;
    float medie,v[100];
    ifstream f("note.in");
    f>>n>>m;
    for(i=0;i<=n-1;i++)
        for(j=0;j<=m-1;j++)
        f>>a[i][j];
    for(i=0;i<=n-1;i++)
    {
        maxim=0;
        minim=999;
        s=0;
        for(j=0;j<=m-1;j++)
        {
            if(a[i][j]>maxim) maxim=a[i][j];
            if(a[i][j]<minim) minim=a[i][j];
            s+=a[i][j];
        }
        s-=(maxim+minim);
        medie=s/(m-2);
        v[i]=medie;
    }
    for(i=0;i<=n-2;i++)
        for(j=i+1;j<=n-1;j++)
    {
        if(v[i]>v[j]) swap(v[i],v[j]);
    }
    for(i=0;i<=n-1;i++)
        cout<<v[i]<<endl;
}
