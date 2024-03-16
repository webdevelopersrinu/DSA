#include <stdio.h>
#include <math.h>
int searchOperation(int [],int,int);
int main (){
    int arr[]={2,4,5,6,7,8};
    int arrSize =sizeof(arr)/sizeof (arr[0]);
    int target=8;
    int answer =searchOperation(arr, arrSize, target);
    if(answer==-1){
        printf("%d is don't exist in array", target);
    }else{
        printf("%d is exist in index is %d", target, answer);
    }
    
}
int searchOperation(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
