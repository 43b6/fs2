#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "���пյ�");
	set("long", "��֪Ϊʲô��ï�ܵ������У������Ȼ��ݲ�����ʹ���ĳ�����̤ȥ,����
��������ؼ�Ӳ�ĺܣ�Ҳ�ѹ�ֲ���������������ˡ�
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"wriver1",
  "south" : __DIR__"wplain4",
  "west" : __DIR__"wfair",
  "east" : __DIR__"wplain6",
]) );

  set("outdoors", "/open/gsword/room" );

   set("objects",([
	"/open/gsword/mob/boar.c" : 2,
   ]));

  setup();
}
