#include <iostream>
#include "Shopping_Cart.h"
using namespace std;

int main() {

	Shopping_Cart my_shopping_cart{};

	my_shopping_cart.add_to_shopping_cart("Game", 2, 25.00);
	my_shopping_cart.display_shopping_cart();

	my_shopping_cart.add_to_shopping_cart("Wurst", 1, 3.99);
	my_shopping_cart.display_shopping_cart();


	my_shopping_cart.increment_product_quantity("Wurst");
	my_shopping_cart.increment_product_quantity("Wurst");
	my_shopping_cart.increment_product_quantity("Wurst");
	my_shopping_cart.increment_product_quantity("Wurst");
	my_shopping_cart.increment_product_quantity("Wurst");


	my_shopping_cart.display_shopping_cart();


}