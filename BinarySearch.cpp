#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int num){
    /*It returns the index of the founded number in this array*/
    for(int i =0 ;i<n;i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,num;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the array : ";
    for(int i=0;i< n;i++){
        cin >> a[i];
    }
    cout<<"Enter the number : ";cin>>num;
    int j = BinarySearch(a,n,num);
    if(j == -1){
        cout<<"Number not found"<<endl;
    }else{
        cout<<"Number found in "<<j<<" th index."<<endl;
    }
    return 0;
}