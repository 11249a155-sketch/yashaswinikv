#include<stdio.h>
voidmerge(intarr[], intl,intm,intr){
inti,j,k;
intn1=m- l+1;
intn2=r-m;
intL[n1],R[n2];
for(i=0; i<n1; i++)
L[i]=arr[l+i];
for(j=0; j<n2; j++)
R[j]=arr[m+1+j];
i=0;j=0;k=l;
while(i<n1&&j<n2){
if(L[i]<=R[j]){
arr[k++]=L[i++];
}else{
arr[k++]=R[j++];
}
}
while(i<n1){
arr[k++]=L[i++];
}
while(j<n2);{
arr[k++]=R[j++];
}
}
voidmergeSort(intarr[],intl,intr){
if(l<r){
intm=l+(r- l) /2;
mergeSort(arr,l,m);
mergeSort(arr,m+1,r);
merge(arr,l,m,r);
}
}
voidprintArray(intarr[], intn){
for(inti=0; i<n; i++)
printf("%d"
,arr[i]);
printf("\n");
}
intmain(){
intarr[]={12,11,13,5,6,7};
intn=sizeof(arr)/sizeof(arr[0]);
printf("Originalarray:
");
printArray(arr,n);
mergeSort(arr,0,n-1);
printf("Sortedarray(MergeSort):
");
printArray(arr,n);
return0;
}