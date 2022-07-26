#include <bits/stdc++.h>
using namespace std;

//Longest Subarray with equal number of 0s and 1s

int largestZeroSubarray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
     arr[i] = (arr[i] == 0) ? -1 : 1;
     
    unordered_map<int, int> ump;
    int sum = 0, maxLen = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum == 0)
         maxLen = i+1;
         
        if(ump.find(sum+n) != ump.end())
        {
            if(maxLen < i - ump[sum+n])
             maxLen = i - ump[sum+n];
             
        }
        else ump[sum + n] = i;
    }
    
    return maxLen;
}
