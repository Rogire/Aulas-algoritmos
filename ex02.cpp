#include <iostream>
using namespace std;
int Pares(int vet[], int n){
    if(n==1){
        if((vet[0]%2==0))
        return 1;
        else 
        {
            return 0;
        }
    }
    
    int ultimo = vet[n-1];
    int paresRestante=Pares(vet,n-1);
    if (ultimo%2==0)
    {
        paresRestante++;
    }
     return paresRestante;
    
}

int main()
{
    int n, *vet;
    cin>>n;
    vet = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    cout<<Pares(vet,n);

    delete[]vet;
    return 0;
}
