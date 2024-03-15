#include <stdio.h>
#include <math.h>
int main (){
    int arr[]={45,57,5,798,5,2,7,97};
    int largest =0;
    int smallest = arr[0];
    int arrSize =sizeof(arr)/sizeof(arr[0]);
   
     for(int i=0;i<arrSize;i++){
         if(arr[i]>largest){
             largest =arr[i];
         }
         if(arr[i]<smallest){
             smallest =arr[i];
         }
     }
     printf("%d\n", largest);
     printf("%d", smallest);
     
    return 0;
}
