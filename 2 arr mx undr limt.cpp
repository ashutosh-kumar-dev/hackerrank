#include<iostream>
#include<math.h>
using namespace std;

int main(){

        int s,n1,n2;
        int arr[1005],arr1[1005];
        int ans=-1;
        cin>>s>>n1>>n2;

        for(int i=0;i<n1;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n2;i++){
            cin>>arr1[i];
        }

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++)
            {

                if((arr[i]+arr1[j])<=s) ans=max(ans,(arr[i]+arr1[j]));

            }
        }
        cout<<ans;


}
