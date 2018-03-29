#pragma once
#include<cmath>


template <typename T>
class vector
{
public:

	T x;
	T y;

	vector operator +(vector rhs)
	{
		
		vector<T> temp;
		temp.x = x + rhs.x;
		temp.y = y + rhs.y;
		return temp;
		
	}

	vector operator -(vector rhs)
	{

		vector<T> temp;
		temp.x = x - rhs.x;
		temp.y = y - rhs.y;
		return temp;

	}
	vector operator *(int rhs)
	{

		vector<T> temp;
		temp.x = x * rhs;
		temp.y = y * rhs;
		return temp;

	}
	

	float Length(vector Vec)
	{
		float x = Vec.x;
		float y = Vec.y;
		float sf = ((x*x) + (y*y));
		return sqrt(sf);
	}

private:





public:



	typedef vector<int> vector;
	typedef vector<float> Fvector;
};