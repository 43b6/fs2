// Room: /u/f/fire/room/room1-25.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;33mǿ��֮��[2;37;0m");
  set ("long", @LONG
���˸о����ƷǷ��Ľ�������Χǽ��Ʈ���ź�ɫ�����ģ�������
��վ������ɫ���硢��׵����ס����ź��ص�ͷ��������ʮ�����
ʿ����h���ŵ���Ů�����������ġ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room1-23",
  "north" : __DIR__"room1-27.c",
]));
  set("objects", ([ /* sizeof() == 1 */
C_NPC"/bowman" : 2,
]));

  setup();
}
