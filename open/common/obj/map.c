inherit BOOK;

#define BOOK_PATH "/open/center/obj/"
#define BOOK_NAME "map"
#define C_BOOK_NAME "����½��ͼ"

void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "map" }) );
  set( "long", "����һ����ǰ������ð�յ���Ѫ�����Ƶĵ�ͼ��\n");
  
  // set ( "value", ({ 10, "silver" }) );
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}

void init()
{
  ::init();
}
