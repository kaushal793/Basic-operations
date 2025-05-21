#include <stdio.h>
int main(){

    int a[10]={10,20,30,40,50,60,70,80,90,100};

    int i,num,beg=0,end=9,mid,found=0;
    printf("Enter the number you want to search in the array:-");
    scanf("%d",&num);
    // while(beg<=end){
    //     mid=(beg+end)/2;
    //     if(a[mid]==num){
    //         printf("Element found at %dth position",mid);
    //         found=1;
    //         break;  }
    //         else if(num>a[mid]){
    //             beg=mid+1;
    //         }
    //         else if(num<a[mid]){
    //             end=mid-1;
    //         }
            
    //         }
    //         if(found==0){
    //             printf("Element not found in the array");
    //         }
    //         }
  while(beg<=end){
    mid=(beg+end)/2;
    if(a[mid]==num){
        printf("Element found at %dth position",mid+1);
        found=1;
        break;
    }
    else if(num>a[mid]){
        beg=mid+1;
    }
    else if(num<a[mid]){
        end=mid-1;
    }
    
    }
    if(found==0){
        printf("Element not found in the array");
    }
  }