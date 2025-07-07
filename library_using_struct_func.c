#include<stdio.h>
#include<string.h>
struct library{
    char book_name[30];
    char book_availability[10];
    int No_of_books;
    int Rack_No;
    char author[30];
};
void read_book(struct library *books)
{
    printf("Welcome User!!\nEnter your neede books and author and we will check the availability and guide you to take books");
    printf("\nEnter Book name:");
    scanf("%s",books->book_name);
    printf("Enter Book author:");
   scanf("%s",books->author);
   printf("Good! Now i will check the book availability ");
   printf("Check book availability:");
   scanf("%s",books->book_availability);
   printf("Enter number of books available:");
   scanf("%d",&books->No_of_books);
   if((strcmp(books->book_availability,"Yes")) ==0 && books->No_of_books>=1)
   {
   printf("Great the book is availabile:");
   printf("Enter rack number:");
   scanf("%d",&books->Rack_No);
   }
   else{
       strcpy(books->book_availability,"No");
       books->No_of_books=0;
       books->Rack_No=-1;
   }
}
void print_details(struct library *book)
{
    printf("The book details:");
    printf("\n Book name:%s\n",book->book_name);
    printf("Author:%s\n",book->author);
    if((strcmp(book->book_availability,"Yes")) ==0 && book->No_of_books>=1 && book->Rack_No>=1)
   {
   printf("Book availability:%s\n",book->book_availability);
  printf("No of books:%d\n",book->No_of_books);
  printf("Rack No:%d\n",book->Rack_No);
   }
   else{
       printf("Book availability:%s\n",book->book_availability);
  printf("No of books:%d\n",book->No_of_books);
   printf("Book is not available at the moment");}
    
}
int main()
{
    struct library lib;
    read_book(&lib);
    print_details(&lib);
}
