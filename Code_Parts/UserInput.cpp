#include "UserInput.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

UserInput::UserInput()
{
    string myText;
    fstream MyReadFile("Test_Inputs/a_example");
    
    while (getline (MyReadFile,myText))
    {
        cout<<myText;
    }
}
