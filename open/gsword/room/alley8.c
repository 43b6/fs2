#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "С��");
	set("long", "����ʯ�̳ɵ�С·��ƽʱ�������˾��������Գ���һ�ص���̦��������
����Ҳ��һ�ξ��룬����ƽʱҲ����������ɨ��
");

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"alley7",
  "south" : __DIR__"plain13",
]) );

  set("outdoors", "/open/gsword/room" );
  set("objects",([
  "/open/gsword/mob/white_tiger.c": 1,
  ]));


  setup();
}
