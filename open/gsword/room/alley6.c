#include <room.h>

 inherit ROOM;

void create ()
{
  set ("short", "С��");
  set ("long", @LONG
����ʯ�̳ɵ�С·��ƽʱ�������˾��������Գ���һ�ص���̦��������
����Ҳ��һ�ξ��룬����ƽʱҲ����������ɨ��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "northeast" : __DIR__"alley7",
  "south" : __DIR__"alley5",
  "east" : __DIR__"plain11",
]));
  set("outdoors", "/open/gsword/room");

  setup();
}
