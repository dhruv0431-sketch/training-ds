#include<stdio.h> 


void BUBBLESORT(int arr[5]){ 
    int n= sizeof(arr)/sizeof(int);
    for(int  i=0;i<n-1;i++){ 
      for(int j=0;j<n-1-i;j++){ 
        if (arr[j]>arr[j+1]){ 
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp; 

        }
      }
    }
} 
for(int k=0; k<n;k++) 
{ 
    printf("%d",arr[k]);
}