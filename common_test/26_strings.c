// This C code was automatically generated by Aixt Project
// Device = Emulator
// Board = Software Emulator
// Backend = c



#include <stdbool.h>
#include "/home/fercho/aixt/ports/Emulator/api/builtin.c"
#include <string.h>
#include "/home/fercho/aixt/ports/Emulator/api/machine/uart.c"


char __temp_str[80];


int main() {
	char var[80];
	char var2[80];
	char str[] = "constant";
	bool b1 = false;
	strcpy(var, str);
	println(var);
	strcat(var, " ");
	strcat(var, str);
	println(var);
	strcpy(var2, strcat(strcpy(__temp_str, var), str));
	println(var2);
	b1 = !strcmp(var, var2);
	if(b1) {
		println("true");
	}
	else {
		println("false");
	}
	strcat(var2, strcat(strcpy(__temp_str, " "), str));
	println(var2);
	if(!strcmp(str, "constant")) {
		println("true");
	}
	return 0;
}