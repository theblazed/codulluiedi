#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    char c;
    cin>>n>>c;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<c;
        cout<<"\n";
    }
    
}