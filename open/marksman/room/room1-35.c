 // Room: /u/f/fire/room/room1-35.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
���ֵĽ�ͷ�����ҵ���������ʾ����ɳ�Ǹ�ԣ����Ϣ��С������
Ϊ�Լ��Ķ����������ѽ������������������գ���ɳ�ǵ����ڶ���
��һ��΢Ц�����߹���
LONG);

  set("objects", ([ /* sizeof() == 2 */
C_NPC"/girl" : 1,
C_NPC"/oldman" : 1,
]));
  set("outdoors", "/u/f");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room1-36.c",
  "east" : __DIR__"room1-34.c",
]));

  setup();
}
