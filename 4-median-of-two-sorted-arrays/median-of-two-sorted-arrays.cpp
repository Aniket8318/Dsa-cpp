class Solution {
public:

vector<int> mergearr(vector<int>& nums1, vector<int>& nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    int i = 0, j = 0, idx = 0;
    
    vector<int> res(n + m);

    while(i < n && j < m)
    {
        if(nums1[i] <= nums2[j])
            res[idx++] = nums1[i++];
        else
            res[idx++] = nums2[j++];
    }

    while(i < n)
        res[idx++] = nums1[i++];

    while(j < m)
        res[idx++] = nums2[j++];

    return res;
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    
    vector<int> merged = mergearr(nums1, nums2);

    int n = merged.size();

    
    if(n % 2 == 1)
        return merged[n/2];

    
    return (merged[n/2] + merged[n/2 - 1]) / 2.0;
}

};
