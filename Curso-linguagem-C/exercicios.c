#include <stdio.h>
#include <math.h>

int soma(int nums[3]) {
    int total = 0;
    for(int i = 0; i < 3 ; i++){
        total += nums[i];
    }
   return total;
}

int main(){
   int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int total = soma(nums);
    printf("%d", total);  

}