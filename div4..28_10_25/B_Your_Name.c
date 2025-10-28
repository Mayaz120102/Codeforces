#include<stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        
        int n;
        scanf("%d", &n);
        char s[25];
        char t[25];
        scanf("%s %s", s,t);

        int freq_s[26] ={0},freq_t[26] = {0};
        for (int  i = 0; i < n; i++)
        {
            freq_s[s[i] - 'a']++;
            freq_t[t[i] - 'a']++;
        }

        int same = 1;
        for (int i = 0; i < 26; i++) {
            if (freq_s[i] != freq_t[i]) {
                same = 0;
                break;
            }
        }
        
        if(same){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
        
    return 0;
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//     int q;
//     scanf("%d", &q);
//     while (q--) {
//         int n;
//         scanf("%d", &n);
//         char s[25], t[25];
//         scanf("%s %s", s, t);

//         int freq_s[26] = {0}, freq_t[26] = {0};

//         for (int i = 0; i < n; i++) {
//             freq_s[s[i] - 'a']++;
//             freq_t[t[i] - 'a']++;
//         }

//         int same = 1;
//         for (int i = 0; i < 26; i++) {
//             if (freq_s[i] != freq_t[i]) {
//                 same = 0;
//                 break;
//             }
//         }

//         if (same)
//             printf("YES\n");
//         else
//             printf("NO\n");
//     }
//     return 0;
// }
