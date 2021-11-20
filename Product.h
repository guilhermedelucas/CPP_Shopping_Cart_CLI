#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include <vector>
#include <string>

class Product {
private:
	std::string product_name;
	int quantity;
	double price;
	double product_total;

public:
	// Constructor
	Product(std::string product_name, int quantity, double price);

	Product(const Product &source);

	// getters
	std::string get_product_name() const;
	int get_product_quantity() const;
	double get_product_price() const;
	double get_product_total() const;

	// display
	void display_product() const;

	// setters
	void increment_product(std::string product_name);
	void decrement_product(std::string product_name);
	void calculate_total();
};

#endif