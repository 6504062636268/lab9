#include <stdio.h>
int checkLogin(char *login, char *passwd);
//accepted only if Length = 5 and a number 1 or more digits
int checkValidPass(char *ps,int mode);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if(checkValidPass(password, 1)) {
		//if Password is valid
		printf("Accepted\n");
	}
	else{
		printf("Reject\n");
	}
}
int checkValidPass(char *ps,int mode) {
	 int len = strlen(ps);
    int digitCount = 0;
    int upperCount = 0;
    int i, j;

    for(i = 0; i < len; i++) {
        if(isdigit(ps[i]))
            digitCount++;
        if(isupper(ps[i]))
            upperCount++;
    }
    if(mode == 1) {
        if(len == 5 && digitCount >= 1)
            return 1;
        else
            return 0;
    }
    if(mode == 2) {
        if(len >= 5 && len <= 8 &&
           !isdigit(ps[0]) &&
           upperCount >= 2 &&
           digitCount >= 2)
            return 1;
        else
            return 0;
    }
    if(mode == 3) {
        for(i = 0; i < len; i++) {
            if(isupper(ps[i])) {
                for(j = i+1; j < len; j++) {
                    if(ps[i] == ps[j])
                        return 0;
                }
            }
        }

        if(len >= 5 && len <= 8 &&
           upperCount >= 2 &&
           digitCount >= 2)
            return 1;
        else
            return 0;
    }

    return 0;
}
int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}
