//by Casey
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", HIW"��������"NOR);
  set ("long", @LONG
���ѵĿ���ɽ�ڼ�͹���ʯ�� ,�����������ɽ
�¡�Ũ���ܲ��� ,������˸�ŵ�� ,��Χ����ľ��
�ǽ��ڵĶ�֦�й�

LONG);
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
 "climb" : __DIR__"d-7",
 
 ]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}


