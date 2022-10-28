class Solution {
public:
    void sortColors(vector<int>& nums) {
    
     if(nums.size()==0 || nums.size()==1)
     {
         return;
     }
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
             if(nums[i]<=nums[j])
            {
             
            int a=nums[i];
            nums[i]=nums[j];
            nums[j]=a;
          
             }
            }
      
        }
      
    }
};
