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
    case 1:	cout <<	"	\nSuper Bowl: 1	\nDate:	Jan. 15, 1967	\nLocation:	Los Angeles Memorial Coliseum	\nFinal Score:	Green Bay 35, Kansas City 10	\n\n"	<< endl;	break;
    case 2:	cout <<	"	\nSuper Bowl: 2	\nDate:	Jan. 14, 1968	\nLocation:	Orange Bowl (Miami)	\nFinal Score:	Green Bay 33, Oakland 14	\n\n"	<< endl;	break;
    case 3:	cout <<	"	\nSuper Bowl: 3	\nDate:	Jan. 12, 1969	\nLocation:	Orange Bowl (Miami)	\nFinal Score:	New York Jets 16, Baltimore 7	\n\n"	<< endl;	break;
    case 4:	cout <<	"	\nSuper Bowl: 4	\nDate:	Jan. 11, 1970	\nLocation:	Tulane Stadium (New Orleans)	\nFinal Score:	Kansas City 23, Minnesota 7	\n\n"	<< endl;	break;
    case 5:	cout <<	"	\nSuper Bowl: 5	\nDate:	Jan. 17, 1971	\nLocation:	Orange Bowl (Miami)	\nFinal Score:	Baltimore 16, Dallas 13	\n\n"	<< endl;	break;
    case 6:	cout <<	"	\nSuper Bowl: 6	\nDate:	Jan. 16, 1972	\nLocation:	Tulane Stadium (New Orleans)	\nFinal Score:	Dallas 24, Miami 3	\n\n"	<< endl;	break;
    case 7:	cout <<	"	\nSuper Bowl: 7	\nDate:	Jan. 14, 1973	\nLocation:	Los Angeles Memorial Coliseum	\nFinal Score:	Miami 14, Washington 7	\n\n"	<< endl;	break;
    case 8:	cout <<	"	\nSuper Bowl: 8	\nDate:	Jan. 13, 1974	\nLocation:	Rice Stadium (Houston)	\nFinal Score:	Miami 24, Minnesota 7	\n\n"	<< endl;	break;
    case 9:	cout <<	"	\nSuper Bowl: 9	\nDate:	Jan. 12, 1975	\nLocation:	Tulane Stadium (New Orleans)	\nFinal Score:	Pittsburgh 16, Minnesota 6	\n\n"	<< endl;	break;
    case 10:	cout <<	"	\nSuper Bowl: 10	\nDate:	Jan. 18, 1976	\nLocation:	Orange Bowl (Miami)	\nFinal Score:	Pittsburgh 21, Dallas 17	\n\n"	<< endl;	break;
    case 11:	cout <<	"	\nSuper Bowl: 11	\nDate:	Jan. 9, 1977	\nLocation:	Rose Bowl (Pasadena, Calif.)	\nFinal Score:	Oakland 32, Minnesota 14	\n\n"	<< endl;	break;
    case 12:	cout <<	"	\nSuper Bowl: 12	\nDate:	Jan. 15, 1978	\nLocation:	Superdome (New Orleans)	\nFinal Score:	Dallas 27, Denver 10	\n\n"	<< endl;	break;
    case 13:	cout <<	"	\nSuper Bowl: 13	\nDate:	Jan. 21, 1979	\nLocation:	Orange Bowl (Miami)	\nFinal Score:	Pittsburgh 35, Dallas 31	\n\n"	<< endl;	break;
    case 14:	cout <<	"	\nSuper Bowl: 14	\nDate:	Jan. 20, 1980	\nLocation:	Rose Bowl (Pasadena, Calif.)	\nFinal Score:	Pittsburgh 31, Los Angeles 19	\n\n"	<< endl;	break;
    case 15:	cout <<	"	\nSuper Bowl: 15	\nDate:	Jan. 25, 1981	\nLocation:	Superdome (New Orleans)	\nFinal Score:	Oakland 27, Philadelphia 10	\n\n"	<< endl;	break;
    case 16:	cout <<	"	\nSuper Bowl: 16	\nDate:	Jan. 24, 1982	\nLocation:	Silverdome (Pontiac, Mich.)	\nFinal Score:	San Francisco 26, Cincinnati 21	\n\n"	<< endl;	break;
    case 17:	cout <<	"	\nSuper Bowl: 17	\nDate:	Jan. 30, 1983	\nLocation:	Rose Bowl (Pasadena, Calif.)	\nFinal Score:	Washington 27, Miami 17	\n\n"	<< endl;	break;
    case 18:	cout <<	"	\nSuper Bowl: 18	\nDate:	Jan. 22, 1984	\nLocation:	Tampa (Fla.) Stadium	\nFinal Score:	Los Angeles 38, Washington 9	\n\n"	<< endl;	break;
    case 19:	cout <<	"	\nSuper Bowl: 19	\nDate:	Jan. 20, 1985	\nLocation:	Stanford (Calif.) Stadium	\nFinal Score:	San Francisco 38, Miami 16	\n\n"	<< endl;	break;
    case 20:	cout <<	"	\nSuper Bowl: 20	\nDate:	Jan. 26, 1986	\nLocation:	Superdome (New Orleans)	\nFinal Score:	Chicago 46, New England 10	\n\n"	<< endl;	break;
    case 21:	cout <<	"	\nSuper Bowl: 21	\nDate:	Jan. 25, 1987	\nLocation:	Rose Bowl (Pasadena, Calif.)	\nFinal Score:	New York Giants 39, Denver 20	\n\n"	<< endl;	break;
    case 22:	cout <<	"	\nSuper Bowl: 22	\nDate:	Jan. 31, 1988	\nLocation:	Jack Murphy Stadium (San Diego)	\nFinal Score:	Washington 42, Denver 10	\n\n"	<< endl;	break;
    case 23:	cout <<	"	\nSuper Bowl: 23	\nDate:	Jan. 22, 1989	\nLocation:	Joe Robbie Stadium (Miami)	\nFinal Score:	San Francisco 20, Cincinnati 16	\n\n"	<< endl;	break;
    case 24:	cout <<	"	\nSuper Bowl: 24	\nDate:	Jan. 28, 1990	\nLocation:	Superdome (New Orleans)	\nFinal Score:	San Francisco 55, Denver 10	\n\n"	<< endl;	break;
    case 25:	cout <<	"	\nSuper Bowl: 25	\nDate:	Jan. 27, 1991	\nLocation:	Tampa (Fla.) Stadium	\nFinal Score:	New York Giants 20, Buffalo 19	\n\n"	<< endl;	break;
    case 26:	cout <<	"	\nSuper Bowl: 26	\nDate:	Jan. 26, 1992	\nLocation:	Metrodome (Minneapolis)	\nFinal Score:	Washington 37, Buffalo 24	\n\n"	<< endl;	break;
    case 27:	cout <<	"	\nSuper Bowl: 27	\nDate:	Jan. 31, 1993	\nLocation:	Rose Bowl (Pasadena, Calif.)	\nFinal Score:	Dallas 52, Buffalo 17	\n\n"	<< endl;	break;
    case 28:	cout <<	"	\nSuper Bowl: 28	\nDate:	Jan. 30, 1994	\nLocation:	Georgia Dome (Atlanta)	\nFinal Score:	Dallas 30, Buffalo 13	\n\n"	<< endl;	break;
    case 29:	cout <<	"	\nSuper Bowl: 29	\nDate:	Jan. 29, 1995	\nLocation:	Joe Robbie Stadium (Miami)	\nFinal Score:	San Francisco 49, San Diego 26	\n\n"	<< endl;	break;
    case 30:	cout <<	"	\nSuper Bowl: 30	\nDate:	Jan. 28, 1996	\nLocation:	Sun Devil Stadium (Tempe, Ariz.)	\nFinal Score:	Dallas 27, Pittsburgh 17	\n\n"	<< endl;	break;
    case 31:	cout <<	"	\nSuper Bowl: 31	\nDate:	Jan. 26, 1997	\nLocation:	Superdome (New Orleans)	\nFinal Score:	Green Bay 35, New England 21	\n\n"	<< endl;	break;
    case 32:	cout <<	"	\nSuper Bowl: 32	\nDate:	Jan. 25, 1998	\nLocation:	Qualcomm Stadium (San Diego)	\nFinal Score:	Denver 31, Green Bay 24	\n\n"	<< endl;	break;
    case 33:	cout <<	"	\nSuper Bowl: 33	\nDate:	Jan. 31, 1999	\nLocation:	Pro Player Stadium (Miami)	\nFinal Score:	Denver 34, Atlanta 19	\n\n"	<< endl;	break;
    case 34:	cout <<	"	\nSuper Bowl: 34	\nDate:	Jan. 30, 2000	\nLocation:	Georgia Dome (Atlanta)	\nFinal Score:	St. Louis 23, Tennessee 16	\n\n"	<< endl;	break;
    case 35:	cout <<	"	\nSuper Bowl: 35	\nDate:	Jan. 28, 2001	\nLocation:	Raymond James Stadium (Tampa, Fla.)	\nFinal Score:	Baltimore 34, New York Giants 7	\n\n"	<< endl;	break;
    case 36:	cout <<	"	\nSuper Bowl: 36	\nDate:	Feb. 3, 2002	\nLocation:	Superdome (New Orleans)	\nFinal Score:	New England 20, St. Louis 17	\n\n"	<< endl;	break;
    case 37:	cout <<	"	\nSuper Bowl: 37	\nDate:	Jan. 26, 2003	\nLocation:	Qualcomm Stadium (San Diego)	\nFinal Score:	Tampa Bay 48, Oakland 21	\n\n"	<< endl;	break;
    case 38:	cout <<	"	\nSuper Bowl: 38	\nDate:	Feb. 1, 2004	\nLocation:	Reliant Stadium (Houston)	\nFinal Score:	New England 32, Carolina 29	\n\n"	<< endl;	break;
    case 39:	cout <<	"	\nSuper Bowl: 39	\nDate:	Feb. 6, 2005	\nLocation:	Alltel Stadium (Jacksonville, Fla.)	\nFinal Score:	New England 24, Philadelphia 21	\n\n"	<< endl;	break;
    case 40:	cout <<	"	\nSuper Bowl: 40	\nDate:	Feb. 5, 2006	\nLocation:	Ford Field (Detroit)	\nFinal Score:	Pittsburgh 21, Seattle 10	\n\n"	<< endl;	break;
    case 41:	cout <<	"	\nSuper Bowl: 41	\nDate:	Feb. 4, 2007	\nLocation:	Dolphin Stadium (Miami)	\nFinal Score:	Indianapolis 29, Chicago 17	\n\n"	<< endl;	break;
    case 42:	cout <<	"	\nSuper Bowl: 42	\nDate:	Feb. 3, 2008	\nLocation:	University of Phoenix Stadium (Glendale, Ariz.)	\nFinal Score:	New York Giants 17, New England 14	\n\n"	<< endl;	break;
    case 43:	cout <<	"	\nSuper Bowl: 43	\nDate:	Feb. 1, 2009	\nLocation:	Raymond James Stadium (Tampa, Fla.)	\nFinal Score:	Pittsburgh Steelers 27, Arizona Cardinals 23	\n\n"	<< endl;	break;
    case 44:	cout <<	"	\nSuper Bowl: 44	\nDate:	Feb. 7, 2010	\nLocation:	Sun Life Stadium (Miami)	\nFinal Score:	New Orleans Saints 31, Indianapolis Colts 17	\n\n"	<< endl;	break;
    case 45:	cout <<	"	\nSuper Bowl: 45	\nDate:	Feb. 6, 2011	\nLocation:	Cowboys Stadium (Arlington, Texas)	\nFinal Score:	Green Bay Packers 31, Pittsburgh Steelers 25	\n\n"	<< endl;	break;
    case 46:	cout <<	"	\nSuper Bowl: 46	\nDate:	Feb. 5, 2012	\nLocation:	Lucas Oil Stadium (Indianapolis)	\nFinal Score:	New York Giants 21, New England Patriots 17	\n\n"	<< endl;	break;
    case 47:	cout <<	"	\nSuper Bowl: 47	\nDate:	Feb. 3, 2013	\nLocation:	Mercedes-Benz Superdome (New Orleans)	\nFinal Score:	Baltimore Ravens 34, San Francisco 49ers 31	\n\n"	<< endl;	break;
    case 48:	cout <<	"	\nSuper Bowl: 48	\nDate:	Feb. 2, 2014	\nLocation:	MetLife Stadium (East Rutherford, N.J.)	\nFinal Score:	Seattle Seahawks 43, Denver Broncos 8	\n\n"	<< endl;	break;
    case 49:	cout <<	"	\nSuper Bowl: 49	\nDate:	Feb. 1, 2015	\nLocation:	University of Phoenix Stadium (Glendale, Ariz.)	\nFinal Score:	New England Patriots 28, Seattle Seahawks 24	\n\n"	<< endl;	break;
    case 50:	cout <<	"	\nSuper Bowl: 50	\nDate:	Feb. 7, 2016	\nLocation:	Levi's Stadium (Santa Clara, Calif.)	\nFinal Score:	Denver Broncos 24, Carolina Panthers 10	\n\n"	<< endl;	break;
    case 51:	cout <<	"	\nSuper Bowl: 51	\nDate:	Feb. 5, 2017	\nLocation:	NRG Stadium (Houston)	\nFinal Score:	New England Patriots 34, Atlanta Falcons 28	\n\n"	<< endl;	break;
  }

}


int main()
{
  int sbnum;

  do {
    cout << "What Super Bowl would you like to review? (1 to 51).\nEnter 0 to end program." << endl;
    cin >> sbnum;
    getSbChamp(sbnum);
  } while(sbnum != 0);

  cout << "\n\nSee ya Later!\n\nMy favorite team: Steelers!\nLeave your favorite team (whatever sport) in the comments.\n\n-bern\n\n" << endl;

  return 0;


}
