inherit BOOK;

#define BOOK_PATH "/open/port/obj/"
#define BOOK_NAME "map"
#define C_BOOK_NAME "���ָ۵�ͼ"
				
void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "map" }) );
	 set( "long", "����һ�Źٶ��ķ��ָ۵�ͼ .\n");
  						
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}

void init()
{
  ::init();
}
