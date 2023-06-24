#include <stdio.h>
#include "splash.h"
#include<string.h>
#include"login.h"
#include"menu.h"
#include"struct.h"

void login(char s[],char s2[]) ///passing real username and pass
{
    char user[20],pass[9];
    int flag1,flag2,t=3,i;
    while(t--){

        printf("please enter username:");///getting username and pass from user
        scanf(" %s",user);
        printf("please enter password:");
        scanf(" %s",pass);

        flag1=strcmp(s,user); ///checking real and user typed username and pass
        flag2=strcmp(s2,pass);///if both are same flag1,flag2=0

        if(flag1==0 && flag2==0){
            printf("Login successful\n");
            t=0;
            menu_driven();
        }
        else{
            if(t==0){
                printf("Unsuccssfull! No more tries left\n");
            }
            else{
                printf("Login unsuccessfull,try %d more time\n",t);
            }
        }
    }
}

