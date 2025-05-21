#include <stdio.h>
int main(){
int a[10]={10,20,40,50,60};

int i,num,n=5,pos;
int del;
printf("Array element are:-\n");

for(i=0;i<n;i++){

    printf("%dth element is %d\n",i,a[i]);
     
}
printf("Enter the position to delete:-");
scanf("%d",&pos);
del=a[pos-1];

for(i=pos-1;i<n;i++)
{
    a[i]=a[i+1];
    i++;
}


n--;
printf("Array After deleting the %dth element :-\n",pos);
for(i=0;i<n;i++){

    printf("%dth element is %d\n",i,a[i]);
     
}


}