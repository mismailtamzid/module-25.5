#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
   int sum=0, square, count=0;
char arr[100];
scanf("%s", &arr);
 int length= strlen(arr);
for(int i=0; i<=length-1; i++){
    sum+= arr[i]-96;
}
for(int i=0; i<=length; i++){
    square= pow(2,i);
    if(square== sum){
    count=1;
 }
}
if(count==1){
    printf("YES");
}
else{
    printf("NO");
}
return 0;
}
