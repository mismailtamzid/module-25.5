#include<stdio.h>
int main(){
 int i, j, temp,n, k, length, largest, smallest;
 scanf("%d", &n);
 int arr[n];
 for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
 }
 scanf("%d", &k);
 length= sizeof(arr)/ sizeof(int);
 for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
        if(arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
 }
 smallest= arr[k-1];
int large= (length+1)-k;
 largest= arr[large];
    printf("%dth smallest element = %d\n", k, smallest);
    printf("%dth largest element = %d\n", k, largest);
    for(i=0; i<n; i++){
    printf("%d ", arr[i]);
 }

 return 0;
}
