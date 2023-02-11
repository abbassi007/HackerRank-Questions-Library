#pragma once
#include<string>


	
	


class C_Easy {
private:
	int x1,x2,x3,x4;
	double d;
	char c;
	float f;
	long l;


public:

	void reset() {
		int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
		double d = 0.0;
		char c = 0;
		float f = 0.0;
		long l = 0;

	}

	void Task_Content();
	void Hello_World_Solution();
	void DataTypes_Solution();
	void InOut_Solution();
	void Conditional_Statements_Solution();
	void Loop_Solution();
	void Function_Solution();
	void Pointer_Solution();
	void Array_Solution();
	void VarSizeArray_Solution();


};



typedef enum{
	EASY,
	MEDIUM,
	HARD
}E_LEVEL;

typedef enum {
	HELP,
	CONTENTS,
	HELLOWORLD,
	DATATYPES,
	INOUT,
	CONDITIONAL,
	LOOPS,
	FUNCTIONS,
	POINTERS,
	ARRAYS,
	VAR_SIZE_ARRYS
}E_QUESTION;



