// Room: /open/capital/room/r69.c
#include "../../open.h"
#include <ansi.h>
inherit ROOM;

void create ()
{
    set("short",HIC"������"NOR);
  set ("long", @LONG
�������ȫ����ߵ�˾�������������¡�������ר�Ŵ���һЩ�ش󰸼�
���Լ��������������ڴ����µĸ�˾�����ţ������ﲻ�����������壬����
��͢�س���ֻҪ����������������������ѭ˽��
 
LONG);

  set("exits", ([ /* sizeof() == 1 */
   "south":"/open/capital/room/r15",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/officer/master_chen":1,
   "/open/capital/npc/catcher":2,
]));
  set("valid_startroom",1);
/*
  set("no_fight", 1);


  set("no_magic", 1);
*/
  set("light_up", 1);
  setup();
  call_other("/obj/board/chen_b.c","???");
}
