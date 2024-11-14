#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure caractéristique clébard
 * @name: nom du familier
 * @age: âge de ce dernier
 * @owner: le fumier qui le possède
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
/* définition type de retour */
/* de new_dog(char *name, float age, char *owner); */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
