#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int d){
    /*d = d % n;
    int temp[d];// T.C -> O(2N) , S.C -> O(d)
    for(int i =0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i =d;i<n;i++){
        arr[i-d] = arr[i];
    }
    for(int i = n-d;i<n;i++){
        arr[i] = temp[i-(n-d)];
    }*/
    reverse(arr,arr + d);// T.C -> O(2N) and S.C -> O(1)
    reverse(arr + d,arr + n);
    reverse(arr,arr + n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;cin>>d;
    leftRotate(arr,n,d);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}