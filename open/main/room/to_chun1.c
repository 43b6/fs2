inherit ROOM;
#include <ansi.h>
 
void create ()
{
  set ("short", "ƽ��");
  set ("long", @LONG
�����ڵ�·��, �о�΢����, �ǳ��泩, ��ߵ����Ʊ仯��ǧ
�·���һ�����ʵ���̨��..
    �㷢��·����һֻ�ֵֹ��в�è..

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"maiu-1.c",
]));
  set("outdoors", "/open/main/room");

  setup();
}

void init ()
{
  object me=this_player ();
  if ( me->query_temp("six_sp_quest") == 9)
      {
       message_vision(HIG"\nͻȻ��, �㷢�ֲ�Զ���и�Сɽ��, ��е�����, ��æ��ȥ�鿴.\n\n"NOR,me);
       me->move("/open/main/mi_room/mi01.c");
      }
}
