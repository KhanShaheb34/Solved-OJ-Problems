class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        for(auto n:nums2) nums1.push_back(n);
        sort(nums1.begin(), nums1.end());
        if(nums1.size()%2) return (double) nums1[nums1.size()/2];
        else return (double) (nums1[nums1.size()/2] + nums1[nums1.size()/2-1]) / 2.0;
    }
};
