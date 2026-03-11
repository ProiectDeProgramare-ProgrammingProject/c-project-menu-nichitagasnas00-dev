#include <stdio.h>
#include <string.h>

void display_help() {
    printf("Available commands:\n");
    printf("  main add\n");
    printf("  main delete\n");
    printf("  main search\n");
    printf("  main list\n");
    printf("  main help\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        display_help();
        return 0;
    }

    if (strcmp(argv[1], "help") == 0) {
        display_help();
        return 0;
    }

    if (strcmp(argv[1], "add") == 0 || 
        strcmp(argv[1], "delete") == 0 || 
        strcmp(argv[1], "search") == 0 || 
        strcmp(argv[1], "list") == 0) {
        printf("Option %s not implemented!\n", argv[1]);
    } 
    else {
        printf("Missing option! Too see all available commands, use help!\n");
    }

    return 0;
}
