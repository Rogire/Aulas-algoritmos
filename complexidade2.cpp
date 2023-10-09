#include <iostream>
using namespace std;

bool repetiu(int vet[], int n){

    for (int j = 0; j <= n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if(vet[j]==vet[i])
                    return true;
                else
                    return true;
            }
        }
    return false;
}

void imprimeSemRepeticao(int vet[], int n){
    for (int i = 0; i < n; i++)
    {
        if(repetiu(vet,i))
            cout<<" ";
        else if(!repetiu(vet,i))
            cout<<vet[i];
    }
    
}
int main()
{
    int vet[5],n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    imprimeSemRepeticao(vet,n);
}