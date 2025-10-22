#include <stdio.h>

int main() {
    int arr1[] = {1,2,3,4,4,7,6};
    int arr2[] = {1,3,3,4,5,6};
    int i;
    int dup;
    int j, k;
    int s1 = sizeof(arr1)/4;
    int s2 = sizeof(arr2)/4;
    int usize = 0;
    int arrI[s1 + s2];
    for (i=0; i < s1; i++){
        
        for (j=0; j < s2; j++){
            if (arr1[i] == arr2[j] ){
                dup = 0;
                for (k =0; k < usize; k++){
                    if (arrI[k] == arr1[i]){
                        dup =1;
                        break;
                    }
            }
        if (!dup){
                        arrI[usize++] = arr1[i];
                }
        }
           
        }        
                    
   } 
    printf("{");    
    for (i=0 ; i < usize; i++){
        printf("%d,", arrI[i]);
    }    
    printf("}");

    return 0;
}