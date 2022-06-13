int findMinimumCoins(int amount) 
{
    // Write your code here
    int coins[] = {1,2,5,10,20,50,100,500,1000};
    int curr = 8;
    int reqCoins = 0;
    while(amount>0)
    {
        if((amount/coins[curr])>0)
        {
            int newAddC = amount/coins[curr];
            amount=(amount-(newAddC*coins[curr]));
            reqCoins +=newAddC;
        }
        else
            curr--;
            
    }
    return reqCoins;
}

