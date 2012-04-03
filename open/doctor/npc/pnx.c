// fire phoenix---made by nike

#include <ansi.h>
inherit NPC;

mapping *action = ({
    ([
        "action" :  "$N"HIR"�Ķ���һ˫�޴�ĳ�������$n��ȥ������Ю���Ŀ�磬�Ĵ��$n��ͷ����Ŀѣ��"NOR,
        "dodge"      :  -35,
        "parry"      :  -40,
        "damage"     :  350,
        "damage_type":  "����",
    ]),
    ([
        "action" :  "$N"HIR"������ֻ������צ�ӣ��ݺݵĳ�$nץȥ��$n���ܲ����������������������Ե�Ѫ�ۣ�"NOR,
        "dodge"      :  -35,
        "parry"      :  -40,
        "damage"     :  370,
        "damage_type":  "ץ��",
    ]),
    ([
        "action" :  "$N"HIR"ͻȻ����һ�������ϣ���ͦ������$n���������ģ�$n�޷���ܣ����ĵİ�������"NOR,
        "dodge"      :  -35,
        "parry"      :  -40,
        "damage"     :  400,
        "damage_type":  "����",
    ]),
    ([  "action" :  "$N"HIR"����ȫ��֮��ë�����������Լ����ȵ������ײ$n��ʹ��$n�������ܵ������ص����ˣ�"NOR,
        "dodge"      :  -35,
        "parry"      :  -40,
        "damage"     :  430,
        "damage_type":  "����",
    ]),
    ([
        "action" :  "$N"HIR"�͵�������β��ʹ��˦��$n��ͷ����$nһʱ���񣬱����˸����ţ�ʹ����շ��ף�"NOR,
        "dodge"      :  -35,
        "parry"      :  -40,
        "damage"     :  450,
        "damage_type":  "����",
    ]),
});

void create()
{
    set_name(HIR"������"NOR, ({"fire phoenix","phoenix","pnx"}) );
    set("race", "Ұ��");
    set("title",HIY"��ɽ����ʥ��"NOR);
    set("long", "һֻ��ë�ǳ������Ļ��ˣ�����ɽ�ɵ�
����ʥ�ޣ�����Գ��԰�(pluck)������ë(feather)��\n");
     set_temp("apply/attack",550);
     set_temp("apply/damage",550);
     set_temp("apply/move",550);
    set("limbs", ({ "���","��צ","����","���","��β" }) );
    set("age", 500);
    set("force_factor", 20);
    set("combat_exp", 3000000);
    set("max_kee", 30000);
    set("kee", 30000);
    set("max_gin", 30000);
    set("gin", 30000);
    set("max_sen", 30000);
    set("sen", 30000);
    set("attitude", "peaceful");
    set_skill("parry", 300);
    set_skill("unarmed", 300);
    set_skill("dodge", 300);
    set_skill("move", 300);
    set("chat_chance", 4);
    set("chat_msg", ({
         "���������H���H�����������H������\n",
    }));
    setup();
    carry_object("/open/doctor/obj/feather");
    set("default_actions", (: call_other, __FILE__,"query_action" :));
    reset_action();
    set_heart_beat(1);
}
mapping query_action()
{
    return action[random(sizeof(action))];
}
void heart_beat()
{
    mixed all;
    object me, ob;
    int i;
    ob = this_object();
    all = all_inventory(environment(ob));

    if(random(100) < 20+random(20) && ob->is_fighting())
{
        message_vision("$N"HIR"ͻȻ�񷢷��ƵĿ�ʼ�ſڿ��»��桫����\n\n"NOR, ob);
        for( i = 0 ; i < sizeof(all) ; i++)
{
        me = all[i];
    if(me->is_character()
    && living(me)
    && me->query("id") != "fire phoenix")
{
        message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
        me->add("kee",-150);
        COMBAT_D->report_status(me);
        message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
        me->add("kee",-200);
        COMBAT_D->report_status(me);
        message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
        me->add("kee",-250);
        COMBAT_D->report_status(me);
        message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
        me->add("kee",-250);
        me->add("gin",-150);
        me->add("sen",-150);
        COMBAT_D->report_status(me);
        message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
        me->add("kee",-500);
        me->add("gin",-250);
        me->add("sen",-250);
        me->add("force",-800);
        me->start_busy(2);
        me->apply_condition("burn", random(15)+3);
        COMBAT_D->report_status(me);
        message_vision("\n$N"HIB"�������³��Ļ�����������ʧ����$n�Ĺ���Ҳ������ƽ��������...\n\n"NOR, ob, me);
        ob->start_busy(1);
      }
    }
  }
        ::heart_beat();
}
void init()
{
    add_action("do_pluck","pluck");
}
int do_pluck(string arg)
{
    object me, ob, fea, pnx;
    int kar, spi;

    me = this_player();
    ob = this_object();
    kar = me->query("kar")*2;
    spi = me->query("spi")*2;
    spi = kar+spi;
    if(spi >= 80)
    spi = 80;

    if(!arg || arg != "feather") return 0;
    if(me->query("doctor/get_key",1))
{
    if(me->query("doctor/get_fea",1))
{
        message_vision(RED"$N̰�ĵ����ٰεڶ���...����ȴ��"HIR"������"NOR+RED"������......\n"NOR, me);
        ob->kill_ob(me);
        return 1;
}
        message_vision(RED"$N͵͵�Ŀ���"HIR"������"NOR+RED"......\n"NOR, me);
    if(random(100) > spi)
{
        message_vision(HIB"$N�ɹ��Ľ�$n"HIB"��β����ε����ˣ�\n"NOR, me, ob);
        me->delete("doctor/get_key");
        me->set("doctor/get_fea",1);
        fea = new("/open/doctor/obj/feather");
        fea->move(me);
        return 1;
}else{
        message_vision(MAG"$N�Ķ���̫�󣬾�Ȼ��$n"MAG"�������ˣ�\n"NOR, me);
        ob->kill_ob(me);
        return 1;
    }
  }
}
void die()
{
    object winner = query_temp("last_damage_from");
        tell_object(users(), HIR"��Ȼ����ɽ��ʥ�ش���һ����������ɽʥ�ޣ������ﱻ"+winner->query("name")+HIR"������ɱ���ˣ�"NOR"\n
        "+winner->query("name")+HIC"����"HIR"������"HIC"����ǰԡ����еľ�״��˲��������"HIR"�������ա�"HIC"�ľ�����\n"NOR);
//      winner->set("doctor/killpnx",1);
        :: die();
}
