#include <iostream>
#include <cmath>
#include <vector>
#include <string>

const double pi{4*atan(1)};

enum coordinate {x=0, y, z};

class VectorType {
	public:
		VectorType();
		VectorType(double x_already, double y_already, double z_already);
		void print_vector();
		double magnitude();
		double coordinate_values[3];
};

VectorType::VectorType() {
	char input_type;
	do {
		std::cout << "Will you use coordinates(c) or angles(a): ";
		std::cin >> input_type;
	} while (input_type != 'a' && input_type != 'c');

	if (input_type == 'c') {
		double coordinates[3];
		std::cout << "Input x value: ";
		std::cin >> coordinates[x];
		coordinate_values[x] = coordinates[x];
		std::cout << "Input y value: ";
		std::cin >> coordinates[y];
		coordinate_values[y] = coordinates[y];
		std::cout << "Input z value: ";
		std::cin >> coordinates[z];
		coordinate_values[z] = coordinates[z];
	}
	else {
		double mag, angle_degrees;
		std::cout << "Input the magnitude: ";
		std::cin >> mag;
		std::cout << "Input the angle in degrees: ";
		std::cin >> angle_degrees;
		coordinate_values[z] = 0;
		coordinate_values[x] = mag * cos(angle_degrees * pi / 180);
		coordinate_values[y] = mag * sin(angle_degrees * pi / 180);
	}
}

VectorType::VectorType(double x_already, double y_already, double z_already) {
	coordinate_values[x] = x_already;
	coordinate_values[y] = y_already;
	coordinate_values[z] = z_already;
}


void VectorType::print_vector() {
	std::cout << "[" << coordinate_values[x] << ", " << coordinate_values[y] << ", " << coordinate_values[z] << "]";
}

double VectorType::magnitude() {
	double terms_squared[3];
	for (size_t i = 0; i < 3; i++) {
		terms_squared[i] = coordinate_values[i] * coordinate_values[i];
	}
	double squared_sum{terms_squared[x]+terms_squared[y]+terms_squared[z]};
	return pow(squared_sum, 0.5);
}

int get_value() {
	int value;
	std::cin >> value;
	return value;
}

std::vector<int>vectors_selected_index(std::vector<VectorType>vList) {
	std::vector<int>selected;
	for (size_t i = 0; i < vList.size(); i++){
		vList[i].print_vector();
		std::cout << "\t->\t(" << i << ")" << std::endl;
	}
	std::cout << "Which vectors will you select? (type negative value to finish count)" << std::endl;

	for (size_t i = 0; i < vList.size(); i++) {
		int index{get_value()};
		if (index > -1) {
			selected.push_back(index);
		}
		else {
			break;
		}
	}

	return selected;
}

VectorType vector_operation(std::vector<VectorType>vector_selected_list, std::vector<int>selected) {
	double operation_coordinates[3]{};
	std::vector<double>constants;
	for (size_t i = 0; i < selected.size(); i++){
		double constant_single;
		std::cout << "Input the constant for vector " << selected[i] << ": ";
		std::cin >> constant_single;
		constants.push_back(constant_single);
	}

	std::cout << std::endl;
	std::cout << std::endl;

	for (size_t i = 0; i < selected.size(); i++){
		operation_coordinates[x] += constants[i] * vector_selected_list[selected[i]].coordinate_values[x];
		operation_coordinates[y] += constants[i] * vector_selected_list[selected[i]].coordinate_values[y];
		operation_coordinates[z] += constants[i] * vector_selected_list[selected[i]].coordinate_values[z];
	}

	std::cout << "Operation notation: " << std::endl;
	for (size_t i = 0; i < constants.size(); i++)
	{
		if (i == selected.size() - 1) {
			std::cout << constants[i] << "V(" << selected[i] << ")";
		}
		else {
			std::cout << constants[i] << "V(" << selected[i] << ") ";
		}

		if (constants[i] >= 0) {
			std::cout << "+ ";
		}
		else {
			std::cout << "- ";
		}
	}
	std::cout << std::endl;

	VectorType final_vector(operation_coordinates[x], operation_coordinates[y], operation_coordinates[z]);
	std::cout << "Our resultant vector is: ";
	final_vector.print_vector();
	std::cout<<std::endl;
	return final_vector;
}

int main() {
	std::string order_words[9]{"First","Second","Third","Fourth", "Fifth", "Sixth", "Seventh", "Eighth", "Ninth"};
	char menubar;

	int intial_vectors;
	std::cout << "How many vectors are you using?: ";
	std::cin >> intial_vectors;
	std::cout << std::endl;

	std::vector<VectorType> vector_list;

	std::cout << "Let's start to initialize your vectors." << std::endl;
	std::cout << std::endl;

	
	for (int i = 0; i < intial_vectors; i++) {
		std::cout << order_words[i] << " vector:" << std::endl;
		VectorType vector_init_iterator;
		vector_list.push_back(vector_init_iterator);
		std::cout << std::endl;
	}

	do {
		std::cout << std::endl;

		std::vector<int>selected_vectors{ vectors_selected_index(vector_list) };

		VectorType new_vector_op{vector_operation(vector_list, selected_vectors)};
		vector_list.push_back(new_vector_op);

		std::cout<<std::endl;
		std::cout << "If you want to exit, input e. If not,input any other character.";
		std::cin >> menubar;
	} while (menubar != 'e');

}
