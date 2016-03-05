#include <iostream>
#include <stdlib.h> 
#include <ctime>

using namespace std;

class Dice{
public:
	float sum = 0;
	void methodRoll(int ran)
	{
		cout << "Dice value after roll: " << ran << endl;
	}//Method Roll

	float average(int dVal,int rolls)
	{
	
		//rolls = rolls + 1;
		 sum =sum+dVal;
		 return (sum/rolls);
	}//Average

	float average(int amt,double tot)
	{
		return tot/amt;
	}//Overloaded Average
};
int main()
{
	Dice obj;
	int ran = 0;
	int x = 1;
	double sum = 0;
	int c = 0;
	int ch;//ch=choice, c is a counter
	bool flag = true;
	while (flag == true)
	{
		cout << "Please choose an option\nEnter 0 to quit\n1. Roll again\n2. Average value for dice rolls\n3. Average value of array" << endl;
		cin >> ch;
		switch (ch)
		{
		case 0:
			flag = false;
			break;
		case 1:
			srand(time(0));
			ran = (rand() % 6) + 1;
			c = c + 1;
			obj.methodRoll(ran);
			obj.average(ran, 0);
			break;
		case 2:
			cout << "Average dice rolls: " << obj.average(0, c) << endl;
			flag = false;
			break;
		case 3:
			
			float arr[10] = {2,3,4,2,1,23,21,34,12,13};
			for (int i = 0; i < 10; i++)
			{
				sum = sum + arr[i];
			}//Loop
			cout << "Average of array values: " << obj.average(10,sum) << endl;
			break;
		}
	}//while
	return 0; 
}