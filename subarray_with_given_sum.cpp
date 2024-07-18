#include<iostream>
using namespace std;

int main()
{
    int n,S;
    cout<<"ENTER 'n' :";
    cin>>n;
    
    cout<<"ENTER 'S' :";
    cin>>S;
    
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    int i=0,j=0,st,en,sum=0;
    
    while(j<n && sum+A[j]<=S)
    {
        sum=sum+A[j];
        j++;
    }
    
    if(sum==S)
    {
        cout<<i+1<<" "<<j;
        return 0;
    }
    
    while(j<n)
    {
        sum=sum+A[j];
        
        while(sum>S)
        {
            sum=sum-A[i];
            i++;
        }
        
        if(sum==S)
        {
            st=i+1;
            en=j+1;
            break;
        }
        
        j++;
        
    }

    cout<<st<<" "<<en;

    
    
    
    
}























