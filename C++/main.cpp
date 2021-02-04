#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

vector<string> ReadFile()
{
    vector<string> data;
    string MyData;

    ifstream MyFile("D:/Hash_Code_2021/C++/Test_Inputs/a_example");
    while(getline(MyFile,MyData))
    {
        data.push_back(MyData);
    }
    return data;
}

// this function will split a input string and will return a array of string
vector<string> split(string input,string delimiter)
{
    vector<string> split_string;
    size_t pos = 0;
    string token;

    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        split_string.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    return split_string;
}

int main()
{
    // organizing data
    int varity_of_dishes, no_2_team, no_3_team, no_4_team;


    vector<string> data = ReadFile();
    cout<<data[0]<<endl;

    data = split(data[0]," ");
    cout<<"The types of dishes "<<data[0];

    return 0;
}
