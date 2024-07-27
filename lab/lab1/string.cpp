#include<iostream>
#include<string>
using namespace std;
// if use std::string string , the statement is a copy slower than reference
void PrintString(const std::string& string)
{
    cout<<string<<endl;
}
// char* name = "hello"; name[2] = 'a'; will be warning;
int main()
{
    // const https://www.bilibili.com/video/BV1oD4y1h7S3/?p=34&spm_id_from=pageDriver&vd_source=2060c21059b0e32c91f743e7a9189cc6
    std::string name = std::string("cherno") + "Hello!";
    PrintString(name);
    bool contains = name.find("no") != std::string::npos;
    std::cout<<name<<std::endl;
    // const
    const int MAX_AGE = 90;
    // can change the content of 'a' but not the address
    //  equal int const* a   
    int* const a = new int;
    *a = 2;
    // can change the address but not content. 
    const int* b = new int;
    b = (int*) MAX_AGE;
}