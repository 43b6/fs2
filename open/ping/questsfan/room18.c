// Room: /u/d/dhk/questsfan/room18
inherit ROOM;
#include <ansi.h>
#include <room.h>
#include </open/open.h>

void create ()
{
  set ("short", "���ȼ��");
  set ("long", @LONG
�˵ؾ��Ǵ����еľ��ȵڶ��أ���ش������жΡ���
һλ��״������ء������¹������ֶ����ǵ�ɽ���ϲ�
����ʽ��������������������ع��˱���һλ���հɣ���
����Ƭɽ������һ��������Ū���������Ϻ�塣ֻ����
һ���󽣾���˫��չ����Ʈ�缱���彣�ơ����⻯��һ��
����������̾Ϊ��ֹ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"room19",
  "eastup" : __DIR__"room17",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shing.c" : 1,
]));
  set("outdoors", "/u/d");
set("no_transmit", 1);
  setup();
}
int valid_leave(object who,string dir){
if(who->query("marks/fan-finger")!=1)
   if(dir=="westdown" && who->query("questsfan/quest_step")!=4)
     {
     message_vision(HIC"�Ϲ�ѫ�����Ķ�$N˵��: ���Ȳ��������������ĵط�?����ݿ����ȥ!!\n"NOR,who);
       return notify_fail("�Ϲ�ѫ�����Ķ���˵��:���Ȳ��������������ĵط�?����ݿ����ȥ!!\n");
     }
   return :: valid_leave(who,dir);
}
