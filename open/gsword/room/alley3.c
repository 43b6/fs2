#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "С��");
	set("long", "����ʯ�̳ɵ�С·��ƽʱ�������˾��������Գ���һ�ص���̦��������
����Ҳ��һ�ξ��룬����ƽʱҲ����������ɨ��
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"bridge",
  "west" : __DIR__"plain6",
  "south" : __DIR__"alley2",
]) );

  set("outdoors", "/open/gsword/room" );
  set("objects",([
   "/open/gsword/mob/bear": 2,
   ]));

  setup();
}
