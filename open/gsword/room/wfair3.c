#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "���пյ�");
	set("long", "��֪Ϊʲô��ï�ܵ������У������Ȼ��ݲ�����ʹ���ĳ�����̤ȥ,����
��������ؼ�Ӳ�ĺܣ�Ҳ�ѹ�ֲ���������������ˡ�
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"wplain12",
  "south" : __DIR__"wriver5",
  "east" : __DIR__"wfair2",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
