inherit "/obj/book";

#define BOOK_PATH "/open/center/obj/"
#define BOOK_NAME "newbie"
#define C_BOOK_NAME "新手指南"

void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "book" }) );
  set("long", "新手指南手册,欢迎投稿,mail or post.\n
你可以读读它(read book).\n"
  );
  set("value", 10 );
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup()
}
