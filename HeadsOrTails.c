#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int i,j[3],heads_count=0, tails_count=0;

srand((unsigned int) time(NULL));
for(i=0;i<3;i++){
j[i] = rand() % 2;
}

char name[50];
printf("Who are you?\n");
scanf("%s", name);
printf("Hello, %s!\n", name);


printf("Tossing a coin...\n");

for (int i = 0; i < 3; i++) {
printf("Round %d: ", i + 1);
if (j[i] == 0) {
    printf("Heads\n");
    heads_count++;
}

else if (j[i] == 1) {
    printf("Tails\n");
    tails_count++;
}
}

printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

if(heads_count > tails_count) printf("%s won!", name);
else printf("%s lost!", name);


return 0;
}
