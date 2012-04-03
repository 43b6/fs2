inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        set_name("С����", ({ "small dragon","dragon","small" }) );
        set("long",
                "��С�Ļ���, ��Ȼ��С, �����������Ѿ�ʮ�־��ˡ�\n");
        set("race", "Ұ��");
        set("age", 100);
        set("attitude", "friendly");
        set("family/family_name","������");
        set("max_gin", 100000);
        set("max_kee", 100000);
        set("max_sen", 100000);
        set("max_force", 100000);
        set("force", 100000);
        set("force_factor",20);
        set("str", 99);
        set("cor", 99);
        set("spi", 99);
        set("int", 99);
        set("bellicosity",10000);
        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set_temp("apply/attack", 100);
        set_temp("apply/damage", 100);
        set_temp("apply/armor",  200);
        set("combat_exp", 10000000);
        set_skill("move",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_skill("force",350);
        set_temp("kang-power",1);
        set_temp("def_fire",1);
        set_temp("todie",3);
        setup();
}
void heart_beat()
{
 object env,mob,target,obj;
 mixed enemy;
 int i,hurt,j=0,defire;
 mob = this_object();
 env = environment(mob);
 if( query("kee") < 0)
{mob->die();
 return ;
}
 if(mob->query("kee") < mob->query("max_kee") && mob->query("force") < 100000)
 {
    mob->receive_curing("kee",500);
    mob->clear_condition();
    mob->receive_heal("kee",500);
    mob->add("force",5000);
 }
 if(random(10) > 5)
 {
    enemy = all_inventory( environment(mob) );
    i=sizeof(enemy);
    target=enemy[random(i)];
    if(mob->is_fighting())
    {
        message_vision( HIR
        "\nС�����ӿ��п��������!!\n"NOR,mob);
        mob->delete_busy();
        mob->apply_condition("burn", 0);
        for (j=0 ; j < i ; j++)
        {
        if(enemy[j]){	
        if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j])
            && enemy[j]->query("id")!="small dragon"
            && environment(this_object())==environment(enemy[j]))
        {
        hurt = 2000+random(1000);
        if(!enemy[j]->query("ring_type"))
        defire=500;
        else if(enemy[j]->query("ring_type")==1)
        defire=600;
        else if(enemy[j]->query("ring_type")==2)
        defire=700;
        else if(enemy[j]->query("ring_type")==3)
        defire=800;
        else if(enemy[j]->query("ring_type")==4)
        defire=900;
        else if(enemy[j]->query("ring_type")==5)
        defire=1000;
        if (enemy[j]->query("class")=="fighter" && enemy[j]->query_temp("keeup")==1)
        hurt= 2000+random(2000);       
        if (enemy[j]->query("class")=="scholar" && enemy[j]->query("class")=="poisoner" && enemy[j]->query_temp("def_fire")!=1)
        {hurt = 1700+random(1000);
        tell_object (enemy[j],HIG"��ƾ����Ļ��ƶ����С�����Ļ���!!\n"NOR);}
        if (enemy[j]->query_temp("def_fire")==1        //���ӻ��������������ӳ�Ч��
        && enemy[j]->query_temp("def_fire1")==1)           
        {hurt = hurt - defire - 700;}
        else if (enemy[j]->query_temp("def_fire")==1 ||          
        enemy[j]->query_temp("def_fire1")==1)
        {hurt = hurt - 1000;}
        else if (enemy[j]->query_temp("gold-fire")==1 &&   //���Ӽ������Ҳ���Ե���500�㹦��
        enemy[j]->query("functions/gold-fire/level","gold-fire") == 90)
        {hurt = hurt -500;}       
        enemy[j]->add("kee",-hurt);
        enemy[j]->apply_condition("burn",30);
        COMBAT_D->report_status(enemy[j]);
        }}}
 }
 }   
   set_heart_beat(1);
   ::heart_beat();
   
}
void die()
{
   int i,j=0;
   object *enemy,mob,me;
   me = this_player();
   mob = this_object();
   enemy = mob->query_enemy();
   i=sizeof(enemy);
        for (j=0 ; j < i ; j++)
        {
	if(enemy[j]){
        if(environment(this_object())==environment(enemy[j]) && userp(enemy[j])){
        enemy[j]->set_temp("ko_g",1);   
        if(enemy[j]->query("combat_exp") < 10000000){ 
          tell_object(enemy[j],HIY"\n�������Ŭ��, ���ڴ���С����, ������Ĵ��ۻ����˱���ľ���!!\n"NOR);
          tell_object(enemy[j],HIC"���ս���������� 2000 ��, Ǳ���������� 500 ��!!\n"NOR);
          enemy[j]->add("combat_exp",2000);
          enemy[j]->add("potential",500);
	  }
        }}}
   ::die();

}
