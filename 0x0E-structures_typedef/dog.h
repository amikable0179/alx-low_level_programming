#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - user is dog to hold name age and owner
 * @name: the dogs name
 * @age: the age of the dog
 * @owner: the owner og the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
