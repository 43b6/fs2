#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "���пյ�");
	set("long", "��֪Ϊʲô��ï�ܵ������У������Ȼ��ݲ�����ʹ���ĳ�����̤ȥ,����
��������ؼ�Ӳ�ĺܣ�Ҳ�ѹ�ֲ���������������ˡ�
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"plain9",
  "west" : __DIR__"plain7",
  "east" : __DIR__"fair3",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
