#include <iostream>
using namespace std;

int daysmonth(int month, int year)
{
	switch(month)
	{
		case 1: { return 31; } break;
		case 2: { return (year%4!=0 ? 28 : 29); } break;
		case 3: { return 31; } break;
		case 4: { return 30; } break;
		case 5: { return 31; } break;
		case 6: { return 30; } break;
		case 7: { return 31; } break;
		case 8: { return 31; } break;
		case 9: { return 30; } break;
		case 10: { return 31; } break;
		case 11: { return 30; } break;
		case 12: { return 31; } break;
		default: { return 31; } break;
	}
}

int main()
{
 int year = 1901;
 int month = 1; 
 int d = 0;
 
 int sundays = 1;
 
 while(year<2001)
 {
 	d+=daysmonth(month,year);
 	if(month<12) month++;
 	else { year++; month=1; }
 	
 	if(d%7==0) sundays++;
 }
 cout<<"sundays: "<<sundays<<endl;
return 0;
}
