// Room: /u/d/dhk/questsfan/room26
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""HIG"ʤ��"WHT"��"NOR"");
  set ("long", @LONG
����������Ĺؿ�������ȫ����ǿ�Ķμҵ�ϵ---
�δ��������أ������ţ�ʮ�ʻ��¡��ֳ֣���Ǿ��ȡ�
���Ҿ�ͨ��������ѧҪ�塣������پԼ��������������
����ʤ����ϵ�һ��ɽ��ǰ���˵���ȫ����ƽ���ĵط�
���ܵ�һ��һľ����ӳ�������ľ���Ҫ�ж���ͨ���ж�
��ͨ��������ȫ�Ȳ���ǿ�ҵĶԱȡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room27",
  "eastdown" : __DIR__"room25",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/muan.c" : 1,
]));
  set("outdoors", "/u/d");
set("no_transmit", 1);
  setup();
}
int valid_leave(object who,string dir)
{
if(who->query("marks/fan-finger")!=1)
   if(dir=="enter" && who->query("questsfan/quest_step")!=6)
     {
       message_vision(HIC"�δ�����������Ķ�$N˵��:��������������������ĵط�?����¾����뿪!!!\n"NOR,who);
       return notify_fail("�δ�����������Ķ���˵��:��������������������ĵط�?����¾����뿪!!!\n");

     }
    return :: valid_leave(who,dir);
}
