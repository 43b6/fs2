#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "���пյ�");
	set("long", "��֪Ϊʲô��ï�ܵ������У������Ȼ��ݲ�����ʹ���ĳ�����̤ȥ,����
��������ؼ�Ӳ�ĺܣ�Ҳ�ѹ�ֲ���������������ˡ�
");

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"plain10",
  "west" : __DIR__"fair2",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
