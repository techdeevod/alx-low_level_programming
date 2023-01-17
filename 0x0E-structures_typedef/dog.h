#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - Dog attributes
 * @name: Dog name
 * @age: Age of the dog
 * @owner: The owner of the dog
 *
 * Return: The dog attribute
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
