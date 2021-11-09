#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double r,h,Area,Volume;
	double p=3.141592;
	cout <<"WELCOME! THIS IS A PROGRAM TO CALCULATE THE AREA AND THE VOLUME OF ANY CYLINDER\n";
	cout<<"PLEASE ENTER THE THE HEIGHT\n";
	cin>>h;
	cout << "PLEASE ENTER THE REDIUS\n";
	cin>>r;
	Area=2*p*r*h+2*p*r*r;
	Volume=p*r*r*h;
	cout <<"Area of the cylinder=" << Area <<"\n";
	cout <<"Volume of the cylinder=" <<Volume <<"\n";
	
	return 0;
}
