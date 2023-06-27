#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	sort(arr.begin(),arr.end());
	int m;
	int r=0;
	int sum=0;
	pair<int,int>ans;
	for(int i=0;i<n;i++){
        sum+=arr[i];
		if(r==0){
                  if (arr[i] == arr[i + 1]) {
                    r = arr[i];
                  }
                }
        }
	int as=(n*(1+n))/2;
	m=as-(sum-r);
	ans.first=m;
	ans.second=r;
    return ans;
	
}
