// X'mas gift by nike 12/5/2001
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(HIR"ʥ��С����"NOR, ({"X'mas sock","sock"}));
    set_weight(100);
    set("no_sell",1);
    set("no_give",1);
    set("no_put",1);
    set("no_auc",1);
    set("no_get",1);
    set("no_drop",1);
    set("unit","ֻ");
    set("long",@LONG
һֻʥ�����ͼ�����ʥ��С���࣬������<open_sock>��������õ�ɶ����ࡣ�
LONG);
}
void init()
{
    add_action("do_open", "open_sock");
}
int do_open(string arg)
{
        object me = this_player();
    object ob2, ob = this_object();
        int force = (int)me->query_skill("force",1);
        
        if(me->query("id") != ob->query("geter"))
                return notify_fail(HIR"�ͼ�С�����������������ô����͵�˼ҵ�С�����֣�\n"NOR);
        switch(random(7))
        {
        case 0:
                arg = HIW"����ʮ��"NOR;
                ob2 = new("/obj/money/pearl")->set_amount(10);
                ob2->move(me);
                break;
        case 1:
                arg = HIR"�������"NOR;
                me->add("standby",1);
                break;
        case 2:
                arg = HIG"Ǳ��ʮ���"NOR;
                me->add("potential",100000);
                break;
        case 3:
                arg = HIC"����ֵ�����"NOR;
                me->add("combat_exp",50000);
                break;
        case 4:
                arg = HIB"��л�ݹ�һ��"NOR;
                ob2 = new("/obj/gift/x'mas/obj/paper")->move(me);
                break;
        case 5:
                arg = HIM"����һ���"NOR;
                me->add("score",10000);
                break;
        case 6:
                arg = HIM"�����ڹ���ʮ��"NOR;
                me->set_skill("force",force+10);
                break;
        }
                message_vision(HIW"$N���ĵĴ�С���࣬������ͷԭ���ǡ�"+arg+"���ڣ�\n"NOR,me);
                me->set("gift/x'mas/get_gift",1);
                destruct(ob);
                return 1;
}

