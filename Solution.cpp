#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    int i,j,m;
    for(i=0;i<n;i++)
    {
        m=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[m])
            m=j;
        }
        if(m!=i)
        swap(arr[m],arr[i]);
    }
}
