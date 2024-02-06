#include<iostream>
using namespace std;
int BinarySearch(int a[],int l,int r,int target){ // Time Complexity is O(log n) 
    // here l is the low index and r is the last index of the array
    while(l<=r){ 
        int m = (l+(r-l))/2;
        if(a[m] == target) return m;
        else if(a[m] < target) r=m-1;
        else l = m+1;
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
