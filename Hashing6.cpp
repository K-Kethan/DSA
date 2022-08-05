#include<bits/stdc++.h>

int ZeroSumSubarray(int arr[], int n)
{
    unordered_set<int> us;
    int prefix_sum = 0;
    us.insert(0);
    for(int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if(us.find(prefix_sum) != us.end())
          return 1;
        us.insert(prefix_sum);
    }
    return 0;
    
}
