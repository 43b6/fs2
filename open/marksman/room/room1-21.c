// Room: /u/f/fire/room/room1-21.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", GRN"��ɳ��"NOR);
  set ("long", @LONG
ӳ�ڵ�·�ϵ���Ӱңҷ�ڶ��ţ�·�ߵ���ȡ�ݺ�Ұ����С�Ϻ�Ц
ɢ���������Ļ��㣬���˸о��ǳ�����ˬ�����ƺ����Կ�����ɳ�ǵ�
�����������й��š�
LONG);

  set("exits", ([ /* sizeof() == 2 */
"north" : __DIR__"room1-22",
"south" : __DIR__"room1-14",
]));
set("outdoors","/open");

  setup();
}
