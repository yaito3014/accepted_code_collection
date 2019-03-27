// URL: https://atcoder.jp/contests/abc001/submissions/4728935
// Date: Wed, 27 Mar 2019 06:55:31 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include<cmath>

int main(){
	char dir[16][4] = {
		"N","NNE","NE","ENE",
		"E","ESE","SE","SSE",
		"S","SSW","SW","WSW",
		"W","WNW","NW","NNW"
	};
	int w[12] = { 2,15,33,54,79,107,138,171,207,244,284,326 };
	int Dig, Dis;
	std::cin >> Dig >> Dis;
	int speed = round(Dis/60.f*10);
	int W = 12;
	for(int i = 0;i<12;++i){
		if(speed<=w[i]){
			W=i;
			break;
		}
	}
	printf("%s %d
",W?dir[(Dig*10+1125)*16/36000%16]:"C",W);
}
