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
    ([	"action" :  "$N"HIR"����ȫ��֮��ë�����������Լ����ȵ������ײ$n��ʹ��$n�������ܵ������ص����ˣ�"NOR,
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
    set("combat_exp", 5000000);
    set("max_kee", 30000);
    set("kee", 30000);
    set("max_gin", 30000);
    set("gin", 30000);
    set("max_sen", 30000);
    set("sen", 30000);
    set("attitude", "peaceful");
    set_skill("parry", 500);
    set_skill("unarmed", 500);
    set_skill("dodge", 500);
    set_skill("move", 500);
    set("chat_chance", 4);
    set("chat_msg", ({
         "���������H���H�����������H������\n",
    }));
    setup();
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

    if(random(100) < 40 && ob->is_fighting())
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
	me->add("kee",-20);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-40);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-60);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-80);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-100);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-120);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-140);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-160);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-180);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-200);
	me->apply_condition("burn", random(15)+3);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-150);
	me->add("gin",-300);
	me->add("sen",-300);
	me->apply_condition("burn", random(15)+3);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-200);
	me->add("gin",-400);
	me->add("sen",-400);
	me->add("force",-500);
	me->apply_condition("burn", random(15)+3);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"����$n"HIR"���³��Ļ�����У�����Ƥ�����ֽ���һƬ��ʹ$N"HIR"�е�ʹ�಻��...\n"NOR, me, ob);
	me->add("kee",-250);
	me->add("gin",-500);
	me->add("sen",-500);
	me->add("force",-1000);
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
    add_action("do_kill","kill");
    add_action("do_kill","fight");
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
    if(random(100) > spi)
{
	message_vision(RED"$N͵͵�Ŀ���"HIR"������"NOR+RED"......\n"NOR, me);
	message_vision(HIB"$N�ɹ��Ľ�"HIR"������"NOR+HIB"��β����ε����ˣ�\n"NOR, me);
	me->delete("doctor/get_key");
	me->set("doctor/get_fea",1);
	fea = new("/open/doctor/obj/feather");
	fea->move(me);
	return 1;
}else{
	message_vision(RED"$N͵͵�Ŀ���"HIR"������"NOR+RED"......\n"NOR, me);
	message_vision(MAG"$N�Ķ���̫�󣬾�Ȼ��"HIR"������"NOR+MAG"�������ˣ�\n"NOR, me);
	ob->kill_ob(me);
	return 1;
    }
  }
}
int do_kill(string arg, object me)
{
    if(arg == "fire phoenix" || arg == "phoenix" || arg == "pnx")
{
	message_vision(RED"$N��������볳�Ѡ���\n"NOR, me);
	return 1;
  }
}