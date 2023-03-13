//https://leetcode.cn/problems/rotate-array/

void reverse(int* nums,int begin,int end)
    {
        while(begin<end)
        {
            int temp = nums[begin];
            nums[begin] = nums[end];
            nums[end] = temp;
            begin++;
            end--;
        }
    }

void rotate(int* nums, int numsSize, int k)
{
    k=k%numsSize;
    reverse(nums,0,numsSize-k-1);
    reverse(nums,numsSize-k,numsSize-1);
    reverse(nums,0,numsSize-1);
}

//时间复杂度：O（N）
//空间复杂度：O（1）