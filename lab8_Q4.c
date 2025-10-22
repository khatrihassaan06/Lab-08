#include <stdio.h>

int main() {
    int tempData[7][3];
    int i,j;
    int dailyAvg = 0;
    int dailyTotal = 0;
    for (i=0; i < 7; i++){
        switch(i){
                case 0:
                printf("Monday\n");
                    for (j = 0; j < 3; j++){
                        switch(j){
                            case 0:
                                printf("enter today's morning temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 1:
                                printf("enter today's afternoon temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 2:
                                printf("enter today's night temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                                
                        }
                    }
                    break;
                case 1:
                printf("Tuesday\n");
                    for (j = 0; j < 3; j++){
                        switch(j){
                            case 0:
                                printf("enter today's morning temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 1:
                                printf("enter today's afternoon temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 2:
                                printf("enter today's night temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                                
                        }
                    }
                    break;
                case 2:
                printf("Wednesday\n");
                    for (j = 0; j < 3; j++){
                        switch(j){
                            case 0:
                                printf("enter today's morning temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 1:
                                printf("enter today's afternoon temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 2:
                                printf("enter today's night temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                                
                        }
                    }
                    break;
                
                case 3:
                printf("Thursday\n");
                    for (j = 0; j < 3; j++){
                        switch(j){
                            case 0:
                                printf("enter today's morning temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 1:
                                printf("enter today's afternoon temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 2:
                                printf("enter today's night temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                                
                        }
                    }
                    break;
                
                case 4:
                printf("Friday\n");
                    for (j = 0; j < 3; j++){
                        switch(j){
                            case 0:
                                printf("enter today's morning temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 1:
                                printf("enter today's afternoon temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 2:
                                printf("enter today's night temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                                
                        }
                    }
                    break;
                case 5:
                printf("Saturday\n");
                    for (j = 0; j < 3; j++){
                        switch(j){
                            case 0:
                                printf("enter today's morning temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 1:
                                printf("enter today's afternoon temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 2:
                                printf("enter today's night temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                                
                        }
                    }
                    break;
                case 6:
                printf("Sunday\n");
                    for (j = 0; j < 3; j++){
                        switch(j){
                            case 0:
                                printf("enter today's morning temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 1:
                                printf("enter today's afternoon temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                            case 2:
                                printf("enter today's night temperature: ");
                                scanf("%d", &tempData[i][j]);
                                break;
                                
                        }
                    }
                    break;
                    
        }
    }
    for (i=0; i < 7; i++){
        switch(i){
            case 0:
                printf("Moday:\n");
                j = 0;
                dailyTotal = 0;
                printf("  morning temp = %d", tempData[i][j]);
                dailyTotal = dailyTotal + tempData[i][j];
                printf("  afternoon temp= %d", tempData[i][j + 1]);
                dailyTotal = dailyTotal + tempData[i][j+1];
                printf("  night temp= %d", tempData[i][j + 2]);
                dailyTotal = dailyTotal + tempData[i][j+2];
                dailyAvg= dailyTotal/3;
                printf("\n  Average temperature today= %d\n", dailyAvg);
        }
        
        switch(i){
            case 1:
                printf("Tuesday:\n");
                j = 0;
                dailyTotal = 0;
                printf("  morning temp = %d", tempData[i][j]);
                dailyTotal = dailyTotal + tempData[i][j];
                printf("  afternoon temp= %d", tempData[i][j + 1]);
                dailyTotal = dailyTotal + tempData[i][j+1];
                printf("  night temp= %d", tempData[i][j + 2]);
                dailyTotal = dailyTotal + tempData[i][j+2];
                dailyAvg= dailyTotal/3;
                printf("\n  Average temperature today= %d\n", dailyAvg);
        }
        
        switch(i){
            case 2:
                printf("Wednesday:\n");
                j = 0;
                dailyTotal = 0;
                printf("  morning temp = %d", tempData[i][j]);
                dailyTotal = dailyTotal + tempData[i][j];
                printf("  afternoon temp= %d", tempData[i][j + 1]);
                dailyTotal = dailyTotal + tempData[i][j+1];
                printf("  night temp= %d", tempData[i][j + 2]);
                dailyTotal = dailyTotal + tempData[i][j+2];
                dailyAvg= dailyTotal/3;
                printf("\n  Average temperature today= %d\n", dailyAvg);
        }
       
        switch(i){
            case 3:
                printf("Thursday:\n");
                j = 0;
                dailyTotal = 0;
                printf("  morning temp = %d", tempData[i][j]);
                dailyTotal = dailyTotal + tempData[i][j];
                printf("  afternoon temp= %d", tempData[i][j + 1]);
                dailyTotal = dailyTotal + tempData[i][j+1];
                printf("  night temp= %d", tempData[i][j + 2]);
                dailyTotal = dailyTotal + tempData[i][j+2];
                dailyAvg= dailyTotal/3;
                printf("\n  Average temperature today= %d\n", dailyAvg);
        }
        
        switch(i){
            case 4:
                printf("Friday:\n");
                j = 0;
                dailyTotal = 0;
                printf("  morning temp = %d", tempData[i][j]);
                dailyTotal = dailyTotal + tempData[i][j];
                printf("  afternoon temp= %d", tempData[i][j + 1]);
                dailyTotal = dailyTotal + tempData[i][j+1];
                printf("  night temp= %d", tempData[i][j + 2]);
                dailyTotal = dailyTotal + tempData[i][j+2];
                dailyAvg= dailyTotal/3;
                printf("\n  Average temperature today= %d\n", dailyAvg);
        }
        
        switch(i){
            case 5:
                printf("Saturday:\n");
                j = 0;
                dailyTotal = 0;
                printf("  morning temp = %d", tempData[i][j]);
                dailyTotal = dailyTotal + tempData[i][j];
                printf("  afternoon temp= %d", tempData[i][j + 1]);
                dailyTotal = dailyTotal + tempData[i][j+1];
                printf("  night temp= %d", tempData[i][j + 2]);
                dailyTotal = dailyTotal + tempData[i][j+2];
                dailyAvg= dailyTotal/3;
                printf("\n. Average temperature today= %d\n", dailyAvg);
        }
        
        switch(i){
            case 6:
                printf("Sunday:\n");
                j = 0;
                dailyTotal = 0;
                printf("  morning temp = %d", tempData[i][j]);
                dailyTotal = dailyTotal + tempData[i][j];
                printf("  afternoon temp= %d", tempData[i][j + 1]);
                dailyTotal = dailyTotal + tempData[i][j+1];
                printf("  night temp= %d", tempData[i][j + 2]);
                dailyTotal = dailyTotal + tempData[i][j+2];
                dailyAvg= dailyTotal/3;
                printf("\n  Average temperature today= %d \n", dailyAvg);
        }
        
        
    }

    return 0;
}