//������������������exp����bye cyw at 91/04/02
inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        object ob;
        set_name("�׹����", ({ "white dragon","dragon","white" }) );
        set("long",
                "ȫ���Ű׹�Ļ���, �׻��Ż����ߵĽ�罻�㡣\n");
        set("race", "Ұ��");
        set("title",HIW"(�׹�)"NOR);
        set("age", 45000);
        set("attitude", "aggressive");
        set("family/family_name","������");
        set("max_gin", 300000);
        set("max_kee", 300000);
        set("max_sen", 300000);
        set("max_force", 2000000);
        set("force",2000000);
        set("max_atman",5000000);
        set("max_mana",5000000);
        set("atman",5000000);
        set("mana",5000000);
        set("force_factor",30);
        set("str", 99);
        set("cor", 99);
        set("spi", 99);
        set("int", 99);
        set("bellicosity",10000);
        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set_temp("apply/attack", 200);
        set_temp("apply/damage", 200);
        set_temp("apply/armor",  200);
        set_skill("move",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_skill("unarmed",200);
        set_skill("force",500);
        set("combat_exp", 16000000);
        set_temp("hardshell",1);
        set_temp("mana_shield",1);
//        set_temp("mana_shield2",1);
        set_temp("kang-power",1);
        set_temp("def_fire",1);
        set("no_plan_follow",1);
        set_temp("no_die_soon",1);
        set_temp("todie",3);
        setup();
        ob=carry_object("/open/fire-hole/obj/w-pill.c");
        ob->set_amount(3);
}
void heart_beat()
{
 object env,mob,target,obj;
 mixed enemy;
 int i,hurt,j=0,defire=0,ohurt;
 mob = this_object();
 env = environment(mob);
 enemy = all_inventory( environment(mob) );
 i=sizeof(enemy);
 if( query("kee") < 0)
 {mob->die();
  return ;
 }
 if((mob->query("kee")<290000 || mob->query("gin")<290000 || mob->query("sen")<290000)
     && random(200)<50 && !mob->is_busy())
 {
    mob->receive_curing("kee",4000);
    mob->receive_heal("kee",4000); 
    mob->receive_curing("kee",4000);
    mob->receive_heal("kee",4000);
    mob->receive_curing("kee",4000);
    mob->receive_heal("kee",4000);
 }
 if(mob->query("kee") < mob->query("max_kee") && mob->query("force") < 1000000)
 {
    mob->receive_curing("kee",500);
    mob->receive_heal("kee",500);
    mob->add("force",10000);
 }
// if (!mob->is_fighting() || mob->is_fighting())
// {
 for (j=0 ; j < i ; j++)
 {
 if (!enemy[j]->is_fighting() && enemy[j]->is_character() && !enemy[j]->is_corpse() 
     && living(enemy[j]) && enemy[j]->query("id")!="white dragon" && userp(enemy[j]) && !wizardp(enemy[j])) 
 mob->kill_ob(enemy[j]);
 }//}
 if(random(10) > 3)
 {
    enemy = all_inventory( environment(mob) );
    i=sizeof(enemy);
    target=enemy[random(i)];
    if (mob->is_fighting())
    {
        message_vision( HIW
        "\n�׹��������һ��, ���İ׹��׻��������ɢ��!!\n"NOR,mob);
        mob->delete_busy();
        for (j=0 ; j < i ; j++)
        {
        if(enemy[j]){		
        if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j])
            && enemy[j]->query("id")!="white dragon"
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
        {hurt= 2500+random(4500);
        tell_object(enemy[j],HIY"�������������, ����������ܵ����صĴ���!!\n"NOR);}
        if (enemy[j]->query("class")=="swordsman" || enemy[j]->query("class")=="swordsman")
        {hurt= 2000+random(2000);}
        ohurt=hurt;
        if (enemy[j]->query_temp("def_fire")==1        //���ӻ��������������ӳ�Ч��
        && enemy[j]->query_temp("def_fire1")==1)           
        {hurt = hurt - defire - 700;
        tell_object (enemy[j],HIG"�����ϵ�������������۷������������˰׹�����Ļ���!!\n"NOR);}
        else if (enemy[j]->query_temp("def_fire")==1)                                    
        {hurt = hurt - 1000;
        tell_object (enemy[j],HIG"�����ϵ������������˰׹�����Ļ���!!\n"NOR);}
        else if (enemy[j]->query_temp("def_fire1")==1)
        {hurt = hurt - defire*1.2;
        tell_object (enemy[j],HIG"�����ϵĻ����ۻ����˰׹�����Ļ���!!\n"NOR);}
        else if (enemy[j]->query_temp("gold-fire")==1 &&   //���Ӽ������Ҳ���Ե���500�㹦��
        enemy[j]->query("functions/gold-fire/level","gold-fire") == 90)
        {hurt = hurt -500;
        tell_object (enemy[j],HIG"�����ϵļ���������˰׹�����Ļ���!!\n"NOR);}    
//        message_vision( HIG
//        "\n�������ͻ�ֵΪ"+defire+",����ԭʼ��ֵΪ"+ohurt+",����˺�ֵΪ"+hurt+"!!\n"NOR,mob);          
        enemy[j]->add("kee",-hurt);
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
        enemy[j]->set_temp("ko_w",1);   
        if(enemy[j]->query("combat_exp") < 16000000){
        tell_object(enemy[j],HIY"\n�������Ŭ��, ���ڴ��˰׹����, ������Ĵ��ۻ����˱���ľ���!!\n"NOR);
        tell_object(enemy[j],HIC"���ս���������� 6500 ��, Ǳ���������� 1500 ��!!\n"NOR);
        enemy[j]->add("combat_exp",6500);
        enemy[j]->add("potential",1500); 
        }}}}
   ::die();

}
