#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "С����");
	set("long", "һ����򵥲�����С�ţ�խ�Ľ�����������ͨ��������һ����Ϫ����������
����ˮ����ʹ�㾫����Ϊ֮һ������ǰ���߾����ɽ��ɵĺ�ɽ�ˡ�
");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"alley3",
  "north" : __DIR__"alley4",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
