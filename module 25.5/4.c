#include<stdio.h>
int recursive(int n){
for(int i=n; i>0; i--){
    printf("%d ", i);
}
}

int main(){
int n;
scanf("%d", &n);
recursive(n);
return 0;
}

