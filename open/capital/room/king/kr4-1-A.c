// Room: /open/capital/room/king/kr4-1-A
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����ͨ��");
  set ("long", @LONG
�Ӵ˴����������ߵ������������Ƕ�����̫��ͨ���ʹ��ıؾ�֮·
���˴����������������������š�
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"kr4-2",
//  "west" : "/open/capital/room/sroom/room21",
]));


  setup();
}
int valid_leave(object who,string dir)
{
  if(dir && present("soldier",environment(who)))
  {
        if((who->query("class")=="officer" && who->query_temp("can_in")==1) || (who->query("class")=="taigan"))
        {
        return :: valid_leave(who,dir);
        }
        else
        {
  return notify_fail("�ʳǽ�����˵��:������?!�ܵõ���?\n");
        }
  }
        return :: valid_leave(who,dir);
}
void init()
{
        add_action("do_exert","exert");
}
int do_exert(string str)
{
 object me;
 me=this_player();
 if(str=="roar"){
 message_vision(HIC"�ʹ����������Ķ���˵:�ʳǽ�������������������������!!!\n"NOR,me);
 return 1;
                }
 else
 {
 return 0;
 }
}
