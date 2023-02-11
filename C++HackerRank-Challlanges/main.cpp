#include "HRChallangesSolution.h"
#include "HRChallangesQuestion.h"
#include "Parse_arguments.h"
#include <memory>
#include <iostream>


int main(int argc, char* argv[]) {

	C_Easy easy_task;
	C_CmdArgs cmd_args;

	cmd_args.Parse_Args(argc, argv);


	if (cmd_args.question==HELP) {
		cmd_args.Print_help();

		return 0;
	}
	else if (cmd_args.question == CONTENTS) {
		easy_task.Task_Content();
		return 0;
	}
	if (cmd_args.que_level==EASY) {

		
		if (cmd_args.question == HELLOWORLD) {

			easy_task.Hello_World_Solution();

		}
		else if (cmd_args.question == DATATYPES) {

			easy_task.DataTypes_Solution();

		}
		else if (cmd_args.question == INOUT) {

			easy_task.InOut_Solution();

		}
		else if (cmd_args.question == CONDITIONAL) {

			easy_task.Conditional_Statements_Solution();

		}
		else if (cmd_args.question == LOOPS) {

			easy_task.Loop_Solution();

		}
		else if (cmd_args.question == FUNCTIONS) {

			easy_task.Function_Solution();

		}
		else if (cmd_args.question == POINTERS) {

			easy_task.Pointer_Solution();

		}
		else if (cmd_args.question == ARRAYS) {

			easy_task.Array_Solution();

		}
		else if (cmd_args.question == VAR_SIZE_ARRYS) {

			easy_task.VarSizeArray_Solution();

		}
		else {
			std::cout << std::endl;
			std::cout << "Please specify question. e.g -q helloworld.\n\n";
			cmd_args.Print_Usage();
		}
	}
	else if (cmd_args.que_level == MEDIUM) {

	}
	else if (cmd_args.que_level == HARD) {

	}
	else
	{
		std::cout << std::endl;
		std::cout << "Please specify question category. e.g -l easy.\n\n";
		cmd_args.Print_Usage();
	}

}