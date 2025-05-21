#include <stdio.h>
int main(){
    int n;
    printf("enter the numbers of element in the array:-");
    scanf("%d",&n);
int temp;
int a[n];
    printf("Enter the array elements :-\n");

    for(int i=0;i<n;i++){
        
        scanf("%d",&a[i]);
    }
 
   printf("Array before sorting is:-\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    printf("\nArray after sorting is:-\n");
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                 temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
}
for(int i=0;i<n;i++){
    printf("%d\n",a[i]);

}
}