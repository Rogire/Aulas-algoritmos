#include <iostream>
using namespace std;

int menor(int vet[], int n){
    if(n==0){
        return vet[0];
    }
    int mn = menor(vet,n-1);
    return vet[n-1]<mn?mn = vet[n-1] : mn=mn;
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
    cout<<menor(vet,n);
    delete [] vet;
    return 0;
}
