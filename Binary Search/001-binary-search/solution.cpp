class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0, e = n-1;
        int mid = s + (e-s) / 2;
        int ans = -1;

        while(s<=e){
            if( nums[mid] == target){
                ans = mid;
                e = mid-1;
            }
            else if( target > nums[mid]){
                s = mid + 1;
            }
            else if ( target  < nums[mid]){
                e = mid-1;
            }
            mid = s + (e-s) /2;
        }
        return ans;
    }

};
