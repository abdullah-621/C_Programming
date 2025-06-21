#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);

    char Tetrahedron[] = "Tetrahedron";
    char Cube[] = "Cube";
    char Octahedron[] = "Octahedron";
    char Dodecahedron[] ="Dodecahedron";
    char Icosahedron[] = "Icosahedron";

    int total_face = 0;
    while (n--)
    {
        char s[200000];
        scanf("%s",s);
        if (strcmp(s,Tetrahedron) == 0)
        {
            total_face += 4;
        }
        else if (strcmp(s,Cube) == 0)
        {
            total_face += 6;
        }
        else if (strcmp(s,Octahedron) == 0)
        {
            total_face += 8;
        }
        else if (strcmp(s,Dodecahedron) == 0)
        {
            total_face += 12;
        }
        else if (strcmp(s,Icosahedron) == 0)
        {
            total_face += 20;
        }
    }
    
    printf("%d\n",total_face);
    return 0;
}