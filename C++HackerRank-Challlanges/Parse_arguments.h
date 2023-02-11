#pragma once
#include"HRChallangesSolution.h"


#include<iostream>


class C_CmdArgs {

public:

	E_LEVEL que_level;
	E_QUESTION question;

	


	void Parse_Args(int argc, char* argv[]);
	void Print_Usage();
	void Print_help();




private:

	

	std::string opt_Que = "-q";
	std::string opt_level = "-l";
	std::string opt_help = "-h";
	std::string opt_contents = "-c";



};


