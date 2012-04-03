#include <ansi.h>
string magic();
inherit NPC;
void create()
{
            set_name("�����",({"fire girl","girl"}));
            set("long","���Ǿ��µ�����Ů֮һ�Ļ���ʹ������ò��Ȼ����һ�㷲��
������Ƚϣ����������ؼ�����������������һ����!!\n");
            set("gender","Ů��");
            set("class","dancer");
            set("family/family_name","ҹ��С��");
            set("nickname","����Ů");
	    set("title",HIR"����ʹ"NOR);
            set("combat_exp",5000000);
            set("attitude","heroism");
            set("age",20);
            set("str", 34);
            set("cor", 30);
            set("cps", 50);
            set("per", 24);
            set("int", 40);
          set("kee",100000);
          set("max_kee",100000);
          set("gin",10000);
          set("max_gin",10000);
          set("atman",10000);
          set("max_atman",10000);
          set("mana",30000);
          set("max_mana",30000);
          set("force",30000);
          set("max_force",30000);
            set_skill("array",60);
            set_skill("parry",60);
            set_skill("spells",50);
            set_skill("magic",120);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",70);
            set_skill("move",90);
            set_skill("dodge",100);
            set_skill("sword",50);
            set_skill("unarmed",70);
            set_skill("paull-steps",130);
            set_skill("dremagic",100);
            set_skill("dreamforce",90);
            set_skill("dreamdance",100);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
        set("get_dan_sp",1);
        set("/spells/reflection/level",100);
        set("/spells/confuse/level",100);
        set("/spells/fireball/level",100);
        set("/spells/thunder/level",100);
        set("/spells/firedance/level",100);
        set("/spells/dreamwings/level",100);        
        set("force_factor",30);
        setup();
        carry_object("/open/dancer/obj/yuaboots.c")->wear();
        carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
         (: magic :),
        }));
}
void heart_beat()
{
	object me=this_player();
        object ob=this_object();
        mixed enemy;
	int i,j;
        enemy=all_inventory(environment(ob));
	i=sizeof(enemy);
        if( is_fighting() ){
	if(random(100)>70)
    message_vision(HIR"�������������һ�Ρ�����֮�衯\n"NOR,this_object());
	if(random(5)>2)
	{
    message_vision(HIR"�������˶�ʱ������������˸���ס��!!\n"NOR,this_object());
	for(j=0;j<i;j++)
	{ 
	if (!enemy[j]->is_fighting() && enemy[j]->is_character() && !enemy[j]->is_corpse() 
            && living(enemy[j]) && enemy[j]!=ob) 
	{
		enemy[j]->start_busy(3);
	}
	}
	}
                      if(query_temp("ref_shield")!=1)
                      command("conjure reflection");
        }
        :: heart_beat();
}

string magic()
{       
        command("conjure confuse");
        command("conjure fireball");
        command("conjure reflection");
        command("conjure firedance");
        command("conjure thunder");
 //       command("conjure dreamwings");
        return "\n";
}
 
int accept_fight(object ob)
{
	object me=this_player();
        command("say СŮ���������Ķ�����??\n");
        command("conjure reflection");
        command("conjure dreamwings");
  //      command("conjure confuse");
        message_vision( this_object()->name()+"һ��������������ӡ�\n",ob);
	call_out("combat_exp",1,me);
        return 1;
}
int accept_kill(object ob)
{
	object me=this_player();
        command("say û�뵽�������۸���СŮ�ӣ����ҾͲ�������!!!\n");
        command("conjure reflection");
 //       command("conjure dreamwings");
        command("conjure confuse");
	call_out("combat_exp",1,me);
        return 1;
}

int combat_exp()
{
object me=this_player();
object ob=this_object();
int exp;
exp=me->query("combat_exp");
if(ob->query_temp("change"))
return 1;
ob->set_temp("change",1);
if(exp < 5000000)
return 1;
ob->set("combat_exp",exp);
return 1;
}
void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
        if(!winner)
	{
	::die();
	return ;
        }
        winner->set_temp("kill_fire",1);	
	::die();                                                           
}