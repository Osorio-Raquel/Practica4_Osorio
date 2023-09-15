#include <iostream>
#include<iostream>
using namespace std;

void ordena(int A[], int n){
    int i,j,m;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++)
        {
         if(A[i]>A[j])
         {
            m=A[i];
            A[i]=A[j];
            A[j]=m;
         }
        }
    }
    cout << "MATRIZ FINAL"<<endl;
    for(i=0;i<n;i++)
    {
    cout<<A[i]<<" ";
    }
    cout<< endl;
}
int main()
{
    int n=11;
    int A[11]={0,5,4,7,1,2,8,9,3,6,1};
    cout << "MATRIZ INICIAL"<<endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    ordena(A, n);
    return 0;
    }
