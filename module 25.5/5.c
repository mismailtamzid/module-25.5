#include<stdio.h>
int  total(int a, int b, int c){
   return a+b+c;

}
int main(){
int a,b,c, ans;
scanf("%d%d%d", &a, &b, &c);
ans=total(a,b,c);
printf("%d", ans);
return 0;
}
