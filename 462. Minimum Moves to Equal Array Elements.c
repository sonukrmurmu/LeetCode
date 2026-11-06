#include <stdio.h>
void sortsss(int *arr,int lowest,int highest){
    if(highest<=lowest){
        return;
    }else{
        int pivot = arr[highest];
        int k = lowest;
        for(int i =  lowest;i<highest;i++){
            if(pivot>arr[i]){
                int temp = arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
                k++;
            }
        }
    int temp = arr[highest];
    arr[highest] = arr[k];
    arr[k] = temp;
    sortsss(arr,lowest,k-1);
    sortsss(arr,k+1,highest);
    }
}

int minMoves2(int* nums, int numsSize){
    int output = 0;
    sortsss(nums,0,numsSize-1);
    int median = numsSize/2;
    for(int j = 0;j<numsSize;j++){
    int outadd = nums[j]-nums[median];
    if(outadd < 0 ){
        outadd = -(outadd);
    }    
    output += outadd;
    }
    return output;

}
int main(){
    int arr1[3]={1,2,3};
    int arr2[4]={1,10,2,9};
    printf("%d is output of first\n", minMoves2(arr1,sizeof(arr1)/sizeof(int))); 
    printf("%d is output of second\n", minMoves2(arr2,sizeof(arr2)/sizeof(int)));  
    return 0; 

}
