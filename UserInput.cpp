#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class UserInput
{
private:
    /* data */
public:
    int no_of_verity;
    int no_of_2_team;
    int no_of_3_team;
    int no_of_4_team;


    UserInput(/* args */);
    ~UserInput();
};

UserInput::UserInput(/* args */)
{
    string myTxt;

    ifstream MyReadFile("a_example");

    getline (MyReadFile,myTxt);
    
    no_of_verity = (int)myTxt[0];
    no_of_2_team = (int)myTxt[1];
    no_of_3_team = (int)myTxt[2];
    no_of_4_team = (int)myTxt[3];

    cout<< no_of_verity << no_of_2_team << no_of_3_team << no_of_4_team;
}

UserInput::~UserInput()
{

}

int main()
{
    UserInput();
}