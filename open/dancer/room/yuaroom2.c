//room:/open/dancer/room/start.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIC "�°����С��" NOR );
  set ("long", @LONG

����һ�����µ�С�ݣ�����Ĳ�����Ȼ��ª�����Բ�ʧ
����ŵ�Ʒζ���������һ����Ⱦ�������֪�����˱�
��һλ�������ŵ��ˣ�

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south"     :"/open/dancer/room/yuaroom.c",

]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/master_yuaa.c" : 1,
]));

  setup();
 
}
