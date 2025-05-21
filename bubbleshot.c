#include <stdio.h>
int main(){
    int a[7]={98,27,100,28,10,66};
    int n=7;  
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=1;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Array after sorting is:-\n");
for(int i=0;i<n;i++){
    printf("%d\n",a[i]);
}
}