#include<iostream>
using namespace std;
class hero
{
	public:
	int health;
};
int main()
{
	hero h1;
	h1.health=4;
	cout<<"health is "<<h1.health<<endl;
	return 0;
}