#include <ansi.h>
inherit NPC;
inherit SSERVER;

void create()
{

	set_name("火龙密使", ({"dragon-man"}));
	set("age",75);
	set("long","不知何时火龙幻界出现了这样一号人物。\n");
	set("gender","男姓");
	set("str",30);
	set("con",30);
	set("class","swordsman");
	set("family/family_name","仙剑派");
	set("bellicosity",1500);
	set("get_sha_sp",1);
	set("no_hire",1);
	set("attitude", "aggressive");
	set("max_kee",100000);
	set("kee",100000);
	set("max_gin",100000);
	set("gin",100000);
	set("max_sen",100000);
	set("sen",100000);
	set("combat_exp",7000000);
	set("max_force",300000);
	set("force",300000);
	set("force_factor",10);
	set("random_move",200);
	set_skill("dodge",120);
	set_skill("force",150);
	set_skill("linpo-steps",100);
	set_skill("unarmed",120);
	set_skill("haoforce",100);
	set("chat_chance",100);
        set("chat_msg",({
       (: random_move :),
        }));

	map_skill("dodge","linpo-steps");
	set_skill("sword",120);
	set_skill("shasword",120);
	map_skill("sword","shasword");
	map_skill("force","haoforce");  
	set_temp("apply/armor",500);
	set_temp("apply/damage",80);
	set_temp("roared",1);
	setup();
     carry_object("/open/gsword/obj/dragon-sword.c")->wield();
	reset_action();
}

void init()
{
	::init();
	add_action("block_cmd","");
}

int block_cmd(string arg)           
{
     if((string)query_verb()=="c_in" || (string)query_verb()=="c_home")
		return 1;
}
void greeting( object ob )
{   
    if( !ob || environment(ob) != environment() ) return;	   
     write( HIY"火龙密使说道:去死吧....\n"NOR ); 
     command("follow "+ob->query("id"));
	 kill_ob(ob);
	 
}
void heart_beat()
{
        object *enemy,*all,me;
        int i,j;
        me=this_object();      
        if(!me) return ;               
  	if( !is_fighting() ) {
		
		if( query("eff_kee") < query("max_kee") ) 
			me->receive_curing("kee",100);
		if( query("eff_gin") < query("max_gin") )
		    me->receive_curing("gin",100);
		if( query("eff_sen") < query("max_sen") )
		    me->receive_curing("sen",100);
		if( query("gin") < query("eff_gin") ) 
			me->receive_heal("gin",100);
		if( query("kee") < query("eff_kee") )
			me->receive_heal("kee",100);
		if( query("sen") < query("eff_sen") ) 
			me->receive_heal("sen",100);
		}
        set_heart_beat(1);
        :: heart_beat();
}


