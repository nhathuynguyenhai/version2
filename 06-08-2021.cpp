#include <stdio.h>
#include <conio.h>

void XuatFile(char* tenFile, int* arr, int n);
int main()
{
	// mo file de doc
	FILE* fi = fopen("input.txt", "rt");
	if (fi == NULL)
		printf("Khong mo duoc tap tin!");

	//doc du lieu
	int n;
	fscanf(fi, "%d", &n);

	int * arr = new int[n];
	for (int i = 0; i < n; i++)
		fscanf(fi, "%d", &arr[i]);

	//dong file
	fclose(fi);
	// in ra man hinh de kiem tra
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	getch();
	// xuat ra file
	XuatFile("output.txt", arr, n);
}
void XuatFile(char* tenFile, int* arr, int n)
{
	//mo file de ghi
	FILE* fo = fopen("output.txt", "wt"); // wt = write (ghi) + text (dang van ban)
	//ghi du lieu ra file
	for (int i = 0; i < n; i++)
		fprintf(fo, "%d ", arr[i]);
	// dong file
	fclose(fo);  
}
