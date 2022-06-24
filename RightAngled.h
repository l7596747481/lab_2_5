#pragma once
#include "Pair.h"

class RightAngled 
	: public Pair
{
public:
	double Hypotenuse();
	double Area() const;

	RightAngled();
	RightAngled(Pair);
	RightAngled(const RightAngled& v);
	~RightAngled();

	RightAngled& operator = (const RightAngled&);
	operator string() const;
	friend ostream& operator << (ostream&, const RightAngled&);
	friend istream& operator >> (istream&, RightAngled&);
};