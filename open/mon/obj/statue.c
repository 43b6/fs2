inherit ITEM;
#include <ansi.h>

void create()
{
    set_name("Ů�ӵ���",({"statue"}));
    set("long","
һ������������Ů�ӵ��񣬴ӵ�������ϣ�����Ը��ܵ�һ���ڴ�������������
���ƺ����ڵȴ�����������������������ᣬ������ô��ȴҲ�β�������������
�����в���ͬ���Ĵ󷢣�һʱͻȻ�뵽˵����������÷���(cast)���ٻ�������
�����...\n");
    set("unit","��");
    set("value",100);
    set("no_get",1);
    set("no_sac",1);
    set("no_auc",1);
    set_weight(500000);
    setup();
}
void init()
{
        add_action("do_cast","cast");
        add_action("do_cast","co");
        add_action("do_cast","con");
        add_action("do_cast","conj");
        add_action("do_cast","conju");
        add_action("do_cast","conjur");
        add_action("do_cast","conjure");
}
int do_cast(string arg)
{
    object me = this_player();
        object ob = this_object();
        object fly = new("/open/mon/obj/soul");

    if(me->query_temp("icestorm/lovestory")==3
    && arg == "invocation on statue") {
        message_vision(HIW"$N�૵����˼������"HIC"\n
һ����紵����"HIM"����"HIC"���ƻ������������\n\n",me, ob);
        fly->move(environment(me));
        me->delete_temp("icestorm/lovestory");
        me->set_temp("icestorm/ice_spell",1);
        return 1;
    }
    else if(me->query("get_icestorm")==1
    && arg == "icestorm on statue") {
        message_vision("$Nʩչ����ϰ�õġ���ѩ�籩������ʱһ����ҡ�ض���\n
ֻ����ѩ�ཱུ����������һ�Ű��������˵���֮����֮����һ���������ٸ�...\n\n",me);
        message_vision("�ٸ���$N˵������л����֮����ū�ҵ��Ա���֮������Э��$N...\n
˵��㽫˫������$N�������\����������������...\n
$Nֻ�е�˵���������ã��ſ�����л��ȴ�²����������...\n
ͻȻ�䣬�ٸ������ջأ�˵����ū������$N�ɾ͡���ѩ�籩��֮������������$N������;���ʹ˸�ǣ�\n\n
һ�����ƮȻ��������ȫ����ס�ٸ�֮���ֽ���ɢȥ�����ٸ��Ѳ�֪ȥ��η�...\n"NOR,me);
        me->set("allow_icestorm",1);
        me->delete("get_icestorm");
        destruct(ob);
        return 1;
    }
    else return notify_fail("ָ���ʽ��cast <����> [on <Ŀ��>]\n");
}
