
#include<iostream>
using namespace std;

void intersection(int A[],int B[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i]==B[j])
            {
                cout<<A[i]<<" ";
                B[j]=-1111;
                break;
            }
            
        }
    }
}

int main()
{
    int n,m;
    cout<<"ENTER SIZE OF ARRAY 1 :";
    cin>>n;
    cout<<"ENTER SIZE OF ARRAY 2 :";
    cin>>m;
    
    int A[n],B[m];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>B[i];
    }
    
    intersection(A,B,n,m);
}








// ****************************************************************************************************************************************************************************************************************************************************

// METHOD 1: Using Vector





#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
                arr2[j] = -1;  // Mark the element as visited
                break;
            }
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "ENTER SIZE OF ARRAY 1: ";
    cin >> n;
    cout << "ENTER SIZE OF ARRAY 2: ";
    cin >> m;

    vector<int> arr1(n), arr2(m);

    cout << "ENTER ELEMENTS OF ARRAY 1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "ENTER ELEMENTS OF ARRAY 2: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> intersect = findArrayIntersection(arr1, n, arr2, m);

    cout << "INTERSECTION ELEMENTS: ";
    for (int elem : intersect) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
