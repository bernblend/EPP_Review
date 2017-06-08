/*
  prob1.cpp
  June 7, 2017
  bernblend
*/
#include <iostream>
#include <iomanip>
using namespace std;
int findAverageScore(int ss[],int nn)
{
  int a=0, b=ss[0], sc=0, i;
  for(int i=0; i<nn; i++)
  {
    if(ss[i] >= a)
      a = ss[i];
    if(ss[i] <= b)
    {
      b = ss[i];
      sc = sc + ss[i];
    }
  }
  sc = sc - a - b;
  sc = sc / (nn-2);
  return sc;
}
int main()
{
  int n;
  int max = 0;
  int con;
  int cn;
  int i;
  cout << "Enter the number of judges: "<< endl;
  cin >> n;
  int s[n];
  while(true){
  cout << "Contestant Number: " << endl;
  cin >> cn;
  if(cn > 0)
  {
    cout << "Contestant Scores: " << endl;
    for(i=0; i<n; i++)
    cin >> s[i];
    int score = findAverageScore(s,n);
    cout << "Contestant " << cn << " " << score << endl;
    if(score>max)
    {
      max = score;
      con = cn;
    }
  }
    else
    {
      cout << "Contestant " << con << " has the highest score." << endl;
      break;
    }
  }
  return 0;
}
