#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name of dog
 * @age:age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || owner == NULL)
		return (NULL);
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	return (doggy);
	free(doggy);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;
    dog_t *this_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    this_dog = new_dog("Oreo", 0.4, "Leila");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    printf("My name is %s, and I am %.1f :) - Woof! and my owner is %s\n", this_dog->name, this_dog->age, this_dog->owner);
    return (0);
}
