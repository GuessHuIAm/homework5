#include <stdio.h>

int main() {

	char c = 'a';
	int i = 10;
	long l = 100;

	printf("c = %c\n&c (hex): %p\n&c (decimal): %lu\n\n", c, &c, &c);
	printf("i = %d\n&c (hex): %p\n&c (decimal): %lu\n\n", i, &i, &i);
	printf("l = %ld\n&c (hex): %p\n&c (decimal): %lu\n\n", l, &l, &l);

	char *cp = &c;
	int *ip = &i;
	long *lp = &l;

	printf("char *cp = &c;\nint *ip = &i;\nlong *lp = &l;\n\n");
	printf("cp = %p\nip = %p\nlp = %p\n\n", cp, ip, lp);

	cp++;
	ip++;
	lp++;

	printf("cp++;\nip++;\nlp++;\n\n");
	printf("cp = %p\nip = %p\nlp = %p\n\n", cp, ip, lp);

	unsigned int ui = 100;
	int *uip = &ui;
	char *ucp = &ui;

	printf("uip: %p; uip points to: %d\n", uip, *uip);
	printf("ucp: %p; ucp points to: %d\n\n", ucp, *ucp);

	printf("ui (hex): %x\n", ui);
	printf("ui (decimal): %u\n\n", ui);

	int j;
        for (j = 1; j <= 4; j++){
                printf("ui[%d] (hhx): %hhx\n", j, ucp[j]);
                printf("ui[%d] (hhu): %hhu\n\n", j, ucp[j]);
        }

	printf("\n");

	for (j = 0; j < 4; j++){
		ucp[j]++;
		printf("ui (hex): %x\n", ui);
        	printf("ui (decimal): %u\n\n", ui);
	}

	for (j = 0; j < 4; j++){
                printf("ui[%d] (hhx): %hhx\n", j, ucp[j]);
                printf("ui[%d] (hhu): %hhu\n\n", j, ucp[j]);
        }

	ucp = &ui;

        for (j = 0; j < 4; j++){
                ucp[j] += 16;
		printf("ui (hex): %x\n", ui);
        	printf("ui (decimal): %u\n\n", ui);
	}
	for (j = 0; j < 4; j++){
		printf("ui[%d] (hhx): %hhx\n", j, ucp[j]);
		printf("ui[%d] (hhu): %hhu\n\n", j, ucp[j]);
	}
	return 0;

}
