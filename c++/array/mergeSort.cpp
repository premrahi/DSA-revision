class Solution {
public:
    vector<int> merge(vector<int> left, vector<int> right) {
        vector<int> temp;
        int i = 0;
        int j = 0;

        while (i < left.size() && j < right.size()) {
            if (left[i] < right[j])
                temp.push_back(left[i++]);
            else {
                temp.push_back(right[j++]);
            }
        }
        while(i<left.size()){
            temp.push_back(left[i++]);
        }
        while(j<right.size()){
            temp.push_back(right[j++]);
        }

        return temp;
    }

    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums;
        int mid = nums.size() / 2;

        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());

        return merge(sortArray(left), sortArray(right));
    }
};