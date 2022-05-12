#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,a[100][100],maxim,minim,s,k,nr;
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
        nr=0;
        for(j=0;j<=m-1;j++)
        {
            if(a[i][j]>maxim) maxim=a[i][j];
            if(a[i][j]<minim) minim=a[i][j];
            s+=a[i][j];
            nr++;
        }
        s-=(maxim+minim);
        medie=s/(nr-2);
        k++;
        v[k]=medie;
    }
    for(i=0;i<=k-1;i++)
        for(i=1;i<=k;i++)
        if(v[k]>v[k-1]) swap(v[k+1],v[k]);
}
