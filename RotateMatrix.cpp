#include <bits/stdc++.h>
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int l,r,d,u;
    l=0;
    u=0;
    r=m-1;
    d=n-1;
    while(l<r && u<d){
        int temp=mat[u+1][l];
        for(int i=l;i<=r;i++){
            int s=mat[u][i];
            mat[u][i]=temp;
            temp=s;
        }
        u++;
        for(int i=u;i<=d;i++){
            int s=mat[i][r];
            mat[i][r]=temp;
            temp=s;
        }
        r--;
        for(int i=r;i>=l;i--){
            int s=mat[d][i];
            mat[d][i]=temp;
            temp=s;
        }
        d--;
        for(int i=d;i>=u;i--){
            int s=mat[i][l];
            mat[i][l]=temp;
            temp=s;
        }
        l++;
    }
}