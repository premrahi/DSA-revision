class Solution {
	public:
	int closest3Sum(vector<int> &arr, int target) {
		int n = arr.size();
		
		if (n < 3)
			return -1;
			
		sort(arr.begin() ,arr.end());
		
		int ans = arr[1] + arr[2]+arr[0] ;
		int mindif = abs(target - ans) ;
		int sum = 0 ;
		
		for (int i = 0 ; i<n-2 ; i++) {
			
			int j = i + 1 ;
			int k = n - 1 ;
			
			while (j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                
                if (sum == target) {
                    return sum; // Perfect match found
                }
                
                int dif = abs(target - sum);
                
                // If we find a closer sum, OR a sum with equal difference but a larger value
                if (dif < mindif) {
                    mindif = dif;
                    ans = sum;
                } else if (dif == mindif) {
                    ans = max(ans, sum); // Tie-breaker: prefer the larger sum
                }
                
                // Move the pointers
                if (sum > target) {
                    k--;
                } else {
                    j++;
                }
            }
	}
	
	return ans ;
	
}
};
