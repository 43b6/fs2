// Room: /open/start/room/eqroom
inherit ROOM;

void create()
{
	set("short","EQ储藏室");
	set("exits",([ /*sizeof()==1 */
	"south" : __DIR__"start",
 ]));
	set("no_clean_up", 1);
  set ("long", @LONG
这里是天道派为了造福新进弟子所开辟的EQ室，看到房间内满满的EQ
你不禁感到一股暖流直透心头.
LONG);

  set("light_up", 1);
	set("no_fight",1);
  setup();
call_other("/obj/board/ten_b.c","???");
}
