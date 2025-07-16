class Solution 
{
public:
    int maximumLength(vector<int>& nums) 
    {
        int evenCount = 0, oddCount = 0;
        int altEven = 0, altOdd = 0;

        for (int num : nums) 
        {
            int p = num % 2;  

            
            if (p == 0) 
            {
                evenCount++;           
                altEven = altOdd + 1;  
            } 
            else 
            {
                oddCount++;           
                altOdd = altEven + 1; 
            }
        }

        
        return max({evenCount, oddCount, altEven, altOdd});
    }
};