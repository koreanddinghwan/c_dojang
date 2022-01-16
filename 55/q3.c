#include <stdio.h>


struct DeviceOption{
	union {
		short option;
		struct {
			char interrupt;
			char boot;
		};
	};
};

int main()
{
	struct DeviceOption opt;

	opt.boot = 0x22;
	opt.interrupt = 0x11;

	printf("0x%x\n", opt.option);

	return 0;
}
