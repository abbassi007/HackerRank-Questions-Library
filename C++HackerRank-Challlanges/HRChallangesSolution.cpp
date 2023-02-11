#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<functional>
#include<unordered_set>
#include<string>
#include<array>
#include<fstream>
#include "HRChallangesSolution.h"
#include "HRChallangesQuestion.h"

C_Questions que_definition;

void C_Easy::Task_Content() {

	printf("\n********** C++ All Task Of HakerRank **********\n");

	std::cout << std::endl;
	printf("----------Easy Level Task----------\n");
	printf("1:\tHello, World! Task:             helloworld\n");
	printf("2:\tData Types Task:                datatpes\n");
	printf("3:\tInput Output Task:              inout\n");
	printf("4:\tContitional Statements Task:    contitional\n");
	printf("5:\tLoop Task:                      datatpes\n");
	printf("6:\tFunctions Task:                 functions\n");
	printf("7:\tArray Task:                     datatpes\n");
	printf("8:\tVariable Size Array Task:       var-size-array\n");

	std::cout << std::endl;
	printf("----------Medium Level Task----------.\n");
	printf("Will add in future! Inshallah.\n");

	std::cout << std::endl;
	printf("----------Hard Level Task----------.\n");
	printf("Will add in future! Inshallah\n");


	std::cout << std::endl;
	std::cout << std::endl;
}

void C_Easy::Hello_World_Solution() {
	que_definition.HW_Question();
	

	std::cout << "********** Solution **********\n";
	std::cout << "Hello, World!";
	std::cout << std::endl;
}

void C_Easy::DataTypes_Solution() {
	que_definition.DataType_Question();

	std::cout << std::endl;
	std::cout << "********** Solution **********\n";

	std::cin >> x1 >> l >> c >> f >> d;
	std::cout << x1 << "\n" << l << "\n" << c << "\n"<<std::fixed<<std::setprecision(3) << f << "\n"<<std::setprecision(9) << d << std::endl;
}

void C_Easy::InOut_Solution() {
	std::cout << "********** Solution **********\n";
	std::cout << std::endl;
	std::cout << "Enter three intergers numbers:\n";

	std::cin >> x1 >> x2 >> x3;
	std::cout << x1 + x2 + x3 << std::endl;
}

void C_Easy::Conditional_Statements_Solution() {
	std::cout << "********** Solution **********\n";
	std::cout << std::endl;
	std::cout << "Enter integer number:\n";
	std::cin >> x1;
	if (x1 == 1) {
		std::cout << "one\n";
	}
	else if (x1 == 2) {
		std::cout << "two\n";
	}
	else if (x1 == 3) {
		std::cout << "three\n";
	}
	else if (x1 == 4) {
		std::cout << "four\n";
	}
	else if (x1 == 5) {
		std::cout << "five\n";
	}
	else if (x1 == 6) {
		std::cout << "six\n";
	}
	else if (x1 == 7) {
		std::cout << "seven\n";
	}
	else if (x1 == 8) {
		std::cout << "eight\n";
	}
	else if (x1 == 9) {
		std::cout << "nine\n";
	}
	else {
		std::cout << "Greater than 9\n";
	}


}

void C_Easy::Loop_Solution() {
	std::cout << "********** Solution **********\n";
	std::cout << std::endl;
	std::cout << "Enter two integer number must be (first<=second):\n";

	std::vector<std::string> words = { "one","two","three","four","five",
										"six","seven","eight","nine" };
	std::cin >> x1 >> x2;
	for (int n = x1; n <= x2; n++) {
		if (n >= 1 && n <= 9) {
			std::cout << words.at(n-1) << std::endl;
		}
		else {
			std::cout << (n % 2 == 0 ? "even\n" : "odd\n");
		}

	}

}

void C_Easy::Function_Solution()
{
	std::cout << "********** Solution **********\n";
	std::cout << std::endl;
	std::cout << "Input four integer values:\n";

	
	std::cin >> x1 >> x2 >> x3 >> x4;
	std::vector<int> v = { x1,x2,x3,x4 };
	auto max = std::max_element(v.begin(), v.end());
	std::cout << *max << std::endl;
}

void C_Easy::Pointer_Solution() {

	std::cout << "********** Solution **********\n";
	std::cout << std::endl;
	std::cout << "Input two integer values:\n";


	std::cin >> x1 >> x2;
	int* p1 = &x1;
	int* p2 = &x2;

	std::cout << *p1 + *p2 << std::endl;
	std::cout << abs(*p1 - *p2) << std::endl;



}

void C_Easy::Array_Solution() {
	
	std::cout << "********** Solution **********\n";
	std::cout << std::endl;
	std::cout << "Input the size of Array you want (n=integer):\n";
	std::cin >> x1;
	std::cout << "Enter "<<x1<<" elements for this array:\n";

	std::vector<int> varr;

	for (int i = 0; i < x1;i++) {
		std::cin >>x2;
		varr.push_back(x2);
		std::cout << varr.size() << std::endl;
	}
	for (int it = varr.size()-1; it >=0;it-- ) {
		std::cout << varr.at(it) <<"";
	}
		
}


void C_Easy::VarSizeArray_Solution() {
	std::cout << "********** Solution **********\n";
	std::cout << std::endl;
	std::cout << "Enter var-length(n) arrays and number of queries(q):\n";
	std::cin >> x1>>x2;
	std::cout << "Enter " << x1 << " arrays:\n";

	//2 2					rows = x1 = 2 quaries = x2 = 2
	//3 1 5 4				arr[3] = {1,5,4}
	//5 1 2 8 9 3			arr[5] = {1,2,8,9,3}
	//0 1					arr[0][1] = element = 5
	//1 3					arr[1][3] = element = 9


	
	int arr[100][100]{};


	for (int i = 0; i < x1; i++){
		std::cout << "Enter the legth of array:\n";
		std::cin >> x3;
		for (int j = 0; j < x3; j++) {
			std::cin >> x4;
			arr[i][j] = x4;
		}
	}
	
	std::unordered_map<int, int> quaries;
	int arrNum, eleIndex;
	for (int i = 0; i < x2; i++) {
		std::cout << "Enter quaries first number (array index), second (element index):\n";
		std::cin >> arrNum >> eleIndex;
		quaries[arrNum] = eleIndex;
	}

	for (auto el:quaries) {
		std::cout << arr[el.first][el.second] << std::endl;
	}


}
