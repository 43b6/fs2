// Room: /open/badman/room/forest04.c
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
  BAD_NPC"gibbon" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 4 */
  "west"  : __DIR__"forest05",
  "south" : __DIR__"forest07.c",
  "north" : __DIR__"forest08.c",
  "east"  : __DIR__"forest03",
]));

  setup();
}
