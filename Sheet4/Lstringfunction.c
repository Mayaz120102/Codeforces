#include<stdio.h>
#include<string.h>
int main()
{
  int n,q;
  scanf("%d %d",&n,&q);
  char s[1001];
  scanf("%s" ,s);
  while(q--){
    char query[20];
    scanf("%s", query);
    if(strcmp(query, "pop_back")==0){
        s[strlen(s)-1] ='\0';
    }
    else if(strcmp(query, "front")==0){
        printf("%c\n",s[0]);
    }
    else if(strcmp(query, "back")==0){
        printf("%c\n",s[strlen(s)-1]);
  }
    else if(strcmp(query, "sort")==0){
        int l,r;
        scanf("%d %d", &l,&r);
        l--;
        r--;
        char temp[1001];
        strncpy(temp, s+l, r-l+1);
        temp[r - l + 1] = '\0';
            for (int i = 0; i < strlen(temp) - 1; i++) {
                for (int j = i + 1; j < strlen(temp); j++) {
                    if (temp[i] > temp[j]) {
                        char swap = temp[i];
                        temp[i] = temp[j];
                        temp[j] = swap;
                    }
                }
            }
            strncpy(s + l, temp, r - l + 1);
        } 
        else if (strcmp(query, "reverse") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            l--; r--; // Convert to 0-based index
            while (l < r) {
                char temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l++;
                r--;
            }
        } 
        else if (strcmp(query, "print") == 0) {
            int pos;
            scanf("%d", &pos);
            printf("%c\n", s[pos - 1]);
        } 
        else if (strcmp(query, "substr") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            l--; r--; // Convert to 0-based index
            for (int i = l; i <= r; i++) {
                printf("%c", s[i]);
            }
            printf("\n");
        } 
        else if (strcmp(query, "push_back") == 0) {
            char x;
            scanf(" %c", &x);
            int len = strlen(s);
            s[len] = x;
            s[len + 1] = '\0';
        }
    }
    
    return 0;
}









