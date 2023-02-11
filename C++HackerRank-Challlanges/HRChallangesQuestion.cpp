#include<iostream>
#include"HRChallangesQuestion.h"

void C_Questions::HW_Question() {
	std::cout << "********** Question **********\n";
	std::cout << "Print Hello, World!\n";
	std::cout << std::endl;
}

void C_Questions::InOut_Question() {
	std::cout << std::endl;
	std::cout << "********** Question **********\n";
	std::cout << "Sample Input:\n";
	std::cout<<"1 2 7.";
	std::cout << std::endl;
	std::cout << "Sample Output:\n";
	std::cout << "10";
	std::cout << std::endl;
}

void C_Questions::DataType_Question() {
	std::cout << std::endl;
	std::cout << "********** Question **********\n";
	std::cout << "Sample Input:\n";
	std::cout << "3 12345678912345 a 334.23 14049.30493\n";
	std::cout << std::endl;
	std::cout << "Sample Output:\n";
	std::cout << "3\n12345678912345\na\n334.230\n14049.304930000";
}

void C_Questions::Conditional_Statements_Question(){
	std::cout << std::endl;
	std::cout << "********** Question **********\n";
	std::cout << "Sample Input:\n";
	std::cout << "5\n";
	std::cout << std::endl;
	std::cout << "Sample Output:\n";
	std::cout << "five";
}

void C_Questions::Loop_Question(){
	std::cout << std::endl;
	std::cout << "********** Question **********\n";
	std::cout << "Sample Input:\n";
	std::cout << "8\n10\n";
	std::cout << std::endl;
	std::cout << "Sample Output:\n";
	std::cout << "eight\nnine\neven\nodd";
}

void C_Questions::Function_Question() {
	std::cout << std::endl;
	std::cout << "********** Question **********\n";
	std::cout << "-----Find greatest number: use function-----\n";
	std::cout << "Sample Input:\n";
	std::cout << "3\n4\n6\n5\n";
	std::cout << std::endl;
	std::cout << "Sample Output:\n";
	std::cout << "6\n";
}

void C_Questions::Pointer_Question() {
	std::cout << std::endl;
	std::cout << "********** Question **********\n";
	std::cout << "-----Find c = a + b, d = |a - b|: use pointers-----\n";
	std::cout << "Sample Input:\n";
	std::cout << "4\n5\n";
	std::cout << std::endl;
	std::cout << "Sample Output:\n";
	std::cout << "9\n1\n";
}

void C_Questions::Array_Question(){
	std::cout << std::endl;
	std::cout << "********** Question **********\n";
	std::cout << "-----Find reverse of the array, first number indicate length of array-----\n";
	std::cout << "Sample Input:\n";
	std::cout << "4\n1 4 3 2\n";
	std::cout << std::endl;
	std::cout << "Sample Output:\n";
	std::cout << "2 3 4 1\n";
}

void C_Questions::VarSizeArray_Question(){
	std::cout << std::endl;
	std::cout << "********** Question **********\n";
	std::cout << "-----Variable Siized Array-----\n";
	std::cout << "Sample Input:\n";
	std::cout << "2 2\n3 1 5 4\n5 1 2 8 9 3\n0 1\n1 3\n";
	std::cout << std::endl;
	std::cout << "Sample Output:\n";
	std::cout << "5 9\n";
	std::cout << "Explanation:\n";
	std::cout << "2 2: number of arrays and quaries\n3 1 5 4: 1st array, 3 is length of array\n";
	std::cout << "5 1 2 8 9 3: 2nd array, 5 is length\n0 1: 1st query, 0 is the index of 1st array, 1 is the index of element in 1st array";
	std::cout << "1 3: 2st query 1 is index of the 2st array, 3 is index of element in the 2st array";
}
