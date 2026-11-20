#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
int main() {
    char user[50] = "Void";
    char cmd[50] = "";
    char pswrd[50] = "";
    char* commands = "Commands:Exit,Help,Troll,Osinfo,,Ps,Cls,Tree,Time,Rmkpswrd,../,Whoami,VERSION";
    printf("\033[0;34m Welcome to Light Triada OS 1.0.2\n");
    printf("     .-----.     \n");
    printf("   .'       '.   \n");
    printf("  /   O       \\  \n");
    printf(" |             | \n");
    printf(" |        *    | \n");
    printf("  \\           /  \n");
    printf("   '.       .'   \n");
    printf("     '-----'    \033[0m \n");
    while (1) {
        printf("Type your name: ");
        scanf_s("%50s", user, (unsigned)sizeof(user));
        if (strlen(user) > 30) {
            printf("Error: Name cannot be longer than 30 characters.Please try again\n");
        }
        if (strlen(user) <= 30) {
            break;
        }
    }
    while (1) {
        printf("Type Your Password: ");
        scanf_s("%s", pswrd, (unsigned)sizeof(pswrd));
        if (strlen(pswrd) > 40) {
            printf("Error: Password cannot be longer than 40 characters.Please try again.");
        }
        if (strlen(pswrd) <= 40) {
            break;
        }

    }
    printf("Hello User %s\n", user);
    printf("Your password : %s", pswrd);
    while (1) {
        printf("\n@%s~$",user);
        scanf_s("%49s", cmd, (unsigned)sizeof(cmd));
        if (strcmp(cmd, "Exit") == 0) {
            printf("XD Gooood Bye My Friend %s :))) XD", user);
            break;
        }
        if (strcmp(cmd, "Troll") == 0) {
            printf("BOOO! >:)");
        }
        if (strcmp(cmd, "Help") == 0) {
            printf("%s", commands);
        }
        if (strcmp(cmd, "Osinfo") == 0) {
            printf("\033[0;34m Light triad OS 1.0.2\n");
            printf("     .-----.     \n");
            printf("   .'       '.   \n");
            printf("  /   O       \\  \n");
            printf(" |             | \n");
            printf(" |        *    | \n");
            printf("  \\           /  \n");
            printf("   '.       .'   \n");
            printf("     '-----'     \033[0m\n");
        }
        if (strcmp(cmd, "Ps") == 0) {
            system("tasklist");
        }
        if (strcmp(cmd, "Cls") == 0) {
            system("Cls");
        }
        if (strcmp(cmd, "Tree") == 0) {
            system("Tree");
        }
        if (strcmp(cmd, "Time") == 0) {
            time_t t = time(NULL);
            char buf[26];
            ctime_s(buf, sizeof(buf), &t);
            printf("Current Time: %s", buf);
        }
        if (strcmp(cmd, "Rmkpswrd") == 0) {
            char pswrdCHECK[50];
            while (1) {
                printf("Type you old Password: ");
                scanf_s("%s", pswrdCHECK, (unsigned)sizeof(pswrdCHECK));
                if (strcmp(pswrdCHECK, pswrd) == 0) {
                    printf("Type your new Password: ");
                    scanf_s("%49s", pswrd, (unsigned)sizeof(pswrd));
                    printf("Password updated successfully!\n");
                    break;
                }
                else {
                    printf("Innorect Password!");
                    break;
                }
            }
        }
        if (strcmp(cmd, "Whoami") == 0) {
            printf("YOU: %s", user);
        }
        if (strcmp(cmd, "VERSION") == 0) {
            printf("#1.0.2#");
        }
        if (strcmp(cmd, "../") == 0) {
            if (strlen(pswrd) > 0) {
                printf("Your Password: %s", pswrd);
            }
            else {
                printf("FATAL ERROR\nYOU DONT HAVE PASSWORD");
            } 
        }

    }
    return 0;
}