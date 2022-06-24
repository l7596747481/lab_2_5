#include "Pair.h"

#include <sstream>

Pair::Pair()
	: first(0), second(0)
{}

Pair::Pair(const double f, const double s)
	: first(f), second(s)
{}

Pair::Pair(const Pair& v)
	: first(v.first), second(v.second)
{}

Pair::~Pair()
{}

Pair& Pair::operator = (const Pair& v)
{
	first = v.first;
	second = v.second;

	return *this;
}

Pair::operator string () const
{
	stringstream ss;
	ss << "first = " << first << '\n';
	ss << "second = " << second << '\n';

	return ss.str();
}

ostream& operator <<(ostream& out, const Pair& a)
{
	return out << string(a);
}

istream& operator >>(istream& in, Pair& a)
{
	double f, s;
	cout << "first = "; in >> f;
	cout << "second = "; in >> s;
	a.SetFirst(f);
	a.SetSecond(s);
	return in;
}

Pair& Pair::operator ++()
{
	++first;
	return *this;
}

Pair& Pair::operator --() 
{
	--first;
	return *this;
}

Pair Pair::operator ++(int) 
{
	Pair t(*this);
	second++;
	return t;
}

Pair Pair::operator --(int)
{
	Pair t(*this);
	second--;
	return t;
}

double Pair::Product() const 
{ 
	return first * second; 
}