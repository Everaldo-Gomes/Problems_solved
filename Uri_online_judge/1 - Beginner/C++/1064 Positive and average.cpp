#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

  int hour1, minute1, second1, day1, day2, hour2, minute2, second2;
  char day1Name[4], day2Name[4], points[3];

  hour1 = minute1 = second1 = day1 = day2 = hour2 = minute2 = second2 = 0;

  //=================== FIRST DAY ==========================
  // cin.getline(day,4); // take all characters with spaces

  fgets(day1Name,4,stdin); //put the name "day" on the scream
  //cin.get(day1Name,4);//take all characters without spaces

  cin >> day1 >> hour1; // set the start day and start hour

  fgets(points,3,stdin);//put the ":" on the scream
  //cin.get(points,3);

  cin >> minute1; // set the start minute

  fgets(points,3,stdin); //put the ":" on the scream
  //cin.get(points,3);

  cin >> second1;//set the start second

  //==================== FINAL DAY ===========================

  fgets(day2Name,4,stdin); // set the end day and start hour
  //cin.getline(day2Name,4);

  fgets(day2Name,4,stdin);
  //cin.get(day2Name,4);

  cin >> day2 >> hour2; // set the final day and final hour

  fgets(points,3,stdin); //put the ":" on the scream
  //cin.get(points,3);

  cin >> minute2; // set the end minute

  fgets(points,3,stdin); //put the ":" on the scream
  //cin.get(points,3);

  cin >> second2; //set the final second

  //============= CALCULATING THE TIME =========================
  //THE TIME IS CONVERTED IN SECONDS

  int final_day, final_hour, final_minute, final_second, time;
  time = (day2 * 86400 + hour2 * 3600 + minute2 * 60 + second2) - (day1 * 86400 + hour1 * 3600 + minute1 * 60 + second1);

  final_day = time / 86400;
  final_hour = (time % 86400) / 3600;
  final_minute = ((time % 86400) % 3600) / 60;
  final_second = ((time % 86400) % 3600) % 60;

  cout << final_day << " dia(s)\n";
  cout << final_hour << " hora(s)\n";
  cout << final_minute << " minuto(s)\n";
  cout << final_second << " segundo(s)\n";

  return 0;
}
