// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.

 

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
// Example 2:

// Input: nums = [1,1,1,1,1]
// Output: [1,2,3,4,5]
// Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
// Example 3:

// Input: nums = [3,1,2,10,1]
// Output: [3,4,6,16,17]
#include <iostream>
#include <vector>
using namespace std;

    vector<int> runningSum(vector<int>& nums) {
 

    vector<int> result(nums.size()); //creating an vector of the same size as nums vector
    if(nums.size()==0) { //if size is zero return null vector
    return result;
    }
    result[0]=nums[0]; //if not take the first element of result same as nums vector
    for(int i=1;i<nums.size();i++) //In this loop the runnning sum happens from the second element
    {
        result[i]=result[i-1]+ nums[i]; //the second number or index 1 will add the number on the previous index
                                        //this will continue till the whole array is processed
    }
    return result;
}
void Display(vector<int>& result){
   cout<<"[";
  
  for(int i=0;i<result.size()-1;i++) cout<<result[i]<<",";
  
  cout<<result.back()<<"]"<<endl;
}

int main() 
{
 
cout<<"TEST CASE 1"<<endl;
  vector<int> nums1={1,2,3,4};
  vector<int> result1= runningSum(nums1);
   Display(result1);
  cout<<"TEST CASE 2"<<endl;
  vector<int> nums2={1,1,1,1,1};
  vector<int> result2= runningSum(nums2);
   Display(result2);
   cout<<"TEST CASE 3"<<endl;
  vector<int> nums3={3,2,1,10,1};
  vector<int> result3= runningSum(nums3);
   Display(result3);
   



 
  return 0; 
}


    
