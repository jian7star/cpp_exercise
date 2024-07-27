// new allocate the memory on stack
#include<iostream>
#include<string>
using namespace std;
class Entity
{

};
int main()
{
    // new create an instance of Entity also call the construct function
    // need to clear how the "new" allocate on stack and heap
    Entity* e = new Entity();
    // if use "new", use "delete"
    delete e;
    int* b = new int[20];
    delete[] b;
    // malloc only create an pointer to the instance not all function.
    // seldom use
    Entity* e = (Entity*)malloc(sizeof(Entity));

}