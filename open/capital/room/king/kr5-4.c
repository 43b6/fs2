// Room: /open/capital/room/king/kr5-4
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�ʳǽ���");
  set ("long", @LONG
������Ǵ��ڻʳǽ���, �ڴ˵ز��ô�������, �����Ľ��ݼ�ͨ
����ʥ��, ���糯ʱ���������ڴ˵صȴ�ʥ�ϴ���, �ڸ���ͨ��
�н�������Ѳ��, �����߿���ͨ������԰, ��������ͨ������, ��
�߲�Զ����Ϊ�ʹ�����.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"kr5-3",
  "south" : __DIR__"kr6-4",
  "east" : __DIR__"kr5-5",
  "north" : __DIR__"kr4-4-1",
]));
  set("no_transmit", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/open/capital/npc/taigan1" : 2,
]));
  set("outdoors", "/open/capital");

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
