/*//TASK 1: 
#include<iostream>
using namespace std;
int main()
{
	char choice, pay;
	int day, fine;
	cout << "Do you want to Borrow(B) OR Return(R) a book?" << endl;
	cin >> choice;
	if (choice == 'B')
	{
		cout << "Book is Issued for 7 days" << endl;
	}
	else if (choice == 'R')
	{
		cout << "How manny days have you borrowed the book for?" << endl;
		cin >> day;
		if (day <= 7)
		{
			cout << "Book returned successfully" << endl;
		}
		else if (day > 7)
		{
			cout << "your return is over due" << endl;
			fine = 1 * day;
			cout << "Your fine is: $" << fine << endl;
			cout << "Pay fine(Y/N)" << endl;
			cin >> pay;
			while (pay == 'N')
			{
				cout << "Please pay fine\nYour fine is: $" << fine << endl;
				cout << "Pay fine?(Y/N)" << endl;
				cin >> pay;
			}
			if (pay == 'Y')
			{
				cout << "Successful Transaction" << endl;
			}
			else
			{
				cout << "Invalid";
			}
		}
	}
	else
	{
		cout << "Invalid";
	}
	system("pause");
	return 0;

}


//Task 2:
#include<iostream>
using namespace std;
int main()
{
	char choice;
	int start, end, number, c;
	bool prime = true;
	cout << "Do you want to find prime numbers ina given range(R) OR Do you want to check a number?(C)";
	cin >> choice;
	if (choice == 'R')
	{
		cout << "Enter Range";
		cin >> start >> end;
		for (int i = start; i <= end; i++)
		{
			c = 0;
			for (int j = 1; j <= i; j++)
			{
				if (j == 1 || j == i)
				{
					continue;
				}
				if (i % j == 0)
				{
					c = c + 1;
					break;
				}
			}
			if (c == 0)
			{
				cout << i << endl;
			}
		}

	}
	else if (choice == 'C')
	{
		cout << "Enter your number: ";
		cin >> number;
		for (int i = 2; i <= number / 2; i++)
		{
			if (number % i == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime)
		{
			cout << "Number is prime";
		}
		else
		{
			cout << "Number is not prime";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}*/