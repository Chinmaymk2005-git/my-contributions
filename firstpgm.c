//Data stucture examples

#include<stdio.h>
#include<conio.h>
void intro_to_array()
//array-array is the data structure you use when you have to store different values of same data type
{
double share_price[]={5.6,66.78,97.45,105.3,};
printf("$%lf\n",share_price[0]);
double prices[4];
prices[0]=7.5;
prices[1]=6.78;
prices[2]=5.78;
prices[3]=8.8;
prices[4]=3.7;
printf("$%lf\n",prices[3]);
double ht[10]={5.07,5.08,5.09,5.10,5.11,6.0,6.01,6.02,6.03,6.04};
for(int i=0;i<=9;i++)
{
    printf("\n%lfft\n",ht[i]);
}
int wt[]={51,52,53,54,55,56,57,58,59,60};
printf("%d bytes\n",sizeof(wt));
for(unsigned i=0;i<=sizeof(wt)/sizeof(wt [0]);i++)
{
    printf("%d\n",wt[i]);
}
}
void two_dimensional_array()
//2d array -each element of 2d array is an array  in itself
{
int number[5][3]={
                 {1,2,3},
                 {4,5,6},
                 {7,8,9},
                 {10,11,12},
                 {13,14,15}
                 };
int rows=sizeof(number)/sizeof(number[0]);
int columns=sizeof(number[0])/sizeof(number[0][0]);
printf("rows:%d\n",rows);
printf("columns:%d\n",columns);
for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        printf("%d\t",number[i][j]);
    }
    printf("\n");
}














}
int main()
{
    //intro_to_array();
   // two_dimensional_array();
   
}