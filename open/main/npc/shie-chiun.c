//copy from cage,re-edit from ccat
inherit NPC;
void create()
{
        set("title","��ëʨ��");
        set_name("лѷ", ({"shie-chiun","chiun"}));
        set("family/family_name","����");
        set("age",45);
        set("long","�����Ĵ󻤷�֮һ,��ɨ����,����ɱ������֮��ëʨ�� лѷ.\n");
        set("gender","����");
        set("str",30);
        set("con",30);
        set("cor",30);
        set("cps",30);
        set("env/����",1);
        set("max_kee",50000);
        set("kee",50000);
        set("max_gin",50000);
        set("gin",50000);
        set("max_sen",50000);
        set("sen",50000);
        set("combat_exp",1500000);
        set("max_force",50000);
        set("force",50000);
        set("force_factor",15);
        set_skill("dodge",200);
        set_skill("parry",200);
        set_skill("move",200);
        set_skill("force",200);
        set_skill("black-steps",150);
        set_skill("unarmed",200);
        set_skill("blade",200);
        set_skill("fast-blade",150);
        set_skill("gold-blade",150);
        map_skill("blade","fast-blade");
        map_skill("parry","gold-blade");
        map_skill("move","black-steps");
        map_skill("dodge","black-steps");
        set("chat_chance_combat",25);
        set("chat_msg_combat",({
        "лѷ ˵: С������,������!!\n",
        (: perform_action("blade.fast-dest") :),
        }));
        set_temp("apply/armor",150);
        set_temp("apply/damage",150);
        setup();
        carry_object("/open/main/obj/kd_blade")->wield();
        carry_object("/open/gsword/obj/sick_item");
        add_money("gold",25);
        
}

void heart_beat()
{
 object env,mob,*enemy,target;
 int i,kee;
 mapping exit;
 string *exit_name;
 
 mob = this_object();
 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 15)
 {
    enemy=mob->query_enemy();
	if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    kee = target->query("max_kee") * 0.3;
    if( env == environment(target) )
    {
      message_vision("лѷͻȻ�������ȭ֮���Ķ���,������$N!!!\n",target);
      target->receive_damage("kee",(int)kee,mob);
      COMBAT_D->report_status(target,0);
    }
	}
 }
 
 if((mob->query("kee")<mob->query("max_kee")*0.3) && (random(100) < 20) )
 {
    tell_room(environment(), name()+"����һ���󻹵�.\n");
    mob->receive_curing("kee",2000);
    mob->receive_heal("kee",2000);
 }

 if((mob->query("kee")<mob->query("max_kee")*0.2) && (random(100) < 10) )   
 {
   exit = env->query("exits");
   exit_name = keys(exit);
   i = random(sizeof(exit_name));
   command(exit_name[i]);
   i = random(sizeof(exit_name));
   command(exit_name[i]);
 }
   
   set_heart_beat(1);
   ::heart_beat();
   
}
