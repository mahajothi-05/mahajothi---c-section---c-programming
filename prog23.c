#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int arr[n];
 int even=0;int odd=0;
 for(int i=0;i<n;i++){
 scanf("%d",&arr[i]);}
 for(int i=0;i<n;i++){
 if(arr[i]%2==0);
 printf("even count=%d\n",even);
 break;
 }
 if(arr[i]%2!=0){
 printf("odd count=%d\n",odd);
 }
 }
