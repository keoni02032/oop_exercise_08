#ifndef D_RHOMBUS_HPP_
#define D_RHOMBUS_HPP_

#include <iostream>
#include "figure.hpp"

struct rhombus : figure 
{
	rhombus(std::istream& is);
	rhombus(const point& a1, const point& a2, const point& a3, const point& a4);
	
	point center() const override;
	void print(std::ostream& os) const override;
	double area() const override;
private:
	point a1, a2, a3, a4;
};

#endif