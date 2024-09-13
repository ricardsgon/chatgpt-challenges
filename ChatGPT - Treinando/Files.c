/*Uso de files para acessar perfis criados.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[100];
    int age;
} Profile;

int main()
{
    // Writing profiles to file
    FILE *file = fopen("profiles.dat", "wb");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    Profile profile1 = {1, "Alice", 30};
    Profile profile2 = {2, "Bob", 25};

    fwrite(&profile1, sizeof(Profile), 1, file);
    fwrite(&profile2, sizeof(Profile), 1, file);

    fclose(file);

    // Reading profiles from file
    file = fopen("profiles.dat", "rb");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    Profile profile;
    while (fread(&profile, sizeof(Profile), 1, file))
    {
        printf("ID: %d\n", profile.id);
        printf("Name: %s\n", profile.name);
        printf("Age: %d\n\n", profile.age);
    }

    fclose(file);

    return 0;
}
