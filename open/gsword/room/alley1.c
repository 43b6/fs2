#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "С��");
	set("long", "����ʯ�̳ɵ�С·��ƽʱ�������˾��������Գ���һ�ص���̦��������
����Ҳ��һ�ξ��룬����ƽʱҲ����������ɨ��
");

  set("exits", ([ /* sizeof() == 4 */
  "southeast" : __DIR__"alley",
  "east" : __DIR__"plain2",
  "northwest" : __DIR__"alley2",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
