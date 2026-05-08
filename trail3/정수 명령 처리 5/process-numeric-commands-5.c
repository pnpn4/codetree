#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n;
char command[20];
int num;

int main() {
    scanf("%d", &n);
    int cnt=0;
    int *A=malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        if (strcmp(command, "push_back") == 0) {
            scanf("%d", &num);
            A[cnt++]=num;
        } else if (strcmp(command, "get") == 0) {
            scanf("%d", &num);
            printf("%d\n", A[num-1]);
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n",cnt);
        } else if (strcmp(command, "pop_back") == 0) {
            cnt--;
        }
    }
    free(A);
    // Please write your code here.
    
    return 0;
}