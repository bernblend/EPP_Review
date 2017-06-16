/*
	sbChampsSolo.cpp
	June 15, 2017
	bernblend
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>  //read, write and create file.
#include <ctime>
using namespace std;


string getSbChamp(int sbnum)
{
  switch (sbnum) {
    case: 1	cout <<	"	I	\nDate:\n	Jan. 15, 1967	  \nLocation:\n	Los Angeles Memorial Coliseum	\nFinal Score:\n	Green Bay 35, Kansas City 10	"	<< endl;
    case: 2	cout <<	"	II	\nDate:\n	Jan. 14, 1968	\nLocation:\n	Orange Bowl (Miami)	\nFinal Score:\n	Green Bay 33, Oakland 14	"	<< endl;
    case: 3	cout <<	"	III	\nDate:\n	Jan. 12, 1969	\nLocation:\n	Orange Bowl (Miami)	\nFinal Score:\n	New York Jets 16, Baltimore 7	"	<< endl;
    case: 4	cout <<	"	IV	\nDate:\n	Jan. 11, 1970	\nLocation:\n	Tulane Stadium (New Orleans)	\nFinal Score:\n	Kansas City 23, Minnesota 7	"	<< endl;
    case: 5	cout <<	"	V	\nDate:\n	Jan. 17, 1971	\nLocation:\n	Orange Bowl (Miami)	\nFinal Score:\n	Baltimore 16, Dallas 13	"	<< endl;
    case: 6	cout <<	"	VI	\nDate:\n	Jan. 16, 1972	\nLocation:\n	Tulane Stadium (New Orleans)	\nFinal Score:\n	Dallas 24, Miami 3	"	<< endl;
    case: 7	cout <<	"	VII	\nDate:\n	Jan. 14, 1973	\nLocation:\n	Los Angeles Memorial Coliseum	\nFinal Score:\n	Miami 14, Washington 7	"	<< endl;
    case: 8	cout <<	"	VIII	\nDate:\n	Jan. 13, 1974	\nLocation:\n	Rice Stadium (Houston)	\nFinal Score:\n	Miami 24, Minnesota 7	"	<< endl;
    case: 9	cout <<	"	IX	\nDate:\n	Jan. 12, 1975	\nLocation:\n	Tulane Stadium (New Orleans)	\nFinal Score:\n	Pittsburgh 16, Minnesota 6	"	<< endl;
    case: 10	cout <<	"	X	\nDate:\n	Jan. 18, 1976	\nLocation:\n	Orange Bowl (Miami)	\nFinal Score:\n	Pittsburgh 21, Dallas 17	"	<< endl;
    case: 11	cout <<	"	XI	\nDate:\n	Jan. 9, 1977	\nLocation:\n	Rose Bowl (Pasadena, Calif.)	\nFinal Score:\n	Oakland 32, Minnesota 14	"	<< endl;
    case: 12	cout <<	"	XII	\nDate:\n	Jan. 15, 1978	\nLocation:\n	Superdome (New Orleans)	\nFinal Score:\n	Dallas 27, Denver 10	"	<< endl;
    case: 13	cout <<	"	XIII	\nDate:\n	Jan. 21, 1979	\nLocation:\n	Orange Bowl (Miami)	\nFinal Score:\n	Pittsburgh 35, Dallas 31	"	<< endl;
    case: 14	cout <<	"	XIV	\nDate:\n	Jan. 20, 1980	\nLocation:\n	Rose Bowl (Pasadena, Calif.)	\nFinal Score:\n	Pittsburgh 31, Los Angeles 19	"	<< endl;
    case: 15	cout <<	"	XV	\nDate:\n	Jan. 25, 1981	\nLocation:\n	Superdome (New Orleans)	\nFinal Score:\n	Oakland 27, Philadelphia 10	"	<< endl;
    case: 16	cout <<	"	XVI	\nDate:\n	Jan. 24, 1982	\nLocation:\n	Silverdome (Pontiac, Mich.)	\nFinal Score:\n	San Francisco 26, Cincinnati 21	"	<< endl;
    case: 17	cout <<	"	XVII	\nDate:\n	Jan. 30, 1983	\nLocation:\n	Rose Bowl (Pasadena, Calif.)	\nFinal Score:\n	Washington 27, Miami 17	"	<< endl;
    case: 18	cout <<	"	XVIII	\nDate:\n	Jan. 22, 1984	\nLocation:\n	Tampa (Fla.) Stadium	\nFinal Score:\n	Los Angeles 38, Washington 9	"	<< endl;
    case: 19	cout <<	"	XIX	\nDate:\n	Jan. 20, 1985	\nLocation:\n	Stanford (Calif.) Stadium	\nFinal Score:\n	San Francisco 38, Miami 16	"	<< endl;
    case: 20	cout <<	"	XX	\nDate:\n	Jan. 26, 1986	\nLocation:\n	Superdome (New Orleans)	\nFinal Score:\n	Chicago 46, New England 10	"	<< endl;
    case: 21	cout <<	"	XXI	\nDate:\n	Jan. 25, 1987	\nLocation:\n	Rose Bowl (Pasadena, Calif.)	\nFinal Score:\n	New York Giants 39, Denver 20	"	<< endl;
    case: 22	cout <<	"	XXII	\nDate:\n	Jan. 31, 1988	\nLocation:\n	Jack Murphy Stadium (San Diego)	\nFinal Score:\n	Washington 42, Denver 10	"	<< endl;
    case: 23	cout <<	"	XXIII	\nDate:\n	Jan. 22, 1989	\nLocation:\n	Joe Robbie Stadium (Miami)	\nFinal Score:\n	San Francisco 20, Cincinnati 16	"	<< endl;
    case: 24	cout <<	"	XXIV	\nDate:\n	Jan. 28, 1990	\nLocation:\n	Superdome (New Orleans)	\nFinal Score:\n	San Francisco 55, Denver 10	"	<< endl;
    case: 25	cout <<	"	XXV	\nDate:\n	Jan. 27, 1991	\nLocation:\n	Tampa (Fla.) Stadium	\nFinal Score:\n	New York Giants 20, Buffalo 19	"	<< endl;
    case: 26	cout <<	"	XXVI	\nDate:\n	Jan. 26, 1992	\nLocation:\n	Metrodome (Minneapolis)	\nFinal Score:\n	Washington 37, Buffalo 24	"	<< endl;
    case: 27	cout <<	"	XXVII	\nDate:\n	Jan. 31, 1993	\nLocation:\n	Rose Bowl (Pasadena, Calif.)	\nFinal Score:\n	Dallas 52, Buffalo 17	"	<< endl;
    case: 28	cout <<	"	XXVIII	\nDate:\n	Jan. 30, 1994	\nLocation:\n	Georgia Dome (Atlanta)	\nFinal Score:\n	Dallas 30, Buffalo 13	"	<< endl;
    case: 29	cout <<	"	XXIX	\nDate:\n	Jan. 29, 1995	\nLocation:\n	Joe Robbie Stadium (Miami)	\nFinal Score:\n	San Francisco 49, San Diego 26	"	<< endl;
    case: 30	cout <<	"	XXX	\nDate:\n	Jan. 28, 1996	\nLocation:\n	Sun Devil Stadium (Tempe, Ariz.)	\nFinal Score:\n	Dallas 27, Pittsburgh 17	"	<< endl;
    case: 31	cout <<	"	XXXI	\nDate:\n	Jan. 26, 1997	\nLocation:\n	Superdome (New Orleans)	\nFinal Score:\n	Green Bay 35, New England 21	"	<< endl;
    case: 32	cout <<	"	XXXII	\nDate:\n	Jan. 25, 1998	\nLocation:\n	Qualcomm Stadium (San Diego)	\nFinal Score:\n	Denver 31, Green Bay 24	"	<< endl;
    case: 33	cout <<	"	XXXIII	\nDate:\n	Jan. 31, 1999	\nLocation:\n	Pro Player Stadium (Miami)	\nFinal Score:\n	Denver 34, Atlanta 19	"	<< endl;
    case: 34	cout <<	"	XXXIV	\nDate:\n	Jan. 30, 2000	\nLocation:\n	Georgia Dome (Atlanta)	\nFinal Score:\n	St. Louis 23, Tennessee 16	"	<< endl;
    case: 35	cout <<	"	XXXV	\nDate:\n	Jan. 28, 2001	\nLocation:\n	Raymond James Stadium (Tampa, Fla.)	\nFinal Score:\n	Baltimore 34, New York Giants 7	"	<< endl;
    case: 36	cout <<	"	XXXVI	\nDate:\n	Feb. 3, 2002	\nLocation:\n	Superdome (New Orleans)	\nFinal Score:\n	New England 20, St. Louis 17	"	<< endl;
    case: 37	cout <<	"	XXXVII	\nDate:\n	Jan. 26, 2003	\nLocation:\n	Qualcomm Stadium (San Diego)	\nFinal Score:\n	Tampa Bay 48, Oakland 21	"	<< endl;
    case: 38	cout <<	"	XXXVIII	\nDate:\n	Feb. 1, 2004	\nLocation:\n	Reliant Stadium (Houston)	\nFinal Score:\n	New England 32, Carolina 29	"	<< endl;
    case: 39	cout <<	"	XXXIX	\nDate:\n	Feb. 6, 2005	\nLocation:\n	Alltel Stadium (Jacksonville, Fla.)	\nFinal Score:\n	New England 24, Philadelphia 21	"	<< endl;
    case: 40	cout <<	"	XL	\nDate:\n	Feb. 5, 2006	\nLocation:\n	Ford Field (Detroit)	\nFinal Score:\n	Pittsburgh 21, Seattle 10	"	<< endl;
    case: 41	cout <<	"	XLI	\nDate:\n	Feb. 4, 2007	\nLocation:\n	Dolphin Stadium (Miami)	\nFinal Score:\n	Indianapolis 29, Chicago 17	"	<< endl;
    case: 42	cout <<	"	XLII	\nDate:\n	Feb. 3, 2008	\nLocation:\n	University of Phoenix Stadium (Glendale, Ariz.)	\nFinal Score:\n	New York Giants 17, New England 14	"	<< endl;
    case: 43	cout <<	"	XLIII	\nDate:\n	Feb. 1, 2009	\nLocation:\n	Raymond James Stadium (Tampa, Fla.)	\nFinal Score:\n	Pittsburgh Steelers 27, Arizona Cardinals 23	"	<< endl;
    case: 44	cout <<	"	XLIV	\nDate:\n	Feb. 7, 2010	\nLocation:\n	Sun Life Stadium (Miami)	\nFinal Score:\n	New Orleans Saints 31, Indianapolis Colts 17	"	<< endl;
    case: 45	cout <<	"	XLV	\nDate:\n	Feb. 6, 2011	\nLocation:\n	Cowboys Stadium (Arlington, Texas)	\nFinal Score:\n	Green Bay Packers 31, Pittsburgh Steelers 25	"	<< endl;
    case: 46	cout <<	"	XLVI	\nDate:\n	Feb. 5, 2012	\nLocation:\n	Lucas Oil Stadium (Indianapolis)	\nFinal Score:\n	New York Giants 21, New England Patriots 17	"	<< endl;
    case: 47	cout <<	"	XLVII	\nDate:\n	Feb. 3, 2013	\nLocation:\n	Mercedes-Benz Superdome (New Orleans)	\nFinal Score:\n	Baltimore Ravens 34, San Francisco 49ers 31	"	<< endl;
    case: 48	cout <<	"	XLVIII	\nDate:\n	Feb. 2, 2014	\nLocation:\n	MetLife Stadium (East Rutherford, N.J.)	\nFinal Score:\n	Seattle Seahawks 43, Denver Broncos 8	"	<< endl;
    case: 49	cout <<	"	XLIX	\nDate:\n	Feb. 1, 2015	\nLocation:\n	University of Phoenix Stadium (Glendale, Ariz.)	\nFinal Score:\n	New England Patriots 28, Seattle Seahawks 24	"	<< endl;
    case: 50	cout <<	"	L	\nDate:\n	Feb. 7, 2016	\nLocation:\n	Levi's Stadium (Santa Clara, Calif.)	\nFinal Score:\n	Denver Broncos 24, Carolina Panthers 10	"	<< endl;
    case: 51	cout <<	"	LI	\nDate:\n	Feb. 5, 2017	\nLocation:\n	NRG Stadium (Houston)	\nFinal Score:\n	New England Patriots 34, Atlanta Falcons 28	"	<< endl;
  }

}


int main()
{
  int sbnum;

  while (sbnum != 0) {
    cout << "What Super Bowl would you like to review? (1 to 51).\nEnter 0 to end program." << endl;
    cin >> sbnum;
    getSbChamp(sbnum);
  }

  return 0;


}
