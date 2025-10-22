#include <stdio.h>

int main() {
    int arr1[] = {1,2,3,4};
    int arr2[] = {3,4,5,6};
    int i;
    int dup;
    int j;
    int s1 = sizeof(arr1)/4;
    int s2 = sizeof(arr2)/4;
    int usize = 0;
    int arrU[s1 + s2];
    for (i=0; i < s1; i++){
        dup = 0;
        for (j=0; j < usize; j++){
            if (arr1[i] == arrU[j]){
                dup = 1;
                break;
            }
        
        }
        if (!dup){
            arrU[usize++] = arr1[i];
            
        }        
            
        }
    for (i=0; i < s2; i++){
        dup = 0;
        for (j=0; j < usize; j++){
            if (arr2[i] == arrU[j]){
                dup = 1;
                break;
            }
        
        }
        if (!dup){
            arrU[usize++] = arr2[i];
            
        }        
            
        }
    printf("{");    
    for (i=0 ; i < usize; i++){
        printf("%d,", arrU[i]);
    }    
    printf("}");

    return 0;
}