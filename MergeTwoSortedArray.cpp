#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	vector<int>ans;
	for(int i=0;i<m;i++){
          if (arr1[i] != 0) {
            ans.push_back(arr1[i]);
          }
        }
	for(int i=0;i<n;i++){
		if (arr2[i] != 0) {
            ans.push_back(arr2[i]);
          }
	}
    sort(ans.begin(),ans.end());
	return ans;
}