// Room: /u/f/fire/room/room1-15.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
���Ź�ɫ����ĳ�ɳ�ֵ��������ֵ�ȫ���ɴ���ʯ���ư����̳�
���൱ƽ���ҿ�����ͷ���������ò����֣����Եĵ��̣�С������
��������Ϊ��ֵ������ٻ�����
LONG);

  set("objects", ([ /* sizeof() == 1 */
C_NPC"/woman" : 1,
]));
set("outdoors","/open/marksman");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room1-9",
  "east" : __DIR__"room1-16.c",
]));

  setup();
}
