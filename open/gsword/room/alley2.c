#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "С��");
	set("long", "����ʯ�̳ɵ�С·��ƽʱ�������˾��������Գ���һ�ص���̦��������
����Ҳ��һ�ξ��룬����ƽʱҲ����������ɨ��
");

  set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"alley1",
  "north" : __DIR__"alley3",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
