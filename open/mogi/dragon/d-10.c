//by Casey
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", HIB"�ص׺���"NOR);
  set ("long", @LONG
Ǳ�����ĵĺ��У�����͸������ɫ��ˮ�
���ס�һ��ˮ������ , ��һ��ͷ��, ʲô������
û��, ֻ���龪һ��..

LONG);
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
 "up" : __DIR__"d-9",
 
 ]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}

