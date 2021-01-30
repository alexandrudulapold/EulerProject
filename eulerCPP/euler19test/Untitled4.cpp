#include <iostream>
using namespace std;

// 	cout<<"anul: "<<year<<endl;
// 	cout<<"luna: "<<month<<" zile: "<<daysmonth(month,year)<<endl;

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
 
 int sundays = 0;
 int s1 = 0;
 
 while(year<2001)
 {
 	int dm = daysmonth(month, year);
	bool x = 0;
	
	while(d < dm)
	{
	 if(d==1) {s1++; x=1;}
	 d+=7; sundays++; 
	}
	d -= dm;
    if(d==1&&x==0) {s1++;}
	if(month < 12) month++;
	else {month = 1; year++;}
	if(year==2001) {sundays--; break;}
	cout<<"year: "<<year<<"\tmonth: "<<month<<"\tday: "<<d<<"\tsunday: "<<sundays<<"\ts1: "<<s1<<endl;
 }
 
return 0;
}
