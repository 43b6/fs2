inherit "/obj/book";

#define BOOK_PATH "/open/center/obj/"
#define BOOK_NAME "newbie"
#define C_BOOK_NAME "����ָ��"

void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "book" }) );
  set("long", "����ָ���ֲ�,��ӭͶ��,mail or post.\n
����Զ�����(read book).\n"
  );
  set("value", 10 );
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup()
}
