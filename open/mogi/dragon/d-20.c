//by Casey
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", HIC"ӭ��̨��"NOR);
  set ("long", @LONG
ð������ǿ���Ϯ�� ,�����������һƬ�ߵء���
ӭ������Ŀ���������۾����������� ,�ں�Х�ķ�
��֮�� ,�е��Լ�����С..

LONG);
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
 "westdown" : __DIR__"d-19",
 
 ]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}


