#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "���пյ�");
	set("long", "��֪Ϊʲô��ï�ܵ������У������Ȼ��ݲ�����ʹ���ĳ�����̤ȥ,����
��������ؼ�Ӳ�ĺܣ�Ҳ�ѹ�ֲ���������������ˡ�
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"wriver",
  "south" : __DIR__"wplain3",
  "east" : __DIR__"wfair1",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
