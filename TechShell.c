
//CSC22 Project
//Keith Mueller and Katie Sparr
//14 NOV 2022

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* CommandPrompt()
{
        char cwd[500];
        getcwd (cwd, sizeof(cwd));
        printf("\n%s$", cwd);
}

int main()
{       
        CommandPrompt();
}   
