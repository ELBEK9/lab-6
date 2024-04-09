#include <iostream>
#include <vector>
using namespace std;

int find_majority(vector<int> nums, int n){
    int maybe=nums[0];
    int count=1;
    
    for(int i=1;i<n;i++){
        if(nums[i]==maybe){
            count++;
        }
        else{
            count--;
            if(count==0){
                maybe=nums[i];
                count=1;
            }
        }
    }
    return maybe;
}
    

int main()
{
    int n;
    cin>>n;
    
    vector<int> nums(n);
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    int majority=find_majority(nums, n);
    cout<<majority;
    
 

    return 0;
}
