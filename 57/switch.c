#include <stdio.h>

enum LuxSkill {
	LightBinding = 1,
	PrismaticBarrier,
	LucnetSingularity,
	FianlSpark
};

int main()
{
	enum LuxSkill skill;

	skill = LightBinding;

	switch (skill)
	{
		case LightBinding:
			printf("LightBinding\n");
			break;
		case PrismaticBarrier:
			printf("PrismaticBarrier\n");
			break;
		case LucnetSingularity:
			printf("LucnetSingularity\n");
			break;
		case FianlSpark:
			printf("FianlSpark\n");
			break;
		default:
			break;
	}

	return 0;
}
