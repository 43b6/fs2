// Room: /u/f/fire/room/room1-20.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", HIY"���˾���"NOR);
  set ("long", @LONG
�����ǹ����ۻ�ĳ�����Ҳ�ǹ����ֵĹ������ڡ�������������
�������Իͣ��Ե�������ˡ����ϵ�̼�������д�ɵĴ��֣������
�������������ƺ������ó�Ϊ�����ֵ�һԱ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
C_NPC"/master_b.c" : 1,
]));
set("outdoors","/open");
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room1-19",
]));

  setup();
}
