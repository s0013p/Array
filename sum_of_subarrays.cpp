#include<iostream>
#include <algorithm>

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
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        
        for(int j=i;j<n;j++)
        {
            sum=sum+A[j];
            cout<<"Sum is :"<<sum<<endl;
        }
        
        
    }
}