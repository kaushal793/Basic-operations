#include <stdio.h>
int main(){
    int n;
    printf("enter the numbers of element in the array:-");
    scanf("%d",&n);

int a[n];
    printf("Enter the array elements :-\n");

    for(int i=0;i<n;i++){
        printf("Enter the %dth element of array:-",i);
        scanf("%d",&a[i]);
    }
 
   
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}