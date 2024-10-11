#include "Writer.h"
#include <iostream>
#include <fstream>

Writer::Writer(){}
Writer::~Writer(){}

void Writer::write(std::string data){
    std::ofstream out("D:\\gaurangWorkspace\\CADify\\data.dat");
    out<< data;
    out.close();
}
