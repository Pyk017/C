#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
void printBook( struct Books *book );
int main( ) {

   struct Books Book1;       
   struct Books Book2;       
   printf("Enter Book title :- \n");
   scanf("%s",&Book1.title);
   printf("Enter Book Author :- \n");
   scanf("%s",&Book1.author);
   printf("Enter Book Subject :- \n");
    scanf("%s",&Book1.subject);  
   printf("Enter Book ID :- \n");
   scanf("%d",&Book1.book_id);

   printf("Enter Book title :- \n");
   scanf("%s",&Book2.title);
   printf("Enter Book Author :- \n");
   scanf("%s",&Book2.author);
   printf("Enter Book Subject :- \n");
   scanf("%s",&Book2.subject);
   printf("Enter Book ID :- \n");
   scanf("%d",&Book2.book_id); 
   printBook( &Book1 );
   printBook( &Book2 );
   return 0;
}

void printBook( struct Books *book ) {

   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
}
