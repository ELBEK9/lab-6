#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int>& nums, int n){
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> nums(n);
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    bubble_sort(nums, n);
    int maxSum = 0;
    for(int i=0;i<n;i+=2){
        maxSum+=nums[i];
    }
    
    cout<<maxSum;
    
 

    return 0;
}
