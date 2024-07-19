/*Kadanes Algorithm*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int A[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
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
       
    cout<<mx;
    
return 0;    

/*Time Complexity :O(n)*/    
}









// *******************************************************************************************************************************************************



/*OPTIMIZED APPROACH
    CUMULATIVE SUM APPROACH


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int A[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    int currsum[n+1];
    currsum[0]=0;

    for(int i=1;i<=n;i++)
    {
        currsum[i]=currsum[i-1]+A[i-1];
    }  
    
    int sum=0;
    int mx=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            sum=currsum[i]-currsum[j];
            mx=max(sum,mx);
        }
    }
    
    cout<<mx;
    
return 0;    

Time Complexity :O(n2)

}


*/


// *****************************************************************************************************************************************************

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
    
//     int A[n];
    
//     for(int i=0;i<n;i++)
//     {
//         cin>>A[i];
//     }
    
//     int sum=0;
//     int mx=0;
//     for(int i=0;i<n;i++)
//     {   
//         for(int j=i;j<n;j++)
//         {
//             sum=0;
//             for(int k=i;k<=j;k++)
//             {
//                 // cout<<A[k]<<" ";
//                 sum=sum+A[k];
//             }
//             // cout<<endl;
//         }
//         mx=max(mx,sum);
//     }
    
//     cout<<mx;
    
// return 0;    

// /*Time Complexity :O(n3)*/ 
// }