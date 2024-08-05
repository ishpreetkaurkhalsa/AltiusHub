#include<bits/stdc++.h>
using namespace std;
//done using kadane's algorithm
int contiguousSum(vector<int>& nums){
    int sum=0,maxi;
    //we try to inititalise the sum as 0
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        //we try to add the elements of the array/vector
        maxi=max(sum,maxi);
        //if it is greater than the max then that sum becomes new max
        //else the previous max stays as the max
        if(sum<0){
            //if the sum is less than 0 we again initialise the sum to 0 as sum in negative can't get us max output
            sum=0;
        }
    }
    return maxi;
}
int main(){
    //defining a vector
    vector<int> arr={1,2,-1,4,-2};
    //sending it to the function
    int res=contiguousSum(arr);
    //print the result out
    cout<<res;
}