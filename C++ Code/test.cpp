#include<iostream>
int main()
{
	struct Animal
	{
		virtual void sound() const { cout << "eek"; }
	};
	struct Human : Animal
	{
		void sound() const { cout << "hello"; }
	};
	struct Scientist : Human
	{
		void sound() const { cout << "greetings"; }
	};
	Animal* animal = new Scientist;
	animal->sound();
}