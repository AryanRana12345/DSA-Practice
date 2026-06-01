#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int longest_subarray_with_zero_sum(vector<int>& rray, int n){
    map<int,int> mpp;
    int max_length = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=rray[i];
        if(sum == 0){
            max_length = max(i+1,max_length);
        }
        else{
            if(mpp.count(sum)){
                max_length = max(i - mpp[sum],max_length);
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return max_length;
}

int main(){
    cout << "How many inputs you want to give? " << "\n";
    int input_number;
    cin >> input_number;
    vector<int> rray(input_number);
    for(int i=0;i<input_number;i++){
        cin >> rray[i]; 
    }
    cout << longest_subarray_with_zero_sum(rray,input_number);
}