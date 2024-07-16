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
    
    int maximum=0;
    for(int i=0;i<n;i++)
    {      
        maximum=max(maximum,A[i]);       
    }
    cout<<maximum<<" ";


}