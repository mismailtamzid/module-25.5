#include<stdio.h>
int main(){
 int n, i, k, sum=0;
 scanf("%d", &n);

 int arr[n];
 for(i=0; i<=n-1; i++){
    scanf("%d", &arr[i]);
 }
 int length= sizeof(arr)/ sizeof(int);
   scanf("%d", &k);
 for(i=0; i<=n-1; i++){
    if(arr[i]== k){
        sum+=1;
    }
 }
 int answer= length- sum;
 printf("%d", answer);
 return 0;
}
