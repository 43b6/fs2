#include <room.h>

inherit ROOM;
void do_west();
void create()
{
      set("short","ѩȪ���");
      set("long",@LONG
��ǰ������һ��ɽȪ����ɽ������������Ȫˮ���ഫѩȪȪˮ
�������ħ����������ѩȪ���д�˵�е��ػ�ʥ�ް����ţ���
��ʥˮ��λ�õ������ǣ�Ҳ��һ�����⣬����Ӣ�ۺ��ܣ�����
ѩȪ���޹�������
LONG);
        set("exits", ([
		"east":__DIR__"water2",
        ]) );
	set("light_up",1);
	set("objects",([
	"/obj/source/rose_flower":1,
	]));
        setup();
}
void init()
{
       add_action("do_enter","enter");
}
int do_enter(string str)
{
     if(str!="water")
         return 0;
     if(!present("snow token",this_player()))
         return notify_fail("Ҫ��ѩȪʥ����ܽ���ѩȪ��\n");
     tell_object(this_player(),"���߽�Ȫˮ֮�С�\n");
      this_player()->move(__DIR__"water3");
     return 1;
}
