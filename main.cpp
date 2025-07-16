#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void find_in_line(std::string line, std::string target);

int main(int argc, char **argv){

    if(argc < 4)
        return 1;

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream file(filename.c_str());
    std::string text;
    std::string line;

    if(!file.is_open()){
        return 1;
    }

    while (std::getline(file, line))
    {
        text += line + "\n";
    }
    file.close();



    std::cout << text << std::endl;

    int pos = 0;
    while((pos = text.find(s1,pos)) != std::string::npos){
        text.erase(pos, s1.length());
        text.insert(pos,s2);
        pos += s2.length();
    }
    std::cout << "-----------------" << std::endl;
    std::cout << text << std::endl;

    std::string new_filename = filename + ".replace";
    std::ofstream out_file(new_filename.c_str());
    if(!out_file.is_open())
        return 1;
    
    out_file << text;
    out_file.close();
    
    return 0;
}