#include "Reader.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Reader::Reader(){
    ifstream myFile ("D:\\gaurangWorkspace\\CADify\\data.txt");
    string line;
    if(myFile.is_open()){
        while(getline(myFile, line)){
            cout<<line<<endl;
        }
        myFile.close();
    }
    else{
        cout<<"Unable to open file";
    }
}

Reader::~Reader(){}
