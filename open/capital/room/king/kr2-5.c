// Room: /open/capital/room/king/kr2-5
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�ʳǽ���");
  set ("long", @LONG
������Ǵ��ڻʳǽ���, �ڴ˵ز��ô�������, ��������Ѳ�߷ǳ�
����, ʹ��о�������������ڻʳǵ���Ժ, ����ı����ǵ���������
���ǵ�, �����߿�ͨ���е¹�, �����߿�ͨ�����µ�.
LONG);

  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"kr2-4",
  "east" : __DIR__"kr2-6",
  "north" : __DIR__"kr1-3",

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
