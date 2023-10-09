#include <iostream>
#include <cstdlib>
using namespace std;

//=================================AUXILIARES=====================================

int* troca(int *a, int *b){

    int aux= *a;
    *a= *b;
    *b= aux;

    return NULL;
}

void imprimeVetor(int vet[], int n, int troc, int comp)
{
    cout<<"Número de trocas:"<<troc<<" Número de comparações: "<<comp<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<vet[i]<<" ";
    }
    
}
/*
int IndexMenor(int vet[], int i, int n){
    for (int i = 0; i < n; i++)
    {
        
    }
    
}
*/
//==============================================================================
//=============================================BUBBLE SORT======================
void bubbleSortDec(int vet[], int n){
    bool trocou=false;
    for(int j=0; j<n; j++){
        for (int i = 0; i < n-1-j; i++)
        {
            if(vet[i]<vet[i+1])
            {
                troca(&vet[i],&vet[i+1]);
            }
            else
                trocou=false;
        }
        if(!trocou)
            break;
    }
}   

void bubbleSortCresc(int vet[], int n){
        bool trocou=false;
    for(int j=0; j<n; j++){
        for (int i = 0; i < n-1-j; i++)
        {
            if(vet[i]>vet[i+1])
            {
                troca(&vet[i],&vet[i+1]);
            }
            else
                trocou=false;
        }
        if(!trocou)
            break;
    }
}   
//==============================================================================

//=========================SELECTION SORT=======================================

void selectionSort(int vet[],int n)
{
    int nComp=0;
    int nTroc=0;
    int minDx=0;

    for (int c = 0; c < n-1; c++)
    {
        for (int i = 0; i < n; i++)
            {
                nComp++;
                if (vet[i]<vet[minDx])
                {
                    minDx=1;
                }
                
            }
    
    troca(&vet[0],&vet[minDx]);
    nTroc++;
    }
    imprimeVetor(vet,n,nTroc,nComp);
}
//==============================================================================

//==========================INSERTION SORT======================================
void InsertionSort(int vet[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i-1; j > 0; j--)
        {
            if (vet[j+1] < vet[j])
            {
                troca(&vet[j+1], &vet[j]);
            }
            else
                break;            
        }
        
    }
    
}

int ValorAleatorio(int m){
    return rand() % m;
}

int* vetorAleatorio(int n){
    int *vet = new int[n];

    for (int i = 0; i < n; i++)
    {
        vet[i]=ValorAleatorio(100);
    }
    
    return vet;
    delete [] vet;
}

int main()
{
    srand(time(0));
    int n, *vet;
    cin>>n;
    vet=new int [n];
    vet=vetorAleatorio(n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<vet[i]<<endl;
    }
/*
    bubbleSortDec(vet, n);

    for (int i = 0; i < n; i++)
    {
        cout<<vet[i]<<" ";
    }

    bubbleSortCresc(vet,n);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<vet[i]<<" ";
    }
*/
    InsertionSort(vet,n);
    for (int i = 0; i < n; i++)
    {
        cout<<vet[i]<<" ";
    }
    delete [] vet;
    return 0;
}
