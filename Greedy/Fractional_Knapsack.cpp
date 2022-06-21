#include<bits/stdc++.h>

struct Item{
    int  weight;
    int value;
};

bool comp(Item it1,Item it2)
{
    double ratio1 = ((double)it1.value/(double)it1.weight);
    double ratio2 = ((double)it2.value/(double)it2.weight);
    return ratio1>ratio2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    struct Item item[n];
    for(int i=0;i<items.size();i++)
    {
        item[i].weight = items[i].first;
        item[i].value = items[i].second;
    }
    sort(item,item+n,comp);
    double profit = 0;
    for(int i=0;i<n;i++)
    {
        if(w>item[i].weight)
        {
            w -= item[i].weight;
            profit += item[i].value;
        }
        else
        {
            double ratio = ((double)item[i].value/(double)item[i].weight);
            profit+=(ratio*w);
            break;
        }
    }
    
    return profit;
    
}
