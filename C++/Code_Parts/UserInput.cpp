#include "UserInput.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    char str[1024];
    char *pch;
    FILE *fp;

    fp = fopen("Test_Inputs\a_example","r");

    if(fp != NULL)
    {
        while(fscanf(fp, "%s",str) != EOF)
        {
            cout<<str;
        }
    }
    fclose(fp);
}
