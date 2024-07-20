#include<iostream>
using namespace std;

int unique(int A[], int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^A[i];
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
    
    cout<<"Unique elemet is : "<<unique(A,n);

}