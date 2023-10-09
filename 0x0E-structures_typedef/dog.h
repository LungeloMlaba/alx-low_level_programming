#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - structe of three types
 * @name: name of dog
 * @age: current age of dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

