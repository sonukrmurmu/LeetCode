#include <stdio.h>
#include <stdlib.h>
int *twosum(int *nums,int numSize, int target, int *returnSize){
    int i=0,j=1;
    *returnSize = 2;
    for(i = 0;i<numSize-1;i++){
        for(j = i+1;j<numSize;j++){
            if(*(nums+i)+ *(nums+j) == target){
                goto end_label;
            }
        }
    }
    end_label:
    int *result = (int *)malloc(2*sizeof(*nums));
    if(result == NULL){
        printf("memory allocation failed");
        exit(1);
    }
    result[0]=i;
    result[1]=j;
    return result;
}
int main(){
    int nums[4] = {2,7,11,15};
    int target = 9;
    int numsize = (sizeof(nums)/4)-1;
    int returnsize;
    int *answer = twosum(nums,numsize,target,&returnsize);
    printf("%d %d are the answer array",*answer,*(answer+1));
    free(answer);
    return 0;
}