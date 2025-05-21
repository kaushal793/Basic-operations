#include <stdio.h>
int main(){
int a[10]={10,20,40,50,60};
int i,num,n=5,pos;
printf("Array element are:-\n");

for(i=0;i<n;i++){

    printf("%dth element is %d\n",i,a[i]);
     
}
printf("Enter the number and the position to insert:-");
scanf("%d %d",&num,&pos);
i=n;
while(i>=pos)
{
    a[i]=a[i-1];
    i--;
}
a[pos-1]=num;
n++;
for(i=0;i<n;i++){

    printf("%dth element is %d\n",i,a[i]);
     
}


}