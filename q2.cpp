#include <iostream>
#include <unordered_map>
using namespace std;
 
// Function to print all subarrays with a zero-sum
// in a given array
void Print_all_subarrays(int nums[], int n)
{
    // consider all subarrays starting from `i`
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
 
        // consider all subarrays ending at `j`
        for (int j = i; j < n; j++)
        {
            // sum of elements so far
            sum += nums[j];
 
            // if the sum is seen before, we have found a subarray
            // with zero-sum
            if (sum == 0) {
                cout<<"{";
                for(int iterator = i; iterator <= j; iterator++)
                {
                    cout<<nums[iterator]<<",";
                }
                cout<<"}";
                cout<<endl;
                
            }
        }
    }
}
 
int main()
{
    cout<<"Subarrays with zero-sum are"<<endl;
    int nums[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(nums)/sizeof(nums[0]);
 
    Print_all_subarrays(nums, n);
 
    return 0;
}