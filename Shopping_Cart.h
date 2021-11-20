#ifndef __SHOPPIN_CART_H__
#define __SHOPPIN_CART_H__

#include <vector>
#include <string>
#include "Product.h"

class Shopping_Cart {
private:
	std::vector<Product> shopping_cart;

public:
	// Constructor
	Shopping_Cart();

	// Destructor
	~Shopping_Cart();

	// display
	void display_shopping_cart();

	// modifiers
	bool add_to_shopping_cart(std::string product_name, int quantity, double price);
	bool increment_product_quantity(std::string product_name);
	bool decrement_product_quantity(std::string product_name);
	bool remove_product(std::string product_name);
};

#endif