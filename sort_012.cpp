#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int l=0;
   int m=0;
   int h=n-1;
   while(m<=h){
      switch(arr[m]){
         case 0:
             swap(arr[l++],arr[m++]);
             break;
         case 1:
             m++;
             break;
         case 2:
             swap(arr[m],arr[h--]);
             break;
      }
   }
}
