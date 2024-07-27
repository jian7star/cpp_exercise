#include<iostream>
#include<string>

// struct defaults the parameters to public
// class is private
// protected: subclass can reference the class but  can not out side the class
class Entity
{
public:
    // if no virtual, when the subclass pass the function PrintName, it will print same as Entity;
    // it allow the subclass overwrite the entity;
    // virtual function may cause the low performance.
    virtual std::string GetName(){return "Entity";}
};
// pure virtual function
class PureVirtual
{
public:
    // equal 0 mean the funtion is pure virtual function
    // this is that the function must be implemented in subclass
    //c++ has no interface but class; 
    virtual std::string GetName() = 0;
};
class Player: public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name): m_Name(name) {}
    // allow overwrite parents class;
    std::string GetName()override{return m_Name;}
};

void PrintName(Entity* e)
{
    std::cout<< e->GetName()<<std::endl;
}
int main()
{

}