// Room: /open/badman/room/forest08.c
// written by powell 96.4.26@FS

#include </open/open.h>

inherit ROOM;

void create ()
{
  set ("short", "����ɭ��");
  set ("long", @LONG
���߽���һ��Ƭɭ��֮�У�����������ŷ������ܵľ����ƺ�
һֱ��û�����������ȫʧȥ�˷���ԭ��������������Ķ���ɭ
�֣���˵ֻ�ж��˹ȵ���֪�����˳��ͨ����Ƭɭ�֡�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  BAD_NPC"pard.c" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"forest10",
  "west"  : __DIR__"forest11",
  "south" : __DIR__"forest05",
  "east"  : __DIR__"forest09",
]));

  setup();
}
