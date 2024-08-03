class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int cnt=0;
	    vector<pair<int,int>>v;
	    for(int i=0;i<nums.size();i++){
	        v.push_back({nums[i],i});
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for(int i=0;i<nums.size();i++){
	        if(i==v[i].second){
	            continue;
	        }
	        else{
	            cnt++;
	            swap(v[i],v[v[i].second]);
	            i--;
	        }
	    }
	    return cnt;
	}
};