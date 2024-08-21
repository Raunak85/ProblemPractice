#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        for(int i=0; i<nums.size();i++)
        {
            vector<int> temp;
            // Storing elements in a temporary array, excluding ith element
            for (int j=0; j<nums.size(); j++)
            {
                if(j!=i)
                    temp.push_back(nums[j]);
            }
            // Checking whether our temprorary array is now strictly incresing
            // if yes, then return true,if not,then go for next iteration of outer loop
            int flag = 0;    
            for(int k=0;k<temp.size()-1;k++)
            {
                if(temp[k] >= temp[k+1])
                {
                    flag =1;
                    break;
                }
            }
            if(flag == 0){
                cout<<"Removing "<<nums[i]<<" results in strictly increasing sequence";
                return true;
            }
        }
        // False is return if none of the temporary array generated strictly incresing sequence above
        return false;
    }
};

int main()
{
    Solution obj;
    vector<int> num {24,25,11,34};
    bool b =  obj.canBeIncreasing(num);
    if (b==1)
        cout<<"\nResult : True";
    else
        cout<<"\nResult : False";
    return 0;
}