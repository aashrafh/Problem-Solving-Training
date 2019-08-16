#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<deque>
#include <bitset>
#include <cstdio>
#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
#define Endl "\n"
#define LL long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int main()
{
  init();
  double cows, cars, shows;
  while(cin>>cows>>cars>>shows)
  {
    double c1 = (cows/(cows+cars))*(cars/(cows+cars-shows-1));
    double c2 = (cars/(cows+cars))*((cars-1)/(cows+cars-shows-1));
    double ans = c1 + c2;
    cout<<setprecision(5)<<fixed<<ans<<Endl;
  }
  //system("PAUSE");
  return 0;
}
