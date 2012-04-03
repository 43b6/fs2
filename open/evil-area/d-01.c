inherit ROOM;
#include <ansi.h>

void create()
{
        set("short",HIC"����"NOR);
        set("long",@LONG
�����Ѿ��������ʰ����θ����ס�ˣ���������ʱ��·���⣬��
��ǰ�ĵ��Ϸ�����һ���а�����ʯ�飬������д����������������
������֣�������ǰ��δ���������壬
LONG);
        set("item_desc",([
"ʯ��":"����ϸ��ע����ʯ��, �ƺ�û��ʲô���صġ�\n",
"����":"������մ�м�������ɫ��Һ�壬�ƺ������÷Ź�ʲô������\n",
]));
        set("exits",([
"north":__DIR__"d-02",
]));
        set("objects",([
__DIR__"npc/water-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        set("water-area",1);
        setup();
}

void init()
{
add_action("do_search","search");
add_action("do_move","move");
}

int do_search(string arg)
{
object me=this_player();
        if(!arg || arg!="����")
                return 0;
        tell_object(me,HIY"
����ϸ����Ѱ�Ű����ڲ���ͻȻ������һ����ֵĵط���

        �������ƺ�����һ���ռ䣬���治ʱ�Ĵ����������

        ��������Խ�ĳ��Һ��������ڡ�\n"NOR);
        me->set_temp("evil/king/water_search",1);
        return 1;
}

int do_move(string arg)
{
object me,ob;
        me=this_player();
        ob=this_object();
        if(!arg || arg!="ʯ��")
                return 0;
        if(!me->query_temp("evil/king/water_search"))
                return notify_fail("�㲻���ø����������֣��ƶ��˰��죬ʯ�鶯��������\n");
        if(!ob->query_temp("can_move"))
        {
                message_vision("$Nʹ���˳��̵����������ƶ�ʯ�飬ʯ��ȴ��Ҳ������\n",me);
                return notify_fail("���۵�һֱ����\n");
        }
        message_vision(HIC"����$N�ƶ���ʯ�飬�����ڰ����ڵ�"HIB"ˮѪ"HIC"�����Żζ���������

        һ˲��"HIB"ˮѪ"HIC"ͻȻ���ǳ���������$N���Ű�ס�����밼���ڡ�\n\n"NOR,me);
        ob->delete_temp("can_move");
        me->delete_temp("evil/king/water_search");
        message_vision("$N���Ϸ���ͨ�����������������\n",me);
return 1;
}
