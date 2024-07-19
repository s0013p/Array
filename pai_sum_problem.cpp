// OPTIMISED APPROACH

#include<iostream>
using namespace std;

int main()
{
    int n,S;
    cin>>n;
    
    cout<<"Enter S :";
    cin>>S;
    
    int A[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    int low=0;
    int high=n-1;
    
    while(low<high)
    {
        if(A[low]+A[high]==S)
        {
            cout<<low<<" "<<high;
            break;
        }
        else if(A[low]+A[high]>S)
        {
            high--;
        }
        else
        {
            low++;
        }
    }

return 0;    
    
}