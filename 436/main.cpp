#include <bits/stdc++.h>
using namespace std;
bool prim(int n){
    if(n<2) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0||n%3==0) return 0;
    for(int i=5;i*i<=n;i+=6)
        if(n%i==0||n%(i+2)==0) return 0;
    return 1;
}
int main(){
    int n,i,ma=0,x,ct;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>x;
        if(prim(x)){
            if(x>ma){
                ma=x;
                ct=1;
            }
            else if(x==ma) ct++;
        }
    }
    cout<<ma<<' '<<ct;
    return 0;
}