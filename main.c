///Name:Mahamudul islam
///id:2312314042
///section:5


/**
 * @file main.c
 */

#include <stdio.h>
#include "splash.h"
#include<string.h>
#include"login.h"
#include"menu.h"
#include"struct.h"

int main() {
	splashScreen();
	FILE *fp;
    char user[20],pass[9];

    fp=fopen("login.txt","r"); ///read username and password
    fscanf(fp," %s", user);
    fscanf(fp," %s", pass);

    login(user,pass);
	return 0;
}
