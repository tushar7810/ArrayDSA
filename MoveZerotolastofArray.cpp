#include<iostream>
using namespace std;
int MoveZeroToEnd(int a[] , int n){ // T.C = O(2N) ; S.C = O(N)  (Brute Code)
    int temp[n];int j=0;
    for(int i =0;i<n;i++){
        if(a[i] != 0){
            temp[j] = a[i];
            j++;
        }
    }
    for(int i = j+1;i<n;i++){
        temp[i] = 0;
    }
    for(int i = 0 ; i < n ;i++){
        a[i] = temp[i];
    }
    return a[n];
}
int putZeroToEnd(int arr[],int n){ //Time Complexity -> O(N) & S.C -> O(1)  (Optimal Code)
    int j = -1 ;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    // if( j == -1) return arr;
    for(int i=j+1;i<n;i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    return arr[n];
}
int main(){
    int n;
    cout<<"Enter the n : ";/*n is the number of terms*/
    cin>>n;
    int arr[n];
    for(int a = 0;a < n ;a++){
        cin>>arr[a];
    }
    putZeroToEnd(arr , n);
    for(int a = 0 ; a < n ;a++){
        cout<<arr[a]<<" ";
    }cout<<endl;
    return 0;
}