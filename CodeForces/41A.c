#include<stdio.h>
#include<string.h>
int main(){

    char s[100];
    char t[100];

    scanf("%s",s);
    scanf("%s",t);
    
    int is_reverse = 1;

    int Berland_length = strlen(s);
    int Birland_length = strlen(t);

    if (Berland_length != Birland_length) {

        is_reverse = 0;
    }

    else {

       for (int i = 0; i < Berland_length; i++) {

        if (s[i] != t[Birland_length - 1 - i]){

            is_reverse = 0;
            break;
        }    
    }
}
      
    if (is_reverse)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s[101];
//     char t[101];

//     scanf("%s", s);
//     scanf("%s", t);

//     int s_length = strlen(s);
//     int t_length = strlen(t);

//     if (s_length != t_length) {
//         printf("NO\n");
//         return 0;
//     }

//     for (int i = 0; i < s_length; i++) {
//         if (s[i] != t[t_length - 1 - i]) {
//             printf("NO\n");
//             return 0;
//         }
//     }

//     printf("YES\n");
//     return 0;
// }

