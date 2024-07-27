#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Vertex{
private:
    float x, y, z;
public:
    Vertex(float x, float y, float z)
        :x(x), y(y), z(z)
        {

        }
    // the copy constructor, Vertex v1(v2), means copy v2 to v1
    Vertex(const Vertex& vertex)
    {
        cout<<"COPE!"<<endl;
    }
};

int main()
{
    vector<Vertex> vertices;
    // chatgpt check the vector copy
    vertices.reserve(2);
    vertices.emplace_back(Vertex(1,2,3));
    vertices.emplace_back(Vertex{4,5,6});


}