#include "Market.h"
#include <iostream>

int main() {
	Market Market;
	Wallet test = Market.get_wallet("init_user");
	test.print_wallet(test);
	std::cout << test.contains_currency("BTC", 10) << "\n";
	test.deposit("USDT", 10);
	test.deposit("BTC", 10);
	test.print_wallet(test);
	test.withdarw("BTC", 10);
	test.print_wallet(test);
	return 0;
}
