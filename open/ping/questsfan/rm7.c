// Room: /u/d/dhk/questsfan/rm7
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "ɽ��"HIY"ږ"NOR"·");
  set ("long", @LONG
��Խ��Խ�ߣ������ܵ���ҲԽ��ԽŨ���������ζ����
Χ��Σ�������ҲԽ��Խ�ߡ����ܴ������˾��ʵ�������
 ������ɳɳ������   �����𡷩�   ������ɳɳ������ 

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "eastup" : __DIR__"rm8.c",
  "eastdown" : __DIR__"rm6",
]));
  set("outdoors", "/u/d");

  setup();
}
