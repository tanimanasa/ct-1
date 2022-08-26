#include<iostream>
#include<stdio.h>
using namespace std;

void Max_length_subarray(int nums[], int Sum , int n){
	
	int length = 0; // length = stores the maximum length of subarray with Sum.
	int ending_index_subarray = -1; //ending_index_subarray = stores ending index of the maximum length subarray having sum
	
	//considering the subarray starting from i
	for(int i = 0; i < n; i++ ){
		int target = 0; 
		
		//considering subarray ending with j;
		for(int j = i; j < n; j++){
			
			//sum of elements in current subarray
			target += nums[j];
			
			//if ever target becomes equal to sum then
			if(target == Sum){
				
				if(length < j - i + 1){
					//update the length then
					length = j - i + 1;
					ending_index_subarray = j;
				}
			}
		}
	}
	cout<<(ending_index_subarray - length + 1, ending_index_subarray)<<endl; 
}
int main(){
	int nums[] = {5,6,-5,5,3,5,3,-2,0};
	int target = 8;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    Max_length_subarray(nums , n , target);
	
	return 0;
}


















































