#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "С��");
	set("long", "����ʯ�̳ɵ�С·��ƽʱ�������˾��������Գ���һ�ص���̦��������
����Ҳ��һ�ξ��룬����ƽʱҲ����������ɨ��
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"alley5",
  "south" : __DIR__"bridge",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
