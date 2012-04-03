inherit BOOK;

#define BOOK_PATH "/open/capital/obj/"
#define BOOK_NAME "map"
#define C_BOOK_NAME "京城地图"
				
void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "map" }) );
  set( "long", "这是一张官定的京城图。\n");
  						
  // set ( "value", ({ 10, "silver" }) );
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}

void init()
{
  ::init();
}
