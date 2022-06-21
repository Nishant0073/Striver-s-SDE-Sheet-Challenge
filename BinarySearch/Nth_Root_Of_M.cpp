double multiply(double mid,int n)
{
    double res = 1;
    for(int i=1;i<=n;i++)
        res = res * mid;
    return res;
}

double findNthRootOfM(int n, long long m) {
	// Write your code here.
    double l = 1;
    double r = m;
    double eps = 1e-8;
    while((r-l)>eps)
    {
        double mid = (l+r)/2.0;
        if(multiply(mid,n)<m)
            l = mid;
        else
            r = mid;
    }
    return l;
}

