// Room: /open/capital/room/king/kr4-4-2
#include <ansi.h>
inherit ROOM;

void create ()
{
  set("short","��ʥ���ڲ�");
  set ("long", @LONG
�������ǳ�ʥ���ڲ�, ���������ǻʵ۽Ӽ��ٹٵĴ��, Ϊ�˱���
��������������˻���, ���˳�͢�������Ͻ�����.
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"kr4-4-1",
  "north" : __DIR__"kr4-4-3",
]));

  setup();
}

int valid_leave(object me,string dir){
  if(dir=="north" && present("soldier",environment(me)) && !wizardp(me)){
        if(me->query("class")=="officer")
          return 1;
        else
          return notify_fail("��ǰ��ʿ����ͷ�ֵ���������ǰ,�ݺݵĵ�����˵��:
��������ʥ���������������ĵط� \n");
    }
    return 1;
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
