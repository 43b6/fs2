#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "С��");
	set("long", "����ʯ�̳ɵ�С·��ƽʱ�������˾��������Գ���һ�ص���̦��������
����Ҳ��һ�ξ��룬����ƽʱҲ����������ɨ��
");

  set("exits", ([ /* sizeof() == 4 */
  "northwest" : __DIR__"alley8",
  "southeast" : __DIR__"alley6",
  "south" : __DIR__"plain11",
  "east" : __DIR__"plain13",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
