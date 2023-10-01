#include<iostream>
#include<vector>
using namespace std;

int min_jump(vector<int>& nums){
     int pos=0;
        int des=0;
        int jump=0;
           if(nums[0]==0 ){
            return -1;
          }
        for(int i=0;i<nums.size()-1;i++){
            des=max(des,nums[i]+i);
            if(pos==i){
                pos=des;
                jump++;
            }
        }
            if(pos<nums.size()-1){
             return -1;
         }
        return jump;
}
int main(){
    vector<int> v{1,2,3,4,7,3,4,5};
    int ans=min_jump(v);
    cout<<ans<<endl;

    return 0;
}