#include<iostream>
using namespace std;

int kadane(int A[],int n)
{
    int currsum=0;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        currsum+=A[i];
        if(currsum<0)
        {
            currsum=0;
        }
        mx=max(mx,currsum);
    }
    
    return mx;
}

int main()
{
    int n;
    cin>>n;
    
    int A[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    int sum=kadane(A,n);
    int wrapsum;
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=A[i]; 
        A[i]=-A[i];
    }
    wrapsum=totalsum+kadane(A,n);
    
    cout<<max(wrapsum,sum);
return 0;    
    
}