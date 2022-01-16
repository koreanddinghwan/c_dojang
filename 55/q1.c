#include <stdio.h>
#include <string.h>


struct Stats {
	float health;
	float healthRegen;
	unsigned int mana;
	float manaRegen;
	float range;
	float attackDamage;
	float armor;
	float attackSpeed;
	float maginResist;
	unsigned int movementSpeed;
};

struct Champion{
	char name[20];
	struct Stats stats;
	float abilityPower;
};

int main()
{
	struct Champion swain;
	
	strcpy(swain.name, "swain");

	swain.stats.health = 463.0f;

	printf("%s %f\n", swain.name, swain.stats.health);

	return 0;
}
