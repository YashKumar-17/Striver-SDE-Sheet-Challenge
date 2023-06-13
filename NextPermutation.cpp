#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    if(n==1){
        return permutation;
    }
    int index=-1;
    int i;
    for(i=n-1;i>0;i--){
        
        if(permutation[i]>permutation[i-1]){
            index=i-1;
            break;
        }
    }
      if(i!=0){
     for(int j=n-1;j>=index;j--)
     {
       if (permutation[j] > permutation[index]) {
         swap(permutation[index], permutation[j]);
         break;
       }
     }
      }

        reverse(permutation.begin()+(index+1),permutation.end());
    return permutation;


}