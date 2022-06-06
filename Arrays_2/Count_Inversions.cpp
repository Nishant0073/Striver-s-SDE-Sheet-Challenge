#include <bits/stdc++.h> 

long long cnt = 0;
void merge(long long *arr,long long left,long long right )
{
    long long  mid = (left+right)/2;
    long long  n1 = (mid-left)+1;
    long long  n2 = (right-mid);
    long long temp1[n1],temp2[n2];
    for(long long  i=0;i<n1;i++)
        temp1[i]=arr[left+i];
    
    for(long long  i=0;i<n2;i++)
        temp2[i]=arr[mid+1+i];
    long long  i=0,j=0,k=left;
    while(i<n1 && j<n2)
    {
        if(temp1[i]<=temp2[j])
        {
            arr[k] = temp1[i];
            i++,k++;
        }
        else
        {
            cnt+=(n1-i);
            arr[k] = temp2[j];
            k++,j++;
        }
    }
    while(i<n1)
    {
        arr[k] = temp1[i];
            i++,k++;
    }
    while(j<n2)
    {
        arr[k] = temp2[j];
            j++,k++;
    }  
}
void merge_sort(long long *arr,long long left,long long right)
{
    if(left<right)
    {
        long long  mid = (left+right)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,right);
    }
    return;
    
}
long long getInversions(long long *arr, int n){
    merge_sort(arr,0,n-1);
    return cnt;
    
}
