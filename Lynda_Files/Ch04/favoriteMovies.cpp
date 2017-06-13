#include <iostream>
#include "Movie.h"
using namespace std;

int main()
{
	char moviename[50], movierating[6];
	int year;
	int numMovies;
	cout<<"What is the title: \n";
	cin.getline(moviename,50);
	cout<<"What year was it released? \n";
	cin>>year;
	cin.ignore();
	cout<<"What is the rating (G, PG, PG-13, R, M):\n";
	cin.getline(movierating,6);
	//instantiate the movie object
	Movie movie1(moviename, year, movierating);

	cout<<"\nWhat is the next title: \n";
	cin.getline(moviename,50);
	cout<<"What year was it released? \n";
	cin>>year;
	cin.ignore();
	cout<<"What is the rating (G, PG, PG-13, R, M):\n";
	cin.getline(movierating,6);
	Movie movie2(moviename, year, movierating);

	cout<<"What is the last title: \n";
	cin.getline(moviename,50);
	cout<<"What year was it released? \n";
	cin>>year;
	cin.ignore();
	cout<<"What is the rating (G, PG, PG-13, R, M):\n";
	cin.getline(movierating,6);
	Movie movie3(moviename, year, movierating);


	//print out all movies in the array:
	cout<<"Your top three favorite movies are: \n";
	cout<<"Movie title: "<<movie1.getName();
	cout<<"\nIt was released in: "<<movie1.getYear()<<"\n";
	cout<<"It is rated: "<<movie1.getRating()<<endl<<endl;

	cout<<"Movie title: "<<movie2.getName();
	cout<<"\nIt was released in: "<<movie2.getYear()<<"\n";
	cout<<"It is rated: "<<movie2.getRating()<<endl<<endl;

	cout<<"Movie title: "<<movie3.getName();
	cout<<"\nIt was released in: "<<movie3.getYear()<<"\n";
	cout<<"It is rated: "<<movie3.getRating()<<endl<<endl;

}
