#pragma once
#include <iostream>

using namespace std;

class Pair
{
private:
	double first;
	double second;

public:
	double GetFirst()const { return first; };
	double GetSecond()const { return second; };

	void SetFirst(double first) { this->first = first; };
	void SetSecond(double second) { this->second = second; };

	double Product() const;

	Pair();
	Pair(double, double);
	Pair(const Pair&);
	~Pair(void);

	Pair& operator = (const Pair& m);
	operator string () const;

	friend ostream& operator << (ostream& out, const Pair& m);
	friend istream& operator >> (istream& in, Pair& m);
	
	Pair& operator ++ ();
	Pair& operator -- ();
	Pair operator ++ (int);
	Pair operator -- (int);
};