#include <iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    for(int i=2;i<=2*n;i+=2){
        s+=i;
    }
    cout<<"Suma este "<<s;
    return 0;
}
