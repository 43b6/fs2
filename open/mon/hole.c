#include <ansi.h>
inherit ROOM;

void create ()
{
        set ("short", "ʯѨ");
        set ("long", @LONG
���ƿ�����֮���߽��������Ѩ��������ͷһ�����ⶼû�У�
���ֲ�����ָ��������̸Ҫ�鿴���ܵĻ����ˣ�����������������ʱ
����֪�����к����ߵ���ʲô�����������в������ţ�Ҫ���������
һ����Դ�ͺ���...
LONG);
        set("exits", ([
        "out"    : __DIR__"mon48",
]));
        setup();
}

void init()
{
        add_action("con_light","conjure");
        add_action("con_light","conjur");
        add_action("con_light","conju");
        add_action("con_light","conj");
        add_action("con_light","con");
        add_action("con_light","co");
}

int con_light(string arg)
{
        object me = this_player();
        object room = this_object();
        object ske = new("/open/mon/obj/skeleton");
        object fire = new("/daemon/class/taoist/gmagic/obj/lightfire");
        
        if(me->query_temp("icestorm/ice_spell")==5)
        {
        if(!arg || arg != "lightfire") return 0;
                message_vision("
$N��ָһ�ȣ������һö$nƮ�ڿ��С�\n
$N��$n�Ĵ������գ�����Ȼ���ֽ����о����ŵ��۵ĹǺ�...\n\n",me, fire);
                fire->move(me);
                ske->move(environment(me));
                me->set_temp("icestorm/ice_spell",6);
                return 1;
        }
}
