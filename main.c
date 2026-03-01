#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("available commands:help,start,settings\n");
    }
    else if (strcmp(argv[1],"help")== 0 ){
        printf("available commands: help,start,settings\n");
    }
    else if (strcmp(argv[1],"start")==0|| strcmp(argv[1],"settings")==0){
        printf("option %s not implemented!\n",argv[1]);
    }
    else {
        printf("missing option! to see all available commants, use help\n");
    }
    return 0;
    


}