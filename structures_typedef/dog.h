#ifndef __MY_DOG__
#define __MY_DOG__
/**
 * struct dog - struct for name, age and owner of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog mydog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
