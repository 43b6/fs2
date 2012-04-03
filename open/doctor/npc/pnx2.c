// fire phoenix---made by nike

#include <ansi.h>
inherit NPC;

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
	pnx = new("/open/doctor/npc/pnx");
	pnx->move(environment(me));
	pnx->kill_ob(me);
	return 1;
}
    if(random(100) > spi)
{
	message_vision(RED"$N͵͵�Ŀ���"HIR"������"NOR+RED"......\n"NOR, me);
	message_vision(HIB"$N�ɹ��Ľ�"HIR"������"NOR+HIB"��β����ε����ˣ�\n"NOR, me);
	me->delete("get_key");
	me->set("get_fea",1);
	fea = new("/open/doctor/obj/feather");
	fea->move(me);
	return 1;
}else{
	message_vision(RED"$N͵͵�Ŀ���"HIR"������"NOR+RED"......\n"NOR, me);
	message_vision(MAG"$N�Ķ���̫�󣬾�Ȼ��"HIR"������"NOR+MAG"�������ˣ�\n"NOR, me);
	pnx = new("/open/doctor/npc/pnx");
	pnx->move(environment(me));
	pnx->kill_ob(me);
	destruct(ob);
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