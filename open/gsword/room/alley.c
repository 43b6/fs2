#include <room.h>

 inherit ROOM;

void create ()
{
  set ("short", "С��");
  set ("long", @LONG
����ʯ�̳ɵ�С·��ƽʱ�������˾��������Գ���һ�ص���̦��������
����Ҳ��һ�ξ��룬����ƽʱҲ����������ɨ��
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "southeast" : __DIR__"lroad3",
  "north" : __DIR__"plain2",
  "east" : __DIR__"plain",
  "northwest" : __DIR__"alley1",
]));
  set("outdoors", "/open/gsword/room");

  setup();
}
