class Solution{
public:	
	void reverseSubArray(int *arr, int n, int l, int r) {
    
    int s = l-1;
    int e = r-1;
    
    while(s<=e){
        
        swap(arr[s++], arr[e--]);
    }
	}

};