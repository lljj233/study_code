//https://leetcode.cn/problems/missing-number-lcci/

int missingNumber(int* nums, int numsSize){
    int ret=0;
    for(int i=0;i<numsSize;i++)
    {
        ret^=nums[i];
    }
    for(int i=0;i<=numsSize;i++)
    {
        ret^=i;
    }
    return ret;
}

