// Print the following pattern
// Input: n = 4
// Output:
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int s=3;s>=i;s--)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int s=3;s>=i;s--)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}