void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int a[m+n];
    int i=0,j=0,k=0;
    while(j<m && k<n && i<m+n)
    {
        if(nums1[j]<nums2[k])
        {
           a[i]=nums1[j];
            j++;
        }
        else
        {
            a[i]=nums2[k];
            k++;
        }
        i++;
    }
    while(j<m)
    {
        a[i]=nums1[j];
        i++;j++;
    }
    while(k<n)
    {
        a[i]=nums2[k];
        i++;k++;
    }
    for(i=0;i<n+m;i++)
    {
        nums1[i]=a[i];
    }
}