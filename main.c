#include <stdio.h>

int power(int num1, int num2){
    int R = 1;
    for (int i=0; i<num2; i++){
        R = R * num1;
    }
    printf("R = %d\n", R);
    return R;
}
int fact(int num) {
    int k = num, m = num;
    for (int i = 1 ; i < num; i++){
        m--;
        k *= m;
    }
    return k;
}


void menu(){

    printf("Επιλογή 1 υπολογισμός της δύναμης πρώτου αριθμόυ στην δύναμη δεύτερου αριθμού\n");
    printf("========================================================================\n");
    printf("Επιλογή 2 υπολογισμός του (πρώτου αριθμόυ)! και του (δεύτερου αριθμού!)\n");
    printf("========================================================================\n");
    printf("Επιλογή 3 υπολογισμός του πλήθους των συνδυασμών πρώτου αριθμόυ ανά δεύτερου αριθμού\n");
    printf("========================================================================\n");
    printf("Επιλογή 4 έξοδος\n");
}

int main() {
    
    int dif, firstNum, secondNum, thirdNum, num, num1, num2, option, result, counter =0;
    do {
        printf("\n");
        printf("Δώσε πρώτο αριθμό: ");
        scanf("%d", &num1);
        printf("Δώσε δεύτερο αριθμό: ");
        scanf("%d", &num2);
        printf("\n");
        menu();
        do {
                printf("Η επιλογή σου: ");
                scanf("%d", &option);
                if (option == 4){
                    break;
                }
            result = 0;
            if(option == 1) {
                counter++;
                num = power(num1, num2);
                printf("%d", num);
            } else if (option == 2) {
                counter++;
                num = fact(num1);
                printf("%d\n", num);
                num = fact(num2);
                printf("%d\n", num);

            } else if (option == 3) {
                counter++;
                if (num1 >= num2){
                    firstNum = fact(num1);
                    secondNum = fact(num2);
                    dif = num1 - num2;
                    thirdNum = fact(num1 - num2);
                    if (thirdNum == 0)
                        thirdNum = 1;
                    result = firstNum / (secondNum * (thirdNum));
                    printf("%d", result);
                } else {
                    printf("0");
                }
            }
        } while(option > 4 || option < 1);
            
    } while(option != 4);
    printf("Σωστές επιλογές = %d\n", counter);
        return 0;
}
