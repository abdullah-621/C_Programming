// #include<stdio.h>
// int main(){
//     int t;
//     scanf("%d",&t);
//     while (t--){

//         char s[200005];
//         scanf("%s",s);
//     }
    
//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[51];
        scanf("%s", s);

        int freq[26] = {0}; // Array to store the frequency of each character
        int length = strlen(s);
        int unique_count = 0;

        for (int i = 0; i < length; i++) {
            if (freq[s[i] - 'a'] == 0) {
                unique_count++;
            }
            freq[s[i] - 'a']++;
        }

        int to_remove = length - unique_count;
        printf("%d\n", to_remove);
    }

    return 0;
}
