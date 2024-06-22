#include<stdio.h>

void InsertAtLast(int arr[],int n){
    printf("Enter Element in array %d times\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void InsertAtBegining(int arr[],int uSize,int maxSize){
    if(uSize >maxSize){
        printf("Array is Overflow\n");
    }
    int element;
    printf("Which element do you want to insert at begining\n");
    scanf("%d",&element);
    for (int i = 1; i < 4; i++)
    {
        /* code */
    }
    

}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int max_size = 10;
    int used_size;
    printf("Enter the size of array\n");
    scanf("%d",&used_size);
    int arr[max_size];
    InsertAtLast(arr,used_size);
    display(arr,used_size);
}
