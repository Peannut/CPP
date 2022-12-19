#ifndef FIXED_CPP
#define FIXED_CPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _raw;
		static const int _bits;
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed& obj);
		Fixed& operator=(const Fixed& obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator>(const Fixed& obj) const;
		bool operator<(const Fixed& obj) const;
		bool operator>=(const Fixed& obj) const;
		bool operator<=(const Fixed& obj) const;
		bool  operator==(const Fixed& obj) const;
		bool operator!=(const Fixed& obj) const;
		Fixed operator+(const Fixed& obj) const;
		Fixed operator-(const Fixed& obj) const;
		Fixed operator*(const Fixed& obj) const;
		Fixed operator/(const Fixed& obj) const;
		Fixed& operator++();
		const Fixed operator++( int );
		Fixed& operator--();
		const Fixed operator--( int );
		static const Fixed& max(const Fixed& obj1, const Fixed& obj2);
		static Fixed& max(Fixed& obj1, Fixed& obj2);
		static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
		static Fixed& min(Fixed& obj1, Fixed& obj2);
		~Fixed();
};

std::ostream& operator<<(std ::ostream &o, Fixed const & rhs);
#endif