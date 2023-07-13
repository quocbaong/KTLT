#include<stdio.h>
#include<string.h>

int main() {
    char S[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets(S);  //Nhap chuoi
    char *tu = strtok(S, " "); //tách từ đầu tiên trong chuỗi S
    int dodai=strlen(tu);   //Biến dodai để lưu độ dài của từ dài nhất.
    char tudainhat[100];    //Biến tudainhat để lưu từ có độ dài dài nhất
    strcpy(tudainhat,tu);   //Copy từ đang có độ dài dài nhất
    while ((tu = strtok(NULL, " ")) != NULL) { //Vòng lặp tách các từ tiếp theo
        int wordLength = strlen(tu); //Biến wordlength để lưu độ dài từ tiếp theo
        if(wordLength > dodai) {     /*Nếu độ dài từ đang xét hiện tại lớn hơn độ dài từ trước đó 
                                        thì độ dài của từ đó sẽ được lưu vào biến dodai, và sẽ copy từ đó vào biến tudainhat*/
            dodai = wordLength;         
            strcpy(tudainhat,tu);
        }
    }
    printf("Tu dai nhat trong chuoi S la: %s", tudainhat);
    
    return 0;
}