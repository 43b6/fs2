#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "���пյ�");
	set("long", "��֪Ϊʲô��ï�ܵ������У������Ȼ��ݲ�����ʹ���ĳ�����̤ȥ,����
��������ؼ�Ӳ�ĺܣ�Ҳ�ѹ�ֲ���������������ˡ�
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"wplain9",
  "south" : __DIR__"wriver4",
  "west" : __DIR__"wfair3",
  "east" : __DIR__"wplain7",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
