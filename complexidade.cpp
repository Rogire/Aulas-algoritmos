#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int atual=1, anterior=1,prox=0;
    
    if(n==1 || n==2)
        return 1;

    for (int c = 3; c <= n; c++)
    {
        prox = atual + anterior;
        atual= anterior;
        anterior= prox;
    }
    return prox;
}

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    cout<<fibonacci(n);
    return 0;
}
