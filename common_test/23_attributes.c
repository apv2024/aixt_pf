// This C code was automatically generated by Aixt Project
// Device = Emulator
// Board = Software Emulator
// Backend = c



#include <stdbool.h>
#include "/home/fercho/aixt/ports/Emulator/api/builtin.c"




inline long average(long x, long y) {
	return (x + y) / 2;
}

int main() {
	long a = 23;
	long b = 67;
	long c = 0;
	c = average(a, b);
	return 0;
}