#include<stdio.h>
#include<stdlib.h>
int bubble(int a[],int n){
int i,j;
for(i=0;i<n-1;i++){
      for(j=0;j<n-i-1;j++){
              if (a[j]>a[j+1]){
 		int c=a[j];
   	                 a[j]=a[j+1];
                                  a[j+1] = c;}
}
}
}
int main(){
int n,i,*a;
printf("enter a no");
scanf("%d",&n); 
a = (int*) malloc(n*sizeof (int));
for(i=0;i<n;i++){
printf("enter the value %d : ",i+1);
scanf("%d",&a[i]);
}
bubble(a,n);
for(i=0;i<n;i++){
printf("%d  ",a[i]);
}
free(a);
}