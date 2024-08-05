#include<bits/stdc++.h>
using namespace std;
void Rotateleft(int arr[],int n, int k){
    //if the array is empty we just return it
    if(n==0)
        return;
    
    k=k%n;
    //if k>n then that rortation is not possible
    if(k>n)
        return;
    //we store the first k elements in a temp array
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    //we store the elements after kth position in array first
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }
    //now we enter the initially stored elements from temp array
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-n+k];
    }

}
int main(){
    int n=7;
    int arr[]={1,2,3,4,5,6,7};
    int k=2;
    Rotateleft(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}