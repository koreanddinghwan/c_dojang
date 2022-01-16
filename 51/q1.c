#include <stdio.h>

struct EncryptionHeader {
	char flags;
	int test1;
	int test2;
};

int main()
{
	struct EncryptionHeader header;

	printf("%lu\n", sizeof(header));

	return 0;
}
