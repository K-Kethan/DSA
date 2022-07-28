#include<bits/stdc++.h>
using namespace std;


struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

bool mycmp(Job a, Job b){
    return a.profit>b.profit;
}

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int maxi=0;
        for(int i=0;i<n;i++){
            if(arr[i].dead>maxi)
              maxi=arr[i].dead;
        }
        vector<int> time(maxi,0);
        vector<int> ans;
        sort(arr,arr+n,mycmp);
        
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead-1;j>=0;j--){
              if(time[j]==0){
                  time[j]=arr[i].profit;
                  break;
               }
               
            }
            
        }
        int count=0,prof=0;
        for(auto x:time){
            if(x!=0)
            {
                count++;
                prof+=x;
            }
        }
        ans.push_back(count);
        ans.push_back(prof);
        return ans;
    } 
};

int main(){
    int n;
    cin>>n;
    Job arr[n];
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        arr[i].id=x;
        arr[i].dead=y;
        arr[i].profit=z;
    }
    
    Solution s;
    vector<int>k;
    k=s.JobScheduling(arr,n);
    cout<<k[0]<<" "<<k[1];
    return 0;
}