inherit NPC;
#include <ansi.h>
void create()
{
        object ob;
        set_name("а��", ({ "evil-ghost","evil","ghost" }) );
        set("long",
                "��û�������Ĺȵġ��׶�����, ʱ����͵Ϯ�������!!\n");
        set("title",HIW"(����)"NOR);
        set("age", 1000);
        set("max_gin", 5000);
        set("max_kee", 10000);
        set("max_sen", 5000);
        set("max_force", 5000);
        set("force",5000);
        set("max_atman",5000);
        set("max_mana",5000);
        set("atman",5000);
        set("mana",5000);
        set("force_factor",30);
        set("str", 99);
        set("cor", 99);
        set("spi", 99);
        set("int", 99);
        set("bellicosity",3000);
        set_temp("apply/attack", 100);
        set_temp("apply/damage", 100);
        set_temp("apply/armor",  100);
        set_skill("move",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_skill("force",100);
	set_skill("unarmed",150);
        set_skill("mogi-strike2",100);
        set_skill("mogi-steps",100);
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("unarmed","mogi-strike2");
	map_skill("parry","mogi-strike2");
        set("combat_exp", 3000000);
        setup();
}
void heart_beat()
{
 object env,mob,target,obj;
 mixed enemy;
 int i,hurt,j=0;
 mob = this_object();
 env = environment(mob);
 enemy = all_inventory( environment(mob) );
 i=sizeof(enemy);
 if (!mob->is_fighting())
 {
 for (j=0 ; j < i ; j++)
 {
 if (!enemy[j]->is_fighting() && enemy[j]->is_character() && !enemy[j]->is_corpse() 
     && living(enemy[j]) && enemy[j]->query("id")!="evil-ghost") 
 mob->kill_ob(enemy[j]);
 }}
if(random(10) > 2)
 {
    enemy = all_inventory( environment(mob) );
    i=sizeof(enemy);
    if (mob->is_fighting())
    {
        message_vision( HIW
        "\n����֮��ͻȻ�ӵ���ð����, �������˱�������!!\n"NOR,mob);
        for (j=0 ; j < i ; j++)
        {
        if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j])
            && enemy[j]->query("id")!="evil-ghost")
        {
        enemy[j]->add("kee",-300);
        COMBAT_D->report_status(enemy[j]);
        }}
 }
 }   
   set_heart_beat(1);
   ::heart_beat();
   
}

void die()
{
object me=query_temp("last_damage_from");
object ob,ob2;
ob=this_object();
ob2=new("/open/ghost-hole/obj/flute");
if(me->query_temp("ghost-hole/evil-ghost-flute"))
:: die();
else if(!me->query_temp("ghost-hole/kill-evil-ghost"))
{
me->set_temp("ghost-hole/kill-evil-ghost",1);
:: die();
}
else if(me->query_temp("ghost-hole/kill-evil-ghost")<10)
{
me->add_temp("ghost-hole/kill-evil-ghost",1);
:: die();
}
else
{
ob2->move(environment(me));
message_vision(HIW"а���ܲ���$Nǿ��Ĺ�����, ����ææ��������!!\n"NOR,me);
message_vision(HIR"�������ܵĹ��ڴҴ�, ��С�ĵ�����һ������....\n"NOR,me);
me->set_temp("ghost-hole/evil-ghost-flute",1);
destruct(ob);
}
}
