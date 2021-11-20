#include <iostream>
#include <string>
#include "Product.h"

// Declare constructor
Product::Product(std::string product_name, int quantity, double price)
	: product_name{product_name}, quantity{quantity}, price{price} {
	product_total = price;
}

// Implementation of the Copy constructor
Product::Product(const Product &source)
	:Product{source.product_name, source.quantity, source.price} {
}

std::string Product::get_product_name() const {
	return product_name;
}

int Product::get_product_quantity() const {
	return quantity;
}

double Product::get_product_price() const {
	return price;
}
double Product::get_product_total() const {
	return price * quantity;
}

void Product::display_product() const {
	std::cout << product_name << " - " << quantity << "x "  << price << std::endl;
}

void Product::increment_product(std::string product_name) {
	quantity++;
	calculate_total();
}

void Product::decrement_product(std::string product_name) {
	quantity--;
	calculate_total();
}

void Product::calculate_total() {
	product_total = quantity * price;
}



