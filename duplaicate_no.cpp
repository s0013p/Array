#include<iostream>
using namespace std;

int unique(int A[], int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^A[i];
    }
    for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }
    
    return ans;
}

int main()
{
    int n;
    cout<<"Enter total no. of elements :";
    cin>>n;
    int A[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    cout<<"Duplicate elemet is : "<<unique(A,n);

}