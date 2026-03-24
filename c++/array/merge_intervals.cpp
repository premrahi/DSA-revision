// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,
// and return an array of the non-overlapping intervals that cover all the intervals in the input.


// intervals = [[1,3],[2,6],[8,10],[15,18]]
// output = [[1,6],[8,10],[15,18]]



class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans ;
        if(intervals.empty()) return ans;
        int n = intervals.size();
        sort(intervals.begin() , intervals.end()) ;
        ans.push_back(intervals[0]);

        for(int i = 1 ; i<n ; i++){
            vector<int>&last = ans.back() ;

            if(last[1] >= intervals[i][0]){
                last[1] = max(last[1] , intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans ;
    
    }
}