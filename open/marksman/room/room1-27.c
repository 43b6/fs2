// Room: /u/f/fire/room/room1-27.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;33mǿ��֮��[2;37;0m");
  set ("long", @LONG
��������ܵ�ǽ�����������ٷ������кܴ���к�С�ģ�ȫ��
���Ƕ���ǰӢ��ͼ�񡣴��컨�崹�������Ӱڣ���ʱҡ���ŷ����δ�
�δ��������������֮Ȫ����һ������Ҳ���й�һ����
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room1-25.c",
  "west" : __DIR__"room1-24",
  "north" : __DIR__"room1-29.c",
]));
  set("objects", ([ /* sizeof() == 1 */
C_NPC"/bowman1.c" : 2,
]));

  setup();
}
