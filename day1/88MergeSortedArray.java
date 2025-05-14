class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        //we should go backward because that is where we have extraspace
        int m1=m-1,n1=n-1,k=m+n-1;
        while(m1>=0 && n1>=0){
            if(nums1[m1]>=nums2[n1]) {nums1[k]=nums1[m1];m1--;}
            else {nums1[k]=nums2[n1];n1--;}
            k--;
        }
        while(m1>=0){
            nums1[k]=nums1[m1];m1--;k--;
        }
       // System.out.println(n1);
        while(n1>=0){
            nums1[k]=nums2[n1];n1--;k--;
        }
    }
}