// Room: /open/start/room/eqroom
inherit ROOM;

void create()
{
	set("short","ѩ�ֿ�");
	set("exits",([ /*sizeof()==1 */
	"down" : __DIR__"room2",
 ]));
	set("no_clean_up", 1);
  set ("long", @LONG
��ѩ�Ե��Ӷ������ĵط�������˵��������������Ҫ�ı��ء�
LONG);

  set("light_up", 1);
	set("no_fight",1);
  setup();
}
