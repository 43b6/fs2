inherit "/obj/book";

#define BOOK_PATH "/open/gsword/obj/"
#define BOOK_NAME "map1"
#define C_BOOK_NAME "�ɽ����ڲ�����ͼ"

void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "map" }) );
  set("long", "�ɽ����ڲ�����ͼ,����Զ�����(read map).\n"
  );
  set("value",  3);
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}
