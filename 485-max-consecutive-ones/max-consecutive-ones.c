int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i,j=0,s=0;
    for(i=0;i<numsSize;i++)
    {
        if(*(nums+i)==1)
        {
            j++;
        if(s<j)
                s=j;
        }
        else
            j=0;
        
    }
    
   
    return s;
    
}