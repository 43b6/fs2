inherit ROOM;

void create()
{
  set ("short", "竞技场");
  set ("long", @LONG

每半年金刀门的弟子都要在这里互相较量一下功夫，这样一来大家为了争
取最高的荣誉就会努力的苦练功夫。当然了，除了本门弟子互相较量之外
如果有人要来跟金刀门的高手讨教的话.....

LONG);

  set("light_up", 1 );
  set("outdoors", "/open/gblade" );
  set("valid_startroom", 0 );
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"g1-3",
]) );
  setup();
}
