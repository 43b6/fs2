#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"��ڤ��"NOR"�ұ�");
        set("long",@LONG
���ⶼ�������ұڵĶ�������ס��, ���ƺ�
�Ҳ���·���Լ���ǰ��...
LONG);
        set("exits",([
        "south":__DIR__"g-r11",
        ]));
        set("no_transmit",1);
        setup();
}

void init()
{
add_action("do_search","search");
}

int do_search()
{
object me=this_player();
tell_object(me,"��ͻȻ�����˵�����һ���ص�!!\n");
set("exits/jump",__DIR__"g-s01");
return 1;
}

int valid_leave(object me,string dir)
{
if(dir=="jump")
message_vision(HIY"$N��Ȼ�����˵ص�!!\n"NOR,me);
delete("exits/jump");
return 1;
}