// Room: /u/d/dhk/questsfan/rm19
//________by dhk 2000.4.5__________
inherit ROOM;
#include <room.h>
#include <ansi.h>
#include </open/open.h>
void create ()
{
  set ("short", "[0;32m��������[1;37m��[1;36m����[2;37;0m");
  set ("long", @LONG
Խ��Խ��Խ��һ�����������֪��֮�С���Ƭ����������
���й������!!��������ϸһ��!!ԭ����ǰ����Զ����һ�����
������˵����ǧ������һ�㶼������ѽ!�����䲻�ߵ���Χ������
Ҫ����ʮ��׳���ų�˫�۲��ܻ����Ĵִ󡣶���֦Ҷïʢ�� ԭ��
�������ֵ�����Ŀ������ǰ�������ţ�����չ�����ġ�

LONG);

  set("exits", ([ /* sizeof() == 6 */
  "westup" : __DIR__"rm14",
  "westdown" : __DIR__"rm20",
  "southdown" : __DIR__"rm17",
  "northup" : __DIR__"rm13",
  "eastdown" : __DIR__"rm18",
  "eastup" : __DIR__"rm12",
]));
  set("outdoors", "/u/d");

  setup();
}
void init()
{
        add_action("do_search", "search");
}
int do_search()
{
          object who;
          who = this_player(); 
if( who->query("id") == "dhk" )
{
tell_object(who,"\n����ϸ�����������ҵ�һ�����ܵ���ڡ�\n\n");
          who->move(__DIR__"sproom");
}
          return 1;
}
int valid_leave(object who,string dir){
   if(dir=="search" && query("class")!="scholar")
     {
     message_vision(HIC"һ���˹����������$N˵��:���춴��
���������������ĵط�?�������!!\n"NOR,who);
       return notify_fail("һ���˹����������$N˵��:���춴����������
�������ĵط�?�������!!\n");
     }
   return :: valid_leave(who,dir);
}
