#include<iostream>
#include<string>
using namespace std;
static int s_Speed = 2;
static int s_level = 3;
int main()
{
    s_Speed = s_level>5 ? 10:5;
    s_Speed = s_level > 2 && s_level < 10 ? s_level == 3 ? 10:2:1;
    cout<<s_Speed<<endl;
}