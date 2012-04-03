inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "������");
        set ("long", @LONG
���������죬��һ��ʯ��վ������ߵ㣬���߽�һ������Ȼ��һ
��Ů��ʯ������Ŀ����а����ŵ���һ�ֹ¶��ĸо�����������
֮�У����������ĳ��飬����������ĵȴ���ʱ������ţ����µĿ�
����������Ů��ʯ��Ҳ����ס��������ĴݲС�
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "down"    : __DIR__"mon40",
]));
        set("objects",([
        __DIR__ "obj/statue.c":1,
]));
        setup();
}

void init()
{
        add_action("turn_statue","turn");
}
int turn_statue(string arg)
{
        object me = this_player();
        object room = this_object();
        object soul = present("die soul",room);
        
        if(me->query_temp("icestorm/ice_spell")==4)
        {
        if(!arg || arg != "statue")
                return notify_fail("����ת��ʲô��\n");
                message_vision("
$N"HIR"�þ�ȫ����������������Ӳ������ת��һȦ��"HIY"\n
��Ȼ�ӵ��洫����¡¡����������������һ��ֱ�����߶�Ĵ󶴡�\n
"NOR,me);
                message_vision(HIC"�����Ȼ˵������...������$N��ֻ�ܿ��Լ��ˣ�ū�Ҹ�����...\n"NOR,me);
                room->add("exits/enter","/open/mon/hole");
                me->set_temp("icestorm/ice_spell",5);
                call_out("del_exit",30,me);
                destruct(soul);
                return 1;
        }
}
int valid_leave(object me, string dir)
{
        object guard;
        object ob = this_object();

        if(dir == "enter" && !me->query_temp("icestorm/ice_spell")==5)
                return notify_fail("���꽫�����£���˵��������������������ū��֮�ˣ���ˡū������...\n");
                return ::valid_leave(me,dir);
}
int del_exit(object me)
{
        object ob = this_object();
        
        tell_room(me,HIR"��Ȼ���ڿ����һ���������ֹ�������...\n"NOR);
        ob->delete("exits/enter");
}
