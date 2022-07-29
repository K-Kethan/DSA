int maxThieves(char arr[],int n, int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='P')
        {
            int x=max(0,i-k);
            bool flag=true;
            for(int j=x;j<i;j++)
            {
                if(arr[j]=='T')
                {
                    arr[j]='C';
                    count++;
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                
        }
            
    }
}
