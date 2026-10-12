#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
int divide(long int divi, long int divs){
    long int og,i=0,j=1,og2=0,og3=0;
    if(divi < 0){
        og2 = 1;
        divi = -(divi);
    }
    if(divs < 0){
        og3 = 1;
        divs = -(divs);
    }
    og = divs;
    long int og4 = divi;

    if(divs == 0 || divi == 0 || ( divi < divs && divi >0)){
        return 0;
    }

while(divi >= divs){
    j = 1;
    while(1){
        divs = divs << 1;
        j = j << 1;
        if(divi < divs){
            divi = divi - (divs >> 1);
            j = j >> 1;   
            break;
        }
    }
    i += j;
    divs = og;
}
    if((og2 && !og3) || (og3 && !og2)){
        i = -(i);
    }
    if (i > 2147483647) {
        return 2147483647;
    }
    if (i < -2147483648) {
        return -2147483648;
    }

    return i;
}
int main(){
    printf("Enter a dividend and divisor\n");
    int divi,divs;
    scanf(" %d %d",&divi,&divs);
    int i = divide(divi,divs);
    printf("%d",i);
    return 0;
}