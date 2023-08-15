#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_m - Typedef for struct dog
 */
typedef struct dog dog_m;

