// Room: /u/f/fire/room/room1-32.c
#include <ansi.h>
#include <marksman.h>
inherit ROOM;

void create ()
{
  set ("short", "[32m��[2;37;0m");
  set ("long", @LONG
����һ�䳤ɳ�������������ס���񷿣��㿴��һ����ª��С��
��һ��ľ����ɵ�С���ӣ����ķ��������ӡ������Ϸ���һЩС���
�����ƺ���������������������
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room1-10",
]));
  set("objects", ([ /* sizeof() == 2 */
C_NPC"/woman" : 1,
C_NPC"/man" : 1,
]));

  setup();
}
