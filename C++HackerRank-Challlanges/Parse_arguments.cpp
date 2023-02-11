#include "Parse_arguments.h"
#include "HRChallangesSolution.h"


void C_CmdArgs::Print_help() {
	printf("Supported command lines:\n\n");
	printf("[ For Question:    -l easy -q datatypes or -q datatypes -l easy ]\n");
	printf("[ For Contents:    -c contents/CONTENTS ]\n");
	printf("[ For Help:        -h help/HELP ]\n");
}

void C_CmdArgs::Print_Usage() {
	printf("Currently supported arguments:\n\n");
	printf("	-q		Question e.g helloworld, datatypes, inout etc. more details in '-h help'\n");
	printf("	-l		Hardness level e.g easy, medium and hard\n");
	printf("	-h		Help.\n");
	printf("	-c      Contents, show all supported questions\n\n");
	
}


void C_CmdArgs::Parse_Args(int argc, char* argv[]) {

	
	if (argc == 1) {
		printf("Please specify arguments\n\n");
	}

	
	if (argc >= 2) {
		std::cout << "Your command is: ";
		for (int i = 1; i < argc; i++) {

			std::string opt = argv[i];
			if (opt ==opt_Que) {
				std::string arg = argv[++i];
				if (arg == std::string("helloworld") || arg == std::string("HELLOWORLD")) {
					this->question = HELLOWORLD;
				}
				else if (arg == std::string("datatypes") || arg == std::string("DATATYPES")) {
					this->question = DATATYPES;
				}
				else if (arg == std::string("inout") || arg == std::string("INOUT")) {
					this->question = INOUT;
				}
				else if (arg == std::string("conditional") || arg == std::string("CONDITIONAL")) {
					this->question = CONDITIONAL;
				}
				else if (arg == std::string("loops") || arg == std::string("LOOPS")) {
					this->question = LOOPS;
				}
				else if (arg == std::string("functions") || arg == std::string("FUNCTIONS")) {
					this->question = FUNCTIONS;
				}
				else if (arg == std::string("pointers") || arg == std::string("POINTERS")) {
					this->question = POINTERS;
				}
				else if (arg == std::string("arrays") || arg == std::string("ARRAYS")) {
					this->question = ARRAYS;
				}
				else if (arg == std::string("var-size-arrays") || arg == std::string("VAR-SIZE-ARRAYS")) {
					this->question = VAR_SIZE_ARRYS;
				}
				else {
					std::cout << "Please specify question. e.g -q helloworld/QUESTION.\n";
					this->Print_Usage();
				}
			}
			else if(opt==opt_level) {
				std::string arg = argv[++i];
				if (arg == std::string("easy") || arg==std::string("EASY")) {
					this->que_level = EASY;
				}
				else if (arg == std::string("medium") || arg == std::string("MEDIUM")) {
					this->que_level = MEDIUM;
				}
				else if (arg == std::string("hard") || arg == std::string("HARD")) {
					this->que_level = HARD;
				}
				else
				{
					std::cout << "Please specify level. e.g -l easy/EASY.\n";
					this->Print_Usage();
				}
			}
			else if(opt==opt_help) {
				std::string arg = argv[++i];
				if (arg == std::string("help") || arg == std::string("HELP")) {
					this->question = HELP;
				}
				else
				{
					std::cout << "Please enter command for help. e.g -h help/HELP.\n";
					this->Print_Usage();
				}

			}
			else if (opt == opt_contents) {
				std::string arg = argv[++i];
				if (arg == std::string("contents") || arg == std::string("CONTENTS")) {
					this->question = CONTENTS;
				}
				else
				{
					std::cout << "Please enter command for contents. e.g -c contents/CONTENTS.\n";
					this->Print_Usage();
				}
			}
			else
			{

				this->Print_Usage();
			
			}
			std::cout << opt << " " << argv[i]<<" ";
		}
		std::cout <<std::endl;
		std::cout << std::endl;
		
	}
}

