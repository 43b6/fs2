// open/killer/room
// 2001.11.5 �޸ģ������������յ��˴�search�������Է���lu�Ķ���
// �˼䷿������õ�  me->move("/open/killer/ninja/sonrm.c");
#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","��Ҷ��");
  set ("long", @LONG
�����Ǻ�������̳��������Ҳ�Ǻ�������ǿ�ĺ�Ҷ��ɱ������ڵء�
�������ڴ˴�����ʱ�������������������Լ���ר��ɱ�֡�
һ��Ұ�Ĳ�����Ҷ��ɱ֮�£�����Ҷ��ɱ������Ϊ�⡣
��Ϊ������������ɢ�����İ���������Ҷ��ɱ����Ҫ�ġ�
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east":__DIR__"redr3",
  "north":__DIR__"redr1",
]));

  set("objects",([
        "/open/killer/npc/rednpc3.c" : 1,
        ]));  
  setup();
}

void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object me=this_player();
  int max;

  if (me->query_temp("firstpart") == 2 )
  {
    message_vision("$N��Ϊ�Դ˴��ĸе��ǳ����ɣ���Ȼ������һ�����ء�\n", me); 
    message_vision("$N����һ������Ѻ��ȥ...................\n", me); 
    tell_object(me,"һ���ײ�����㵯�ɣ���������֮��һֱ׹�䡣��������\n");
    me->move("/open/killer/ninja/find/sonrm.c");
    return 1;
  }
  else 
    return 0;
 }
