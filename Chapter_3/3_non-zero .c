#include <stdio.h>

int main()
{
    if(1){
        printf("This is executed!\n");
    }
    if(234){
        printf("This is also executed!\n");
    }
    if(2.312){
        printf("This is also executed!\n");
    }
    if("c"){
        printf("This is also executed!\n");
    }
    if(0){
        //c programming not allowed 0
        printf("I am zero -- Iam not executed!\n");
    }
    return 0;
}