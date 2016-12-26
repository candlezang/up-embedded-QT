/*
 * 	静态成员的使用
 * */
#include <iostream>
using namespace std;

class Com{
	private:
		static int totalAge;
	public:
		static int count;
		static int GetTotalAge(int age){
			totalAge += age;
			return totalAge;
		}
};
int Com::count = 0;
int Com::totalAge = 0;

class Human{
	private:
		int age;
		string name;
	public:
		Human(int age, string name):age(age), name(name){
			Com::count++;
			Com::GetTotalAge(age);
		}
};

int main(){
	Human h01(201, "tth1");
	Human h02(202, "tth2");
	Human h03(203, "tth3");
	Human h04(204, "tth4");
	cout << "人数: " << Com::count << endl;
	
	cout << "年龄总和:" << Com::GetTotalAge(0) << endl;
	return 0;
}
