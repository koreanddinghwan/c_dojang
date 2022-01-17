#include <stdio.h>
#include <stdbool.h>

int getMana()
{
	return 222;
}

float getAttackSpeed()
{
	return 0.679000f;
}

int isMelee()
{
	return 1;
}

int main()
{
	int mana;
	float attackSpeed;
	bool melee;

	mana = getMana();
	attackSpeed = getAttackSpeed();
	melee = isMelee();

	printf("%d\n", mana);
	printf("%f\n", attackSpeed);
	printf("%d\n", melee);

	return 0;
}
