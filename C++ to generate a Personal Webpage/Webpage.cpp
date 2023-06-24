// Sushmita Poudel
// Assignment- Program 8
// 06/19/2023
// Personal Web Page Generator

#include <iostream>
#include<string>
#include<fstream>


using namespace std;
int main()
{
string name,last, describe;
string filename;
string fullname;


cout<<"Enter your name: ";
cin>>name;
cin.get(); //is use to clear the input buffer after reading the first name(single word)

getline(cin,last); //reads the user input from the console and store it in last variable using the getline function. THe function reads the whole line of text, including space, until a newline character is encounter.

cout<<" Describe yourself: ";
getline(cin, describe);


filename=name + "_" +last +".html"; //creating a html filename
fullname=name+" "+last;


//creating a file and opening a text file
ofstream file(filename);


//write to a file
if(file.is_open())
{
file<<"<html>"<<endl;
file<<"<head>"<<name <<"'s Webpage</head>"<<endl;
file<<"<body>"<<endl;
file<<"<center>"<<endl;
file<<"<h1>" <<fullname<< "</h1>"<<endl;
file<<"</center>"<<endl;
file<<" <hr /> "  <<describe<<" <hr />"<<endl;
file<<"</body>"<<endl;
file<<"</html>"<<endl;

file.close(); //close the file
cout<<"HTML file is created successfully: " <<filename <<endl;
}
else
{cout<<"failed to create the html file. " <<endl;
}


return 0;
}
