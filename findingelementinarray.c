#include <stdio.h>
void main(){
    int n,val;
int found=0;
int pos;
int i;
    printf("Enter the number of element in the array:-");
    scanf("%d",&n);

    int a[n];
    printf("Enter the array elements:-\n");

    for(int i=0;i<n;i++){

        printf("Enter %dth element:-",i);
        scanf("%d",&a[i]);

    }
    printf("ENTER THE ELEMENT YOU WANT TO SEARCH:-");
    scanf("%d",&val);
    
    
    for(int i=0;i<n;i++){
        if(a[i]==val){
            found++;
     pos=i;
        
        }
    }
    if(found==0){
        printf("Element not found in the array\n");
    }
    else{
        printf("Element found in the array at %d position\n",i);
    }
}