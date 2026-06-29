#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <fstream>

using namespace std;
int main(){
    int choice;
    cout<<"1. Convert text to ASCII"<<"\n";
    cout<<"2. Convert ASCII to text"<<"\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    cin.ignore();
    string write;
    string path;
    string name;
    fstream File;
    

if(choice == 1 ){
    string line;
    string end = "END";
    cout<<"Write what you want to write(It will be saved in your preffered folder)END to finish: ";
    getline(cin, line);
    while(line != end){
        write = write + line + '\n';
        getline(cin, line);
        
    }
    cout<<"Enter the name of the file: ";
    getline(cin, name);
    
    cout<<"Enter the path to save: ";
    getline(cin, path);
    cout<<"---------------------------------------------------------------------------------------------------\n";
    cout<<"---------------------------------------------------------------------------------------------------\n";
    if (path.back() != '\\')
{
    path += "\\";
}

    ofstream File(path + name);
if(File.is_open()){
    for(char c : write){
        int cha = static_cast<int>(c);
        File<<cha<<" ";

    }
    cout<<"SUCCESSFUL!!!\n";
    File.close();
    fstream file;
    string line;
    file.open(path+name, ios::in);
    while (getline(file, line))
{
    cout << line << endl;
}
  file.close();

}
else{
    cout<<"Failed. Check your path address.\n";
    cout << path + name << endl;
      }
    File.close();
    }

else if(choice == 2 ){
    string path;
    cout<<"Write the ASCII code file path: ";
    getline(cin, path);
    cout<<"---------------------------------------------------------------------\n";
    cout<<"---------------------------------------------------------------------\n";
    fstream File;
    File.open(path, ios::in);
    string line;
    while(getline(File, line)){
        line=line;
    }
    stringstream ss(line);
    string word;
    while(ss >> word){
        int assci =  stoi(word);
        char c = static_cast<char>(assci);
        cout<<c;

    }

}
else if(cin.fail()){
   cout<<"Hey! Give a proper input!!\n";
}

else{
    cout<<"Listen I get it your life your rules but you have to follow the program!\n";
}
    system("pause>0");
    return 0;
   
}