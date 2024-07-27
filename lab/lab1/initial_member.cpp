#include<iostream>
#include<string>
using namespace std;
// class member initial
class Example
{
public:
    Example()
    {
        cout<<"Created Entity!"<<endl;
    }
    Example(int x)
    {
        cout<<x<<endl;
    }
};
class Entity
{
private:
    string m_Name;
    Example m_example; 
public:
    // Entity()
    // {
    //     m_Name = string("Unknown");
    //     m_example = Example(8);
    // } // create two example instance.

    Entity()
        :m_example(8) // create 1 example instance
    {

    }
    Entity(const string& name)
        : m_Name(name)  //initial the member of class, write in order
    {

    }
};
int main()
{
    Entity e; 
}