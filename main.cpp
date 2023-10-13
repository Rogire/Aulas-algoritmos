#include <iostream>
using namespace std;

void troca(int *a, int *b){
    int aux=*a;
    *a =*b;
    *b =aux;
}


void BubbleSort(int vet[], int n){
    
    for(int i=1; i<=n-1; i++)
    {
        for(int j=0; j<i; j++)
            if(vet[j]>vet[j+1])
                troca(&vet[j],&vet[j+1]);
    }
}

void selectionSort(int vet[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int c=i+1; c<n; c++)
        {
            if(vet[c]<vet[min])
            {
                min = c;
            }
        }
        
        troca(&vet[i],&vet[min]);
    }
}

void selSortRec(int vet[], int n){
    int i=0;
    auxSel(int vet[], int n, int i){
        
    }
    }



//EXERCICIO 1
void cocktailSort(int vet[], int n){
    
    for(int i=1; i<=n/2; i++)
    {
        for(int j=0; j<i; j++)
            if(vet[j]>vet[j+1])
                troca(&vet[j],&vet[j+1]);
    }
    
    for(int i=(n/2)+1; i<=n-1; i++)
    {
        for(int j=(n/2); j<i; j++)
            if(vet[j]>vet[j+1])
                troca(&vet[j],&vet[j+1]);
    }
}

//EXERCICIO 2
int* auxGnome(int vet[], int n, int i)
{
    if(i==n)
        return vet;
    
    if(i==0)
    {
        i++;
        auxGnome(vet,n,i);
    }
    else
    {
        for(int c=0; c<=i; c++)
        {
            if(vet[c-1]>vet[c])
            {
                troca(&vet[c-1], &vet[c]);
                c--;
            }
        }
        
    }
    auxGnome(vet, n, i+1);
    return vet;
}

void gnomeSort(int vet[], int n)
{
    int i=0;
    auxGnome(vet, n, i);
}
//EXERCICIO 3

int menor(int vet[], int n)
{
    int minimo=vet[0];
    for(int c=0; c<n; c++)
    {
        if(vet[c]<minimo)
            minimo = vet[c];
    }
    for(int i=0; i<n;i++)
        if(vet[i]==minimo)
            return i;
    return 1;
}

void selSortRec(int vet[], int n){
    for(int i=0; i<n-1; i++)
    {
        int min = menor(vet,n);
        
        troca(&min, &vet[i]);
    }
}

int main()
{
    srand(time(0));
    int *vet, n;
    cin>>n;
    vet= new int[n];
    
    for(int i=0; i<n; i++)
        vet[i]=rand()%100;
    
    for(int i=0; i<n; i++)
        cout<<vet[i]<<" ";
       
    cout<<endl;
    selSortRec(vet, n);
    
    for(int i=0; i<n; i++)
        cout<<vet[i]<<" ";
        
    delete [] vet;
    return 0;
}