#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Who is the owner of the dog
 *
 * Description: No description for this struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * my_dog - typedef for struct dog
 */
typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

