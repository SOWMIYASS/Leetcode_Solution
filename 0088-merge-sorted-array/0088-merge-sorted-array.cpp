void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m;i<m+n;i++){
           nums1[i]=nums2[j];
            j++;
            
        }
//         for(int i=0;i<nums1.size();i++){
//           cout<<nums1[i]<<" ";
            
//         }
       // sort(nums1.begin(),nums1.end());
        
        for(int i=0;i<nums1.size()-1;i++){
            for(int j=i+1;j<nums1.size();j++){
                if(nums1[i]>nums1[j])
                   swap(&nums1[i],&nums1[j]);
            }
        }
       
        
    }
};