#ifndef DOG_H
#define DOG_H

/**
 * struct dog - characteristics of a dog
 * @name: name of dog
 * @age: dog's age
 * @owner: owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
