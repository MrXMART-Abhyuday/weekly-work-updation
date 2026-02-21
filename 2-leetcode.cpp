#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    // int n=3;
    for(int i=n-1;i>=0;i--){
        cin>>arr1[i];
    }
    for(int i=n-1;i>=0;i--){
        cin>>arr2[i];
    }
    int sum[n+1]={0};
    for(int i=n-1;i>=0;i--){
        sum[i]=sum[i]+arr1[i]+arr2[i];
        if(sum[i]>=10){
            sum[i]=sum[i]%10;
            sum[i+1]=sum[i+1]+1;
        }
    }

    if(sum[0]==0){
        n--;
    }
    for(int i=n;i>=0;i--){
        cout<<sum[i]<<" ";  
        }

    return 0;
}
