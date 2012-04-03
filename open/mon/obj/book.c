inherit ITEM;
#include <ansi.h>
inherit F_AUTOLOAD;

void create()
{
    set_name(HIW"��������"NOR,({"ice_spell book","book"}));
    set("long","
һ���ϾɵĹ��飬�����ƺ�������ʲô���صķ����������������ϰ(studying)һ��...
        \n");
    set("unit","��");
    set("value",100);
    set("no_give",1);
    set("no_drop",1);
    set("no_steal",1);
    set("no_get",1);
    set("no_put",1);
    set("no_sac",1);
    set("no_auc",1);
    set_weight(50);
    setup();
}
int query_autoload() { return 1; }
void init()
{
        add_action("do_learn","studying");
}

int do_learn(string arg)
{
        object me = this_player();
        object ob = this_object();
        
        if(me->query("get_book")==1) {
    if(!id(arg)) return notify_fail("������ϰʲô������\n");
    if(me->is_busy() || me->is_fighting())
                return notify_fail("������æ��ûʱ����ϰ��������ࡣ�\n");
        if((int)me->query("force") < 300)
                return notify_fail("��ľ���ֵ��������ϰ���ű������䣡\n");
        if((int)me->query("combat_exp") < 5000000)
                return notify_fail("��ľ���ֵ��������ϰ���ű������䣡\n");
        if(me->query_temp("icespell/learning")==1)
                return notify_fail("��������ϰ���ű�������ڣ�\n");
    if((int)me->query("gin") < 100 || (int)me->query("sen") < 100)
                return notify_fail("��û���㹻�ľ�������ϰ���ű������䣡");
    if(me->query("class")!="taoist")
                return notify_fail("���ְҵ������ϰ���ű������䣡");
        if(me->query_temp("icestorm/ice_spell")==7)
                return notify_fail("��Ӧ���ȿ����Ƿ��Űɣ�");
                message_vision(HIY"$N����������ר��ע�Ķ��š�$n"HIY"����ϸ�Ĳ������еİ��\n"NOR,me, ob);
                me->set_temp("icespell/learning",1);
                call_out("learning",20+random(10), me);
                return 1;
        }
}
int learning(object me)
{
    object ob = this_object();
    int sub = 50+random(50);
    int time = (int)me->query("icespell/time");
    time = 200-time;

    if(me->query_temp("icespell/learning")==1)
  {
    if((int)me->query("force") < 300 || (int)me->query("sen") < 100 || (int)me->query("gin") < 100)
    {
        message_vision(HIB"����$N�ľ�������������������ȫ�޷����Ĳο���$n"HIB"��������...\n",me, ob);
                me->delete_temp("icespell/learning");
        return 1;
    }
        if(time == 195) {
                message_vision("$NŬ���Ĳ�͸�ˡ�$n����"HIC"����һ�¡�"HIM"�������α���"NOR"��\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
        else if(time == 180) {
                message_vision("$NŬ���Ĳ�͸�ˡ�$n����"HIC"���ڶ��¡�"HIG"��ϸ�꽵����"NOR"��\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
        else if(time == 155) {
                message_vision("$NŬ���Ĳ�͸�ˡ�$n����"HIC"�������¡�"HIB"����¶�����"NOR"��\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
    else if(time == 125) {
                message_vision("$NŬ���Ĳ�͸�ˡ�$n����"HIC"�������¡�"HIY"����˪�ɱ���"NOR"��\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
    else if(time == 85) {
                message_vision("$NŬ���Ĳ�͸�ˡ�$n����"HIC"�������¡�"HIR"�����ƻ�����"NOR"��\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
    else if(time == 50) {
                message_vision("$NŬ���Ĳ�͸�ˡ�$n����"HIC"�������¡�"HIW"����ѩ������"NOR"��\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
    else if(time == 0) {
                message_vision(HIY"$N����һ��Ŭ���Ĳ�͸����������ˡ�$n"HIY"��������ϰ���˰�������"HIW"����ѩ�籩��"NOR"������\n",me, ob);
                me->delete("get_book");
                me->delete("icespell/time");
                me->delete_temp("icespell/learning");
                me->set("get_icestorm",1);
                destruct(ob);
                return 1;
    }
    else {
                message_vision(HIC"$NŬ���ĺķѾ���ζ���$n"HIC"�������ݣ��ƺ�������һЩ�µ�����...\n"NOR,me, ob);
                me->add("icespell/time",1);
                me->add("gin",-sub);
                me->add("sen",-sub);
                me->add("force",-300);
                me->delete_temp("icespell/learning");
                return 1;
        }
  }
}
        
