inherit "/obj/book";

#define BOOK_PATH "/open/gsword/obj/"
#define BOOK_NAME "map"
#define C_BOOK_NAME "���е�ͼ"

void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "map" }) );
  set("long", "һ�����гǵĵ�ͼ,����Զ�����(read map).\n"
  );
  set("value", 10 );
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}
