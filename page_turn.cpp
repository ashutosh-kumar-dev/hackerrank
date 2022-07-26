#include <iostream>
#include<cmath>
using namespace std;

int main(){

        int n,p;
        int x;
        int m;
        cin>>n;
        cin>>p;
        if(p%2!=0){
            x= n-(p-1);
            m=min(p/2,(x)/2);
        }
        else{
        m=min(p/2,(n-p)/2);}
        cout<<m;


}
