int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int i=0;
    int cnt = 0;
    while(i<n)
    {
        int ti = i;
        while(arr[i]==arr[ti])
            i++;
        cnt++;
    }
    return cnt;
}
