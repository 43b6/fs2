inherit "/obj/book";

#define BOOK_PATH "/u/w/wing/gold_blade/obj/"
#define BOOK_NAME "paper"
#define C_BOOK_NAME "����"

void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "paper" }) );
  set("long", "һ�������Ҵ�С�����չ���������ݣ������д�µ�ֽ����\n"
  );
  set("unit","��");
  set("value", 0 );
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}
