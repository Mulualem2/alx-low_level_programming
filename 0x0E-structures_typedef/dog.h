#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog
 *
 * @name: char type variable
 * @age: float type variable
 * @owner:char type variable
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

int _putchar(char c);

#endif
