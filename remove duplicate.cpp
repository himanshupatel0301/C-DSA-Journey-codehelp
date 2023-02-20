#include<iostream>
#include<vector>

using namespace std;
int deleteElement(vector<int>& nums, int n, int x)
{
// Search x in array
int i;
for (i=0; i<n; i++)
    if (nums[i] == x)
        break;

// If x found in array
if (i < n)
{
    // reduce size of array and move all
    // elements on space ahead
    n = n - 1;
    for (int j=i; j<n; j++)
        nums[j] = nums[j+1];
}

return n;
}
int removeduplicate(vector<int>& nums)
{
    int i, co;
    int temps[10] = {0};
    for(i = 0;i<nums.size();i++)
         co =  1;
    {
        if(nums[i] == nums[i+1])
        {
            co ++;
            if(co>2)
            {
                deleteElement(nums,nums.size(),i);
            }
        }

        }
        return nums;
}


int main()
{

    int nums = {1,1,1,2,2,3,4,4,4,4,5};
    removeduplicate(nums);
    for(int j = 0;i<n;j++)
    {
        cout<<nums[i]<<" ";
    }
}
