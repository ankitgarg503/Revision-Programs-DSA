int search(int nums[], int target,int n) {
        int low=0;
        int high=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[low]<=nums[mid]){
                 if(target>=nums[low] and target <=nums[mid]){
                     high=mid-1;
                 }
                 else{
                     low=mid+1;
                 }
            }
            else{
                 if(target<=nums[high] and target >=nums[mid]){
                     low=mid+1;
                
            }
                else{
                    high=mid-1;
                }
        }
        }
        return -1;
    }

    #include<iostream>
    using namespace std;
    int main(){
        int arr[]={11,2,3,4,5,6,7};
        cout<<search(arr,6,7)<<endl;
        return 0;
    }