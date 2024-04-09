#include <iostream>
#include <vector>
using namespace std;

int abs_value(int num){
    if(num>=0){
        return num;
    }
    else{
        return num*(-1);
    }
}

void find_absolute(vector<int>& nums, int n){
    int min_diff=nums[n-1] - nums[0];
    
    if(min_diff<0){
        min_diff=min_diff*(-1);
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(min_diff>abs_value(nums[i]-nums[j])){
                min_diff=abs_value(nums[i] - nums[j]);
            }
        }
    }
    
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs_value(nums[i]-nums[j])==min_diff){
                cout<<nums[i]<<" "<<nums[j]<<endl;
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
    
   find_absolute(nums, n);
 

    return 0;
}
