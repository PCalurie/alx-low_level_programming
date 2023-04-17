#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's profile
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* Tommy - typedef for struct dog */
typedef struct dog Tommy;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
