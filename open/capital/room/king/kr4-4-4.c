// Room: /open/capital/room/king/kr4-4-4.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�ߵ�");
  set ("long", @LONG
����ͨ�����µ�ļ���������ߵ�,�����컨�����ûƽ�����,������
�����ǻʹ���Է,����ô��Ĳ�����������Щ��,�ߵ����ҷ�ͨ�����鷿
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"kr4-4-3.c",
  "east" : __DIR__"kr4-4-5.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/taigan1" : 2,
]));
  set("light_up", 1);

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
