#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

// read input file and tokenize the data
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

// make the list of ingridients
vector<vector<string>> Ingridients(vector<string> _list)
{
    vector<vector<string>> ingridient_list;

    for(auto i = _list.begin() ; i <= _list.end(); ++i)
    {
        //ingridient_list.push_back(i);
    }
}

int main()
{
    // organizing data
    int varity_of_dishes, no_2_team, no_3_team, no_4_team;
    vector<vector<string>> list_of_ingrdient;


    vector<string> data = ReadFile();
    vector<string> variables;
    cout<<data[0]<<endl;

    variables = split(data[0]," ");

    varity_of_dishes = stoi(variables[0]);
    no_2_team = stoi(variables[1]);
    no_3_team = stoi(variables[2]);
    no_4_team = stoi(variables[3]);

    cout<<"Total variety of dishes: "<<varity_of_dishes<<endl;
    cout<<"Total no of 2 member team: "<<no_2_team<<endl;
    cout<<"Total no of 3 member team: "<<no_3_team<<endl;
    cout<<"Total no of 3 member team: "<<no_4_team<<endl;

    vector<string> line_from_list;
    line_from_list = split(data[1]," ");


    for(auto i = data.begin();i<=data.end();++i)
    {
        vector<string> line_from_list = split(*i,"\n");

        for(auto j = line_from_list.begin(); j<=line_from_list.end(); ++j)
        {
            cout<<*j<<endl;
        }
    }

    //cout<<list_of_ingrdient[0];

    return 0;
}
