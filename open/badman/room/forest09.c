// Room: /u/p/powell/room/forest09.c
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
  BAD_NPC"pangolin.c" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 4 */
  "west"  : __DIR__"forest06",
  "south" : __DIR__"forest05",
  "north" : __DIR__"forest08",
  "east"  : __DIR__"forest11",
]));

  setup();
}
