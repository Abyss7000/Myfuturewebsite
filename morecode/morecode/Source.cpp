#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime> 
#include <stdio.h>
using namespace std;
int main() {
	//added this on github
	//deleted first program on desktop
	//works fine onto commit
	int a, b;
	a = 1000;
	b = 9999;
	srand(time(NULL));
	int rand_number = rand() % (b - a + 1) + a;
	cout << rand_number << endl;
	//random number generation


	int digit, n, rev = 0;
	n = rand_number;
	int o, t, h, th, o_o, o_t, o_h, o_th;
	double rez, sum_odd;
	o = rand_number % 10;
	t = (rand_number / 10) % 10;
	h = (rand_number / 100) % 10;
	th = (rand_number / 1000) % 10;
	//number divided into units



	if (o % 2 != 0)
		o_o = o;
	else o_o = 0;
	if (t % 2 != 0)
		o_t = t;
	else o_t = 0;
	if (h % 2 != 0)
		o_h = h;
	else o_h = 0;
	if (th % 2 != 0)
		o_th = th;
	else o_th = 0;
	//same unit division used to determine odds


	sum_odd = (o_o + o_t + o_h + o_th);
	rez = (o + t + h + th) / 4;
	//sum and average of odd units and units as a whole
	cout << "average of the number's units = " << rez << endl;
	cout << "the sum of the odd units of the number is: " << sum_odd << endl;



	int ab, cd, k;
	ab = rand_number / 100;
	cd = rand_number % 100;
	k = rand_number % 10;
	cout << ab << "   rubley	";
	switch (k) {
	case 1: cout << cd << "	kopejka" << endl;
		break;
	case 2: cout << cd << "	kopejki" << endl;
		break;
	case 3: cout << cd << "	kopejki" << endl;
		break;
	case 4: cout << cd << "	kopejki" << endl;
		break;
	case 5: cout << cd << "	kopeek" << endl;
		break;
	case 6: cout << cd << "	kopeek" << endl;
		break;
	case 7: cout << cd << "	kopeek" << endl;
		break;
	case 8: cout << cd << "	kopeek" << endl;
		break;
	case 9: cout << cd << "	kopeek" << endl;
		break;
	case 0: cout << cd << "	kopeek" << endl;
		break;
	}
	//rubel and kopeek endings output
	
	
	
	int lcm;
	if (ab > cd)
		lcm = a;
	else
		lcm = b;
	while (1) {
		if (lcm % a == 0 && lcm % b == 0)
		{
		cout << "The LCM is" << lcm << endl;
		break;
	}
	lcm++;
}
	//weird, supposed to put out lcm but for some reason doesn't
	
	
	
	do {
		digit = rand_number % 10;
		rev = (rev * 10) + digit;
		rand_number = rand_number / 10;
	} while (rand_number != 0); {
		cout << "reverse =  " << rev << endl;
		if (n == rev)
			cout << "Number is palindrome" << endl;
		else
			cout << "the number isn't a palindrome" << endl;
	}
	return 0;
}

//я сделал все в обратном порядке но если посмотреть комиты то видно что я и на десктопе и в самом гите сумел сделать изминения. Вывод: очень классно и супер полезно иметь
//спасибо!
