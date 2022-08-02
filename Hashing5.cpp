//Find whether a pair(a,b) exists in given array such that a+b=Given sum

int pairWithSumX(int arr[],int n, int X)
{
    unordered_set<int> us;
    for(int i = 0; i < n; i++)
    {
        if(us.find(X - arr[i]) != us.end())
          return 1;
          
        us.insert(arr[i]);
    }
    return 0;
    
}
