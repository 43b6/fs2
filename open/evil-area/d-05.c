inherit ROOM;
#include <ansi.h>

void create()
{
        set("short",YEL"ɭ��"NOR);
        set("long",@LONG
�����Ѿ�����ľ�ʰ����θ����ס��, ��������ʱ��·����, ��
�����ǰ��, վ����һ��ľ��ľ�������ܵ��硢��ˮ����Ϯ���Ѿ�
����е�߻��Ͼɣ������У�ż���ᴫ������ĺ����������������
�����Ų����ƵĶ���...
LONG);
        set("item_desc",([
"ľ��":"����ϸ��ע����ľ��, �����������ƺ�ȱ����һ�Ĳ���...\n",
]));
        set("exits",([
"south":__DIR__"d-04",
]));
        set("objects",([
__DIR__"npc/wood-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        set("wood-area",1);
        setup();
}

void init()
{
add_action("do_search","search");
}

int do_search(string arg)
{
object me=this_player();
        if(!arg || arg!="ľ��")
                return 0;
        tell_object(me,"
�㷢��ľ��ȱʧ��һֻ���֡�\n");
        me->set_temp("evil/king/statue_search_wood",1);
        return 1;
}

