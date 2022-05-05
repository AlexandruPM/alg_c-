#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream f("note.in");
    int n,m,i,j,a[100][100],v[100],s,minim,maxim;
    cin>>n>>m;
    minim=9999;
    maxim=-9999;
    p=0;
    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
            f>>a[i][j];
    for(i=0; i<=n-1; i++)
        s=0;
    for(j=0; j<=m-1; j++){
            if(a[i][j]<minim) minim=a[i][j];
    if(a[i][j]>maxim) maxim=a[i][j];
    }
}
