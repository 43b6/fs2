inherit ROOM;
#include <ansi.h>

void create()
{
        set("short",HIY"ɳĮ"NOR);
        set("long",@LONG
�����Ѿ���ɽ�ڳʰ����θ����ס��, ��������ʱ��·����, ��
�����ǰ��, ����һ����̾�����ľ�ĵ���, ��״�·���һ������, 
�����ֳ��������ͷ��, �������, ����Ժ����Եĸо�����������
�����һ��ѹ�ȸ�, ׯ�϶��ྲ�ĸо���������������������ĵ�
����, ����, ��ȴͻȻ���ֵ���·������ƶ���...
LONG);
        set("item_desc",([
"����":"����ϸ��ע���ŵ���, Խ��Խ���ò��Ծ�...\n",
]));
        set("exits",([
"south":__DIR__"d-13",
]));
        set("objects",([
__DIR__"npc/earth-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        set("earth-area",1);
        setup();
}

void init()
{
add_action("do_search","search");
add_action("do_pull","pull");
add_action("do_push","push");
}

int do_search(string arg)
{
object me=this_player();
        if(!arg || arg!="����")
                return 0;
        tell_object(me,HIW"
�㷢�ֵ���ĵ��̲��ֲ�û����ȫ�ŵ�, Ҳ����˵, ������Ư���ŵ�!!

������ϸ�Ĺ۲���һ��, ������������ƺ���һ��ͨ����\n"NOR);
        me->set_temp("evil/king/statue_search_earth",1);
        return 1;
}

int do_push(string arg)
{
object me=this_player();
        if(!arg || arg!="����")
                return 0;
        if(!me->query_temp("evil/king/statue_search_earth"))
                return notify_fail("�㲻���ø��������ƣ����˰��죬���񶯶�������\n");
        message_vision("$Nʹ���˳��̵��������ŵ��񣬵���ȴ��Ҳ������\n",me);
return 1;
}

int do_pull(string arg)
{
object me,ob;
        me=this_player();
        ob=this_object();
        if(!arg || arg!="����")
                return 0;
        if(!me->query_temp("evil/king/statue_search_earth"))
                return notify_fail("�㲻���ø��������������˰��죬���񶯶�������\n");
        if(!ob->query_temp("can_pull"))
        {
                message_vision("$Nʹ���˳��̵��������ŵ��񣬵���ȴ��Ҳ������\n",me);
                return notify_fail("���۵�һֱ����\n");
        }
        message_vision(YEL"������̵Ĳ��֣��ܵ����������죬�������ڿա�

$N��������ʧ����æ��������λ�ڵ�����̵�ͨ����\n\n"NOR,me);
        ob->delete_temp("can_pull");
        me->delete_temp("evil/king/statue_search_earth");  
        message_vision("$N������ͨ�����������\n",me);
return 1;
}

