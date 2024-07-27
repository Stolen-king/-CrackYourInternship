class Solution
{
    public:
    int ans=0;
    int peakElement(int arr[], int n)
    {
       // Your code here
       for(int i =1;i<n-1;i++){
           int a = arr[i-1];
           int b =arr[i];
           int c = arr[i+1];
           if(b>a && b>c){
               return i;
           }
       }
    }
};