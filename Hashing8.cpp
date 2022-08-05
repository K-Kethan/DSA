//Largest subarray with given sum

int largestSubarrayWithSumX(int arr[], int n, int sum)
{
    int prefix_sum = 0;
    unordered_set<int> us;
    us.insert(0);
    for(int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if(us.find(prefix_sum - sum) != us.end())
          return 1;
        us.insert(prefix_sum);
    }
    return 0;
}
