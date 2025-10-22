#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		string name;
		int rollnumber;
		float marks;
		public:
			student(){
				name ="";
				rollnumber=0;
				marks=0.0;
			}
			void setdetails(string name, int rollnumber,float marks){
				this->name = name;
				this->rollnumber=rollnumber;
				this->marks =marks;
			}
			student& updatename(string name){
				this->name=name;
				return*this;
			}
			
}
