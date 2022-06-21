#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    long long  ans = 1;
    long long xn = x;
    
  //  int nn = n;
    while(n>0)
    {
        if(n%2==0)
        {
            xn = ((xn)%m *(xn)%m)%m ;
            n = n/2;
        }
        else
        {
            ans = ((ans)*(xn))%m;
            n = n-1;
        }
    }
    return ans%m;
}
