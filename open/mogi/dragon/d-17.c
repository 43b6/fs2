//by Casey
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", HIR"����Ͽ"NOR);
  set ("long", @LONG
�����Ĵ���խ��ͨ�˵�ɽ�� ,������һ��ȫ�µ�
�ط��������������� ,��ؽ��� ,���Ҵ������о޴�
�������צ��

LONG);
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
 "out" : __DIR__"d-18",
 
 ]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}


