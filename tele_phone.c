#include<stdio.h>
#include<string.h>


void insert()
{
	char a[20];
	int b[11],i;
	FILE* fp=fopen("2.txt","w+");
	printf("请输入联系人姓名:\n");
	scanf("%s",a);
	fprintf(fp,"%c",'\t');
//	printf("请输入联系人电话号码:\n");
//	for(i=0;i<11;i++)
//		scanf("%d",b[i]);
	fwrite(a,sizeof(char),strlen(a),fp);
//	fwrite(b,sizeof(char),11,fp);
	fprintf(fp,"%c",'\n');	
}

int main()
{
	insert();
	return 0;
}
