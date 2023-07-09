
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        sort(arr,arr+n);
       int mn=1; 
       for(int i=0;i<n;i++)
       if(arr[i]>0) 
       {
           if(arr[i]==mn) mn++;
           else if(arr[i]<mn) continue;
           else return mn; 
       }
       return mn; 
        
        
        
        
    } 
};