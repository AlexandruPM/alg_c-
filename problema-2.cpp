#include <iostream>

using namespace std;

int main()
{
    int n,i,v[101],ok=1,x=-2000000000;
    cin>>n;
    // vecotorul are indicii de la 0 la n-1 nu de la 1 la n => daca initializezi i de la 1 la n si citesti valoarea in v[i] atunci v[0] o sa-ti fie neintializat
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    // daca sus schimbi i = 0; i<n; i++ si aici trebuie schimbat la fel
    for(i=1;i<=n;i++)
    {
        if(v[i]%2==0){
            // aici as schimba > in >= daca vin doua numere egale in sir tot sunt considerate ca fiind ordonate
            if(v[i]>x) x=v[i];
            else ok=0;
        }
    }
    //mai sus, avand in vedere ca ai variabila ok pe care o folosesi sa vezi daca elementele nu sunt ordnate poti sa folosesi while in loc e for
    // ceva de genul:
    /*
    i = 0;
    while (i++<n && ok == 1) 
    {
        if(v[i]%2==0)
        {
            if(v[i]>=x) x=v[i];
            else ok=0;
        }
    }
    // astefl nu o sa parcurgi tot sirul cand ai intalnit primul numar care nu e ok si ai iesit din bucla mai repede
    */
    
    if(ok==1) cout<<"DA";
    else cout<<"NU";
}
