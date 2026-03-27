class Solution {
    public int[] twoSum(int[] nums, int target) {
        int sum=0;
        int temp1=0;
        int temp2=0;
        for (int i=0; i<nums.length-1; i++) {
            for (int j=i+1; j<nums.length; j++){
                sum = nums[i] + nums[j];
                if (sum == target) {
                    temp1=i;
                    temp2=j;
                    break;
                }
            }

        }

        int [] result = {temp1,temp2};
        return result;
    }
}
