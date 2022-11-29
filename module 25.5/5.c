#include<stdio.h>
int  total(int n){
    if(n!=0){
        return n+ total(n-1);
    }

}
int main(){
int n, ans;
scanf("%d", &n);
ans=total(n);
printf("%d", ans);
return 0;
}
