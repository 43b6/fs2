#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "С��");
	set("long", "����ʯ�̳ɵ�С·��ƽʱ�������˾��������Գ���һ�ص���̦��������
����Ҳ��һ�ξ��룬����ƽʱҲ����������ɨ��
");

  set("exits", ([ /* sizeof() == 3 */
  "north"     :__DIR__"alley6",
  "south" : __DIR__"alley4",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
