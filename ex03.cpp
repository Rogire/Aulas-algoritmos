#include <iostream>
using namespace std;

bool negativo(int vet[], int n){
    if(n==1){
        if (vet[0]<0)
            return true;
        else return false;
    }

    if(vet[n-1]<0)
        return true;
    else 
        return negativo(vet,n-1);
        
}
int main()
{
    int n, *vet;
    cin>>n;
    vet=new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    cout<<negativo(vet,n);
    delete [] vet;
    return 0;
}
