/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *r=(int *)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++)
        {
            *(r+i)=*(nums+i)**(nums+i);
        }
    *returnSize=numsSize;
    for(int i=0;i<numsSize-1;i++)
    {
        int key=*(r+i+1);
        int j=i;
        while( j>=0  &&  *(r+j)>key)
        {
            *(r+j+1)=*(r+j);
            --j;
        }
        *(r+(++j))=key;
    }
    return r;
}