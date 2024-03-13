#include <stdio.h>
int main(){
    FILE* f;
    f = fopen("teste.txt","r");
    if(f == NULL){
        printf("error");
    } else{
        printf("arquivo aberto com sucesso");
    }
    fclose(f);
    return 0;
}