 #include<stdio.h>
 struct numbers
 {
 	int a,b,c;
 };
 int main()
 {
 	struct numbers n;
 	FILE *fp;
 	fp=fopen("output.txt","w");
 	n.a=10;
 	n.b=20;
 	n.c=30;
 	fwrite(&n,sizeof(n),1,fp);
 	fclose(fp);
 	fp=fopen("output.txt","r");
 	fread(&n,sizeof(n),1,fp);
 	printf("\n a=%d b=%d c=%d",n.a,n.b,n.c);
 	fclose(fp);
 	return 0;
 }
