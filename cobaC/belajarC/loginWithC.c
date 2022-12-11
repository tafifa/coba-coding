#include <stdio.h>
#include <string.h>

int main()
{
	// library
	char id[8];
	char pw[8];
	char usernameCheck[] = "user", passwordCheck[] = "1234";
	int x,y,z;
	int trying = 3;

    while (z = 0)
    {
        while(trying >= 0)
        {
            printf("Masukkan Username dan Password terlebih dahulu!\n\n");

            printf("Username : "); scanf("%s", id);
            printf("Password : "); scanf("%s", pw);

            x=strcmp(id, usernameCheck);
            y=strcmp(pw, passwordCheck);


            if(x==0 && y==0){
                printf("\nSelamat Datang di Program Menghitung Luas Bangun Datar!\n");
            }else {
                printf("\nUsername atau Password yang anda masukkan salah\n");
                trying--;
                break;
            }
        }
    }

	return 0;

}
