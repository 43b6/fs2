inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "ɽ��СѨ");
        set ("long", @LONG
ͨ���ľ�ͷ����������һ������СѨ������ȴ������ʲô������
���������Ȼ��������������޵�˻����������������Ҫ�����Ѱ
��һ����Ҳ���ܹ����ҵ�����һ����·��
LONG);
        set("item_desc", ([ /* sizeof() == 1 */
        "button" : "����һ�������ڶ����еĻ��أ������������(push)����\n",
]));
        set("exits", ([ /* sizeof() == 4 */
        "south"      : __DIR__"mon53",

]));
        setup();
}
void init()
{
        add_action("do_search", "search");
        add_action("do_push","push");
}
int do_search(string arg)
{
        object me=this_player();

        if(me->query_temp("mon/hole-search"))
        return 0;

        else{
        tell_object(me,"����һ������Ѱ�����ڶ���һ��������һ������(button)��\n");
        me->set_temp("mon/hole-search",1);
        return 1;
        }
}
int do_push(string str)
{
        object me;
        me = this_player();
        if(me->query_temp("mon/hole-search")!=1)
        return 0;

        if(!str || str != "button")
        return notify_fail("������ʲô��\n");
        else if(!query_temp("have_turn"))
        {
        message_vision("$N����İѻ�����ǰ���͡�\n",me);
        tell_room(this_object(),"�㷢��ǰ����ɽ����һ���Ż����Ĵ򿪡�\n");
        set("exits/enter",__DIR__"mon30");
        set_temp("have_turn",1);
        me->delete_temp("mon/hole-search");
        remove_call_out("do_closed");
        call_out("do_closed",20);
        return 1;
        }
        
}

void do_closed()
{
        delete_temp("have_turn");
        delete("exits/enter");
        tell_room(this_object(),"���ظ��ܲ���ѹ����ʯ�ڵ��ž��������Զ�����������\n");
}


