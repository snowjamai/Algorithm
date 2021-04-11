class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i, j, res;
        int result[2000];
        
        i = j = res = 0;
        
        while(1){
            if(i >= nums1.size() || j >= nums2.size())
                break;
            if(nums1[i] < nums2[j])
                result[res++] = nums1[i++];       
            else if(nums1[i] > nums2[j]){
                result[res++] = nums2[j++];   
            }
            else{
                result[res++] = nums1[i++]; 
                result[res++] = nums2[j++];   
            }
        }
        
        if(j >= nums2.size() && i < nums1.size()){
            for(;i<nums1.size();)
                result[res++] = nums1[i++];     
        }
        else if(i >= nums1.size() && j < nums2.size()){
            for(; j <nums2.size();)
                result[res++] = nums2[j++];       
        }
        return res %2 ? result[res / 2] : (result[(res / 2) - 1] + result[res / 2]) / 2.;
    
    }
};