#include <stdio.h>
#include <stdlib.h>
int lengthOfLongestSubstring(char *arr){
if (arr[0] == '\0') return 0;
int loopcount = 1,norepetition=1,k=0,size=0;
for(int i = 0;arr[i]!='\0';i++){
    size=i;
}
int ans=0;
int i = 1,j=0;
for(;i<=size;i++){
    for(j = i-1;j>=(i-norepetition);j--){
        if(arr[i]==arr[j]){
            loopcount=0;
            break;
        }
    }
    if(loopcount==1){
        norepetition++;
    }else if(loopcount==0){
        loopcount=1;
        if(ans<norepetition){
            ans = norepetition;
        }
        norepetition=i-j;
    }
}
if(ans<norepetition){
    ans = norepetition;
}
return ans;
}

int main(){
    char arr[6] = "mqmqr"; //1R1T7
    int ans = lengthOfLongestSubstring(arr);
    printf("%d",ans);
    return 0;
}