class Solution {
public:
    int search(vector<int>& nums,int target){
        int left = 0, right = nums.size();
        while(left<right){
            int mid = left + (right - left) / 2;
            if (nums[mid]==target)
                return mid;
            if ((nums[mid]>=nums[0]) ^ (target>=nums[0]) ^ (nums[mid]<target))
                    left = mid + 1;
            else
                right = mid;
        }
        return -1;
    }
};

class Solution {
public:
    int search(vector<int>& nums,int target){
        int left = 0, right = nums.size();
        while(left!=right){
            int mid = left + (right - left) / 2;
            if (nums[mid]==target)
                return mid;
            if (nums[left]<=nums[mid]){
                if (nums[left]<=target && target<nums[mid])
                    right = mid;
                else
                    left = mid + 1;
            }
            else{
                if (nums[mid]<target && target<=nums[right-1])
                    left = mid + 1;
                else
                    right = mid;
                
            }
        }
        return -1;
    }
};