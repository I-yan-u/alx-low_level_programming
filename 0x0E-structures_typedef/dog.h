#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Characteristic data of a dog
 * @name: The dogs name
 * @age: The dogs age
 * @owner: The name of its owner
 *
 * Description: This structure helps in describing
 * a dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* !DOG_H */
