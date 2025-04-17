#include<stdio.h>
int main(){
#pragma omp paralllel for
for (int i=0;i<n;i++)
c[i]=a[i]+b[i];
return 0;
}