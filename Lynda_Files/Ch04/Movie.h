/*
	Movie.h
  June 25, 2017
	bernblend

	This is the header file.
*/

#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
using namespace std;

class Movie {
private:
	string movieName;
	int year;
	string rating;

public:
	Movie();
	Movie(string, int, string);

	~Movie();

	void setName(string);
	string getName();
	void setYear(int);
	int getYear();
	void setRating(string);
	string getRating();
};

#endif /* MOVIE_H_ */
