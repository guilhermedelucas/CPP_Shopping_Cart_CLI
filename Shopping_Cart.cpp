#include <iostream>
#include <string>
#include <vector>
#include "Shopping_Cart.h"

// Movies no args contructor
Shopping_Cart::Shopping_Cart() {
}

// Movies destructor
Shopping_Cart::~Shopping_Cart() {
}

void Shopping_Cart::display_shopping_cart() {
	if (shopping_cart.size() == 0)
		std::cout << "Sorry, you shopping cart is emtpy\n" << std::endl;
	else {
		std::cout << "\n========== Shopping Cart" << std::endl;
		double total{0};
		for (const Product &product: shopping_cart) {
				product.display_product();
				total += product.get_product_total();
		}
		std::cout << "-------------------------" << std::endl;
		std::cout << "Total: " << total << std::endl;
	}
}

bool Shopping_Cart::add_to_shopping_cart(std::string product_name, int quantity, double price) {
	for (const Product &product: shopping_cart) {
		if (product.get_product_name() == product_name) {
			return false;
		}
	}

	Product added_product {Product{product_name, quantity, price}};
	shopping_cart.push_back(added_product);
	return true;
}

bool Shopping_Cart::increment_product_quantity(std::string product_name) {
	for (Product &product: shopping_cart) {
		if (product.get_product_name() == product_name) {
			product.increment_product(product_name);
			return true;
		}
	}
	return false;
}

bool Shopping_Cart::decrement_product_quantity(std::string product_name) {
	for (Product &product: shopping_cart) {
		if (product.get_product_name() == product_name) {
			product.decrement_product(product_name);
			return true;
		}
	}
	return false;
}

bool remove_product(std::string product_name);