#include<stdio.h>
#include<windows.h>
FILE *Link;
void main(){
    system("mode 20,10");
    char Variable;
    for(;;){
    if(Link=fopen("Links.txt","r")){//for EXIT
        fclose(Link);
        system("DEL Links.txt");
        return 0;
    }
    Variable=getch();
    if(Variable=='2'||Variable=='4'||Variable=='6'||Variable=='8'){
     Link=fopen("secret.txt","w");
            fprintf(Link,"%c",Variable);
            fclose(Link);
    }

}}