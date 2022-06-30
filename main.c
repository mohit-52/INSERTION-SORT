#include <stdio.h>
#include<conio.h>

void main(){
    int i,j,n,key;
    int a[] = {12,54,65,7,23,9};
    n = 6;
   
    for(i=0;i<9;i++)
    {
        printf("%d| ", a[i]);
    }

    for(i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    
    #include <stdio.h>



void main(){
    int a[] = {1,13,4,25};
    int n = 4;
    int i,j,min_index,temp;
    
    for(i=0;i<n-1;i++)
    {
        min_index = i;
        for (j=i+1;j<n;j++)
        {
            if(a[min_index]<a[j])
            {
                min_index = j;
            } 
            temp = a[j];
            a[j] = a[min_index];
            a[min_index] = temp;
        }
    }
    
    printf("INSERTION SORT IN PROGRESS........ \n");
    printf("The sorted order is \n");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}
    printf("\nThe sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d| ", a[i]);
   
    }
}

