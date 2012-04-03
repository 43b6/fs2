inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        object ob;
        set_name("������", ({ "dragon king","dragon","king" }) );
        set("long",
                "��˵�еĻ�������\n");
        set("race", "Ұ��");
        set("title",HIR"��֮����"NOR);
        set("age", 100000);
        set("attitude", "aggressive");
        set("family/family_name","������");
        set("max_gin", 1000000);
        set("max_kee", 1000000);
        set("max_sen", 1000000);
        set("max_force", 2000000);
        set("force", 2000000);
        set("force_factor",50);
        set("str", 99);
        set("cor", 99);
        set("spi", 99);
        set("int", 99);
        set("bellicosity",10000);
        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );        
        set_skill("move",200);
        set_skill("dodge",200);
        set_skill("parry",200);
        set_skill("unarmed",300);
        set_skill("force",500);
        set("combat_exp", 30000000);
        set("no_gring",1);
        set_temp("apply/attack", 200);
        set_temp("apply/damage", 200);
        set_temp("apply/armor",  200);
        set_temp("apply/defense",200);
        set_temp("apply/dodge", 200);
        set_temp("apply/parry", 200);
        set_temp("kang-power",1);
        set_temp("def_fire",1);
        set("no_plan_follow",1);
        set_temp("mount",1);
        set_temp("follow",1);
        set_temp("speed",1);
        set_temp("empty",1);
        set_temp("false",1);
        set_temp("lock-link",1);
        set_temp("ghost",1);
        set_temp("rob",1);  
        set_temp("no-plan",1);
        set_temp("no_die_soon",1);
        setup();
        ob=carry_object("/open/fire-hole/obj/k-pill.c");
        ob->set_amount(3);

}
void heart_beat()
{
 object env,mob,target,obj,me;
 mixed enemy;
 int i,hurt,j=0,defire=0,ohurt;
 mob = this_object();
 env = environment(mob);
 if(!env) return ;
 enemy = all_inventory( environment(mob) );
 i=sizeof(enemy);
 mob->clear_condition();
 if( query("kee") < 0)
{mob->die();
 return ;
}
 if(mob->query("kee") < mob->query("max_kee") && mob->query("force") < 1950000)
 {
    mob->receive_curing("kee",30000);
    mob->receive_heal("kee",30000);
    mob->add("force",50000);
 }
// if (!mob->is_fighting() || mob->is_fighting())
 {
 for (j=0 ; j < i ; j++)
 {
 if (!enemy[j]->is_fighting() && enemy[j]->is_character() && !enemy[j]->is_corpse() 
     && enemy[j]!=mob && userp(enemy[j]) && !wizardp(enemy[j])) 
 mob->kill_ob(enemy[j]);
 }//}
 if(random(1000) < 450)
 {
    enemy = all_inventory( environment(mob) );
    i=sizeof(enemy);
    target=enemy[random(i)];
    if (mob->is_fighting())
    {
message_vision(HIR"                                        &.  &.     .\n"NOR,mob);
message_vision(HIR"                                        ~ss.&ss. .s'\n"NOR,mob);
message_vision(HIR"                                .     .ss&&&&&&&&&&s.\n"NOR,mob);
message_vision(HIR"                                &. s&&&&&&&&&&&&&&`&&Ss\n"NOR,mob);
message_vision(HIR"                                ~&&&&&&&&&&&&&&&&&&o&&&       .\n"NOR,mob);
message_vision(HIR"                               s&&&&&&&&&&&&&&&&&&&&&&&&s.  .s\n"NOR,mob);
message_vision(HIR"                              s&&&&&&&&&~&&&&&&~~~~&&&&&&~&&&&&.\n"NOR,mob);
message_vision(HIR"                              s&&&&&&&&&&s~~&&&&ssssss~&&&&&&&&~\n"NOR,mob);
message_vision(HIR"                             s&&&&&&&&&&'         `~~~ss~&~&s~~\n"NOR,mob);
message_vision(HIR"                             s&&&&&&&&&&.              `~~~~~&  .s&&s\n"NOR,mob);
message_vision(HIR"                             s&&&&&&&&&&&&s....               `s&&'  `\n"NOR,mob);
message_vision(HIR"                         `ssss&&&&&&&&&&&&&&&&&&&&####s.     .&&~&.   . s-\n"NOR,mob);
message_vision(HIR"                           `~~~~&&&&&&&&&&&&&&&&&&&&#####&&&&&&~     &.&'\n"NOR,mob);
message_vision(HIR"                                 ~&&&&&&&&&&&&&&&&&&&&&####s~~     .&&&|\n"NOR,mob);
message_vision(HIR"                                  ~&&&&&&&&&&&&&&&&&&&&&&&&##s    .&&~ &\n"NOR,mob);
message_vision(HIR"                                   &&~~&&&&&&&&&&&&&&&&&&&&&&&&&&&&&~   `\n"NOR,mob);
message_vision(HIR"                                  &&~  ~&~&&&&&&&&&&&&&&&&&&&&S~~~~'\n"NOR,mob);
message_vision(HIR"                             .   .~     '  &&&&&&&&&&&&&&&&####s\n"NOR,mob);
message_vision(HIR"                             &.          .s&&&&&&&&&&&&&&&&&####~\n"NOR,mob);
message_vision(HIR"                 .           ~&s.   ..ssS&&&&&&&&&&&&&&&&&&&####~\n"NOR,mob);
message_vision(HIR"                 &           .&&&S&&&&&&&&&&&&&&&&&&&&&&&&#####~\n"NOR,mob);
message_vision(HIR"                 Ss     ..sS&&&&&&&&&&&&&&&&&&&&&&&&&&&######~~\n"NOR,mob);
message_vision(HIR"                  ~&&sS&&&&&&&&&&&&&&&&&&&&&&&&&&&########~\n"NOR,mob);
message_vision(HIR"           .      s&&&&&&&&&&&&&&&&&&&&&&&&#########~~'\n"NOR,mob);
message_vision(HIR"           &    s&&&&&&&&&&&&&&&&&&&&&#######~~'      s'         .\n"NOR,mob);
message_vision(HIR"           &&..&&&&&&&&&&&&&&&&&&######~'       .....&&....    .&\n"NOR,mob);
message_vision(HIR"            ~&&&&&&&&&&&&&&&######~' .     .sS&&&&&&&&&&&&&&&&s&&\n"NOR,mob);
message_vision(HIR"              &&&&&&&&&&&&#####~     &. .s&&&&&&&&&&&&&&&&&&&&&&&&s.\n"NOR,mob);
message_vision(HIR"   )          &&&&&&&&&&&#####'      `&&&&&&&&&###########&&&&&&&&&&&.\n"NOR,mob);
message_vision(HIR"  ((          &&&&&&&&&&&#####       &&&&&&&&###~       ~####&&&&&&&&&&\n"NOR,mob);
message_vision(HIR"  ) )         &&&&&&&&&&&&####.     &&&&&&###~             ~###&&&&&&&&&   s'\n"NOR,mob);
message_vision(HIR" (   )        &&&&&&&&&&&&&####.   &&&&&###~                ####&&&&&&&&s&&'\n"NOR,mob);
message_vision(HIR" )  ( (       &&~&&&&&&&&&&&#####.&&&&&###'                .###&&&&&&&&&&~\n"NOR,mob);
message_vision(HIR" (  )  )   _.&~   &&&&&&&&&&&&######.&&##'                .###&&&&&&&&&&\n\n\n\n"NOR,mob);
        mob->delete_busy();
        mob->apply_condition("burn", 0);
        for (j=0 ; j < i ; j++)
        {
        if(enemy[j]){	
        if( enemy[j]->is_character() && !enemy[j]->is_corpse() && enemy[j]!=mob 
            && environment(this_object())==environment(enemy[j]))
        {
        hurt = 3000+random(3000);
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
        tell_object (enemy[j],HIG"��������ǿ�һ��������ʮ�����صĴ���!!\n"NOR);
        if (enemy[j]->query("class")=="fighter" && enemy[j]->query_temp("keeup")==1)
        {hurt = 3000+random(5000);}
        if (enemy[j]->query("class")=="scholar" 
            && enemy[j]->query_temp("def_fire")!=1
            && enemy[j]->query_temp("def_fire1")!=1)
        {hurt = 3000+random(2500);
        tell_object (enemy[j],HIG"��ƾ����Ļ��ƶ���˻������Ļ���!!\n"NOR);}
        ohurt=hurt;
        if (enemy[j]->query_temp("def_fire")==1 
            && enemy[j]->query_temp("def_fire1")==1)
        {hurt = hurt-defire*1.6-1400;
        tell_object (enemy[j],HIG"�����ϵ�������������۷������������˻������Ļ���!!\n"NOR);}      
        else if (enemy[j]->query_temp("def_fire")==1)
        {hurt = hurt-2000;
        tell_object (enemy[j],HIG"�����ϵ������������˻������Ļ���!!\n"NOR);}
        else if (enemy[j]->query_temp("def_fire1")==1)
        {hurt = hurt-defire*2;
        tell_object (enemy[j],HIG"�����ϵĻ����ۻ����˻������Ļ���!!\n"NOR);}
        else if (enemy[j]->query_temp("gold-fire")==1 
                &&enemy[j]->query("functions/gold-fire/level","gold-fire") == 90)
        {hurt = hurt-1000;
        tell_object (enemy[j],HIG"�����ϵļ���������˻������Ļ���!!\n"NOR);}
//        message_vision( HIG
//        "\n�������ͻ�ֵΪ"+defire+",����ԭʼ��ֵΪ"+ohurt+",����˺�ֵΪ"+hurt+"!!\n"NOR,mob);                
        enemy[j]->receive_wound("kee",hurt);
        COMBAT_D->report_status(enemy[j]);
        enemy[j]->apply_condition("burn",30);
        }}}
 }
 } 
  for(j=0;j<i;j++) 
  {
    if(!living(enemy[j])) continue;
    if(enemy[j]->query("id")=="dragon king") continue;
    if(!enemy[j]->query_temp("hardshell")) continue;
    enemy[j]->delete_temp("hardshell");
    enemy[j]->clear_condition("white_pill");
    message_vision(HIG"\n����������һ��ǿ���̹⣬$N���ϵİ���������ʧ�ˡ�\n"NOR,enemy[j]);
  }
 if(random(1000) > 800)
 {
    enemy = all_inventory( environment(mob) );
    i=sizeof(enemy);
    target=enemy[random(i)];
    if (mob->is_fighting())
    {
        message_vision( HIY
        "\n������ͻȻ������������ĺ���, ǿ��������Ƶ����޷���Ϣ!!\n"NOR,mob);
        for (j=0 ; j < i ; j++)
        {
        if(enemy[j]){
        if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j])
            && enemy[j]!=mob)
        {
         if((enemy[j]->query("force_factor")-10)>0)
            enemy[j]->add("force_factor",-10);
         else enemy[j]->set("force_factor",0);
        enemy[j]->start_busy(random(3)+1);
        }}}}
 }
 }   

   set_heart_beat(1);
   ::heart_beat();
   
}
void die()
{
   int i,j=0,ring_type;
   object *enemy,mob,scale,me,ring;
   object winner = query_temp("last_damage_from");   
   string name = winner->query("name");
   if(!winner)
        {
        ::die();
        return ;
        }
   if(userp(winner) && environment(this_object())==environment(winner))
   {
     ring_type=winner->query("kar")+random(30);
     if(winner->query("kar")>30)
       ring_type=30+random(30);
     if(winner->query("setgift-mk")==1)
       ring_type=winner->query("setgift/kar")+random(30);         
     log_file("kill_dking", sprintf("%s(%s) ���������� on %s\n"
     ,name,winner->query("id"), ctime(time()) ));
     ring=present("fire-dragon ring",winner);
   
     if(!ring)
     {
       scale=new("/data/autoload/killer/dragon-scale");
       scale->move(winner);
       tell_room(environment(),sprintf(HIW"%s�ӻ��������ϵõ�����֮�ۡ�\n",winner->name()));
     }     
     if(!ring || (ring && !winner->query("ring_type")))
     {
       if(ring_type<=15)
         winner->set("ring_type",1);
       else if(ring_type<=30 && ring_type>15)
         winner->set("ring_type",2);
       else if(ring_type<=47 && ring_type>30)
         winner->set("ring_type",3);
       else if(ring_type<=57 && ring_type>47)
         winner->set("ring_type",4);
       else if(ring_type>57)
          winner->set("ring_type",5);
       tell_room(environment(),sprintf(HIW"����֮�۷�����âӵ�����ͻ��������\n",winner->name()));
     }  
   }
   me = this_player();
   mob = this_object();
   enemy = mob->query_enemy();
   i=sizeof(enemy);
        for (j=0 ; j < i ; j++)
        {
        if(enemy[j]){
        if(environment(this_object())==environment(enemy[j]) && userp(enemy[j])){
        tell_object(enemy[j],HIY"\n�������Ŭ��, ���ڴ��˻���֮��, ������Ĵ��ۻ����˱���ľ���!!\n"NOR);
        tell_object(enemy[j],HIC"���ս���������� 30000 ��, Ǳ���������� 5000 ��!!\n"NOR);
        enemy[j]->add("combat_exp",30000);
        enemy[j]->add("potential",5000);
        }}}
   ::die();

}
