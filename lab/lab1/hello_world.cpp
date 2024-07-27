#include<iostream>
#include <cstring>
using namespace std;
void hello_world()
{
    cout<<"Hello world!"<<endl;
}
// void increment(int& value)
// {
//     value++;
// }
// int main()
// {
//     int a = 5;
//     int b = 8;
//     // ref is a, just the other name of a; 引用; 
//     int& ref=a;
//     ref = b;
//     cout<<a<<endl;
//     increment(a);
// }
// class Singleton{
// private:
//     static Singleton* s_Instance;
// public:
//     static Singleton& Get(){
//         return *s_Instance;
//     }
// };

class Entity
{
public:
    float x,y;
    Entity(float x, float y)
    {   
        x = x;
        y = y;
    }
    ~Entity()
    {
        // 析构函数，class destroyed run the function
        cout<<"destroyed"<<endl;
    }
};
int main()
{
    Entity e(2, 3);

}