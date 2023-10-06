// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// * *
// * *
// ******
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=m;i++)
    {
        
        cout<<"* ";
        if(i==2)
        {
            cout<<endl;
        }
    }
    
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"*";
    }
}