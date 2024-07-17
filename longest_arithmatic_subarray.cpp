#include<iostream>

using namespace std;

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
    
    int j=2;
    int ans=0;
    int pd=A[1]-A[0];
    int curr=2;
    
    
    while(j<n)
    {
        if(pd==A[j]-A[j-1])
        {
            curr++;
        }
        
        else
        {
            pd=A[j]-A[j-1];
            curr=2;
        }
        
        ans=max(ans,curr);
        j++;
    }
    
    cout<<ans;

}