#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new struct defining a dog
 * @name: First member
 * @type: Second member
 * @age: Third member
 * @owner: Fourth member
 *
 * Description: Longer description if needed
 */
struct dog
{
	char *name;
	char *type;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif