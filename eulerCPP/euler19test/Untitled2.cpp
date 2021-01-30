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
	}
}

int main()
{
 int year = 1901;
 int month = 1; 
 int day = 0;
 
 int sundays = 0;
 
 while(year<2001)
 {
 	int d = day;
 	int dm = daysmonth(month, year);
	while (1) // check-uim luna (cat ziua este mai mica ca zilele din luna)
	{
	// daca ziua + 7 nu va trece peste zilele posibile din luna, duminica++
		if(d+7 < dm) { d+=7; sundays++; }  
	// trecerea la luna urmatoare (si deodata la prima duminica)
		else 
		{
		 day = 7-(dm - d); 
		 sundays++; 
		 if(month < 12) { month++; }
		 else { if(year!=2000) {month=1; year++;} } // daca nu e ultimul an se da la urmatorul an
		 break; 
		} 
		
	}
	cout<<sundays<<endl;
// 	if(month==12) { month=1; year++; }
 }
 
 
 
return 0;
}
