#include <bits/stdc++.h> 


void merge(int l,int mid,int r,vector<int> &arr,int &cnt)
{
    int n1 = (mid-l)+1;
    int n2 = r-mid;
    int a1[n1],a2[n2];
    for(int i=0;i<n1;i++)
        a1[i] = arr[l+i];
    for(int i=0;i<n2;i++)
        a2[i] = arr[mid+1+i];
    
    int j=0;
    for(int i=0;i<n1;i++)
    {
        while(j<n2 && a1[i]>(a2[j]*2))
            j++;
        cnt = cnt+j;
    }
    int i=0,k=l;
    j=0;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
            arr[k++] = a1[i++];
        else 
            arr[k++] = a2[j++];
    }
    while(i<n1)
        arr[k++] = a1[i++];
    while(j<n2)
        arr[k++] = a2[j++];
}

void merge_sort(int l,int r,vector<int> &arr,int &cnt)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        merge_sort(l,mid,arr,cnt);
        merge_sort(mid+1,r,arr,cnt);
        merge(l,mid,r,arr,cnt);
    }
        
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
    int cnt=0;
    merge_sort(0,n-1,arr,cnt);
    cout<<endl;
    return cnt;
}
