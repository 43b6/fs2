inherit "/obj/book";

#define BOOK_PATH "/u/w/wing/gold_blade/obj/"
#define BOOK_NAME "paper"
#define C_BOOK_NAME "字条"

void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "paper" }) );
  set("long", "一张由王家大小姐依照古文书的内容，翻译而写下的纸条。\n"
  );
  set("unit","张");
  set("value", 0 );
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}
