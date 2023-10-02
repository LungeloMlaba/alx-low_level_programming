#inlcude <stdio.h>


int main() {
	FILE *file;
	char data[255];
	file =  fopen("learn.txt", "r");
	while(fscanf(fp, "%s", data)!=EOF){
		printf("%s", data);
	}
	fclose(file);
	return 0;
}
