#include "RightAngled.h"

#include <sstream>

RightAngled::RightAngled()
	:pair(Pair())
{}

RightAngled::RightAngled(Pair v)
	:pair(v)
{}

RightAngled::RightAngled(const RightAngled& v)
	: pair(v.pair)
{}

RightAngled::~RightAngled()
{ }


RightAngled& RightAngled::operator = (const RightAngled& v)
{
	pair = v.pair;

	return *this;
}

RightAngled::operator string () const
{
	stringstream ss;
	ss << "Pair :\n" << pair << '\n';

	return ss.str();
}

ostream& operator <<(ostream& out, const RightAngled& a)
{
	return out << string(a);
}

istream& operator >>(istream& in, RightAngled& a)
{

	in >> a.pair;
	return in;
}

double RightAngled::Hypotenuse()
{
	double a = pair.GetFirst();
	double b = pair.GetSecond();

	return sqrt(a * a + b * b);
}

double RightAngled::Area() const
{
	return pair.Product() / 2;
}