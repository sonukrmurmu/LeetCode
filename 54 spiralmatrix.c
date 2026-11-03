#include <stdio.h>
int main()
{
    int n=3,m=3,on=3,om=3;
    int i=0,j=0,c=0;
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
  do
    {
        for(j=om-m;j<m;j++)
        {    
            printf(" %d",matrix[on-n][j]);
        }
        for(i=on-n+1;i<n;i++)
        {
                printf(" %d",matrix[i][m-1]);
            
        }
        c=om-m;
        
        if((om-m)<m-1){
        for(j=m-2;j >= c;j--)
        {
            
                printf(" %d",matrix[n-1][j]);
            
        }}
        c=on-n;
        if((on-n)<n-1)
        for(i=n-2;i>c ;i--)
        {
            
            
                printf(" %d",matrix[i][om-m]);
            
        }
        n--;
        m--;
    }while((on - n) < n && (om - m) < m);;
return 0;
}