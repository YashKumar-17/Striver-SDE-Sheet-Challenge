#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   sort(arr.begin(),arr.end());
   int n=arr.size();
   vector<vector<int>>ans;
   for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]+arr[j]==s){
            vector<int>res;
            res.push_back(arr[i]);
            res.push_back(arr[j]);
            ans.push_back(res);
         }
      }
   }
   
   return ans;
}