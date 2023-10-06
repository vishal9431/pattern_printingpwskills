// Print the following pattern
// Sample Input : n = 4
// Output :
//    ****
//   ****
//  ****
// ****
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int s=i-1;s>=1;s--)
        {
            cout<<" ";
        }
        for(int i=4;i>=1;i--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}