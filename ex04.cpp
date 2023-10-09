#include <iostream>
using namespace std;

int iguais(int vet1[], int vet2[], int n){
    if(n==1){
        if (vet1[0]==vet2[0])
            return -1;
        else return 0;
    }
    int atual = iguais(vet1,vet2,n-1);
    return vet1[n-1]==vet2[n-1]?atual:n;
}

int main()
{
int n,*vet1,*vet2;
cin>>n;
vet1= new int [n];
vet2= new int [n];

for (int i = 0; i < n; i++)
{
    cin>>vet1[i];
}

for (int i = 0; i < n; i++)
{
    cin>>vet2[i];
}

cout<<iguais(vet1,vet2,n);

delete[]vet1;
delete[]vet2;
return 0;
}
