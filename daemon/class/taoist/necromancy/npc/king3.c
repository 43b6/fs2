// hell_guard.c
//by airke

#include <ansi.h>
#include <combat.h>

inherit NPC;

#define bell_big 600
#define bell_small 100
#define INVLEVEL 90
#define MANACOST 80
#define INVCOST 80

int special_att ();

object room2;
void create()
{
	set_name("ħ��", ({ "kinggod", "god" }) );
	set("long", "�Ĵ�����֮����ħ�񺣣�������\n" +
		    "���ź��绽��֮�ܡ�\n");
		
	set("nickname","�ֹ�����");
        set("attitude", "heroism");
        set("gender","����");
	set("class","scholar");
        set("max_gin", 1500);
	set("max_sen", 1500);
	set("max_kee",1000);
	set("kee",1000);
	set("max_force", 2000);
	set("force", 6000);
	set("force_factor",40);
	set("family/family_name","�μ�");
	set("family/master_name","����");
	set_skill("unarmed",100);
	set_skill("six-fingers",100);
	map_skill("unarmed","six-fingers");
	set_skill("dodge",100);
	set_skill("fly-steps",70);
	map_skill("dodge","fly-steps");
	set_skill("parry",100);
        set("str", 50);
	set("cor", 30);
	set("cps", 25);


	setup();

	carry_object(__DIR__"obj/golden_armor")->wear();
	carry_object(__DIR__"obj/king_chi")->wield();
}

void besummon(object who,object room)
{
	int i, bell,pp,mkee;
	object *enemy;
	object king4,me = this_object ();
	room2=room;

	
	pp=who->query("combat_exp");
	mkee=who->query("max_kee");
	set("combat_exp",pp*3/2);

	set("max_kee",mkee*3);
	set("kee",mkee*3);
	
        bell = who->query ("bellicosity");
	if (bell > bell_big) {
	
	    kill_ob (who);
	    set_leader (who);
	    return;
	  }

	enemy = who->query_enemy ();
	i = sizeof(enemy);
	while(i--) {
		enemy[i]->fight_ob(this_object());
		fight_ob(enemy[i]);
        }

	set_leader(who);
        who->add_temp ("invocation", INVCOST);
   
//	if(who->query_temp("invocation")+20 <= who->query_skill("spells")/2) {
        king4=new(__DIR__"king4");
        king4->move(room);
        king4->besummon(who,room);
//        }
         
}

void init()
{
       
      set_heart_beat(1);
}

void heart_beat()
{
	object who = query_leader ();
     if(!who){
        call_out("leave",0);
        return;
     }

	if (!is_fighting() ) {
	     call_out("leave", 0);
	     return;
	}
	if(room2!=environment(who)||!who->is_fighting()) {
             call_out("leave",0);
             return;
        }

	   :: heart_beat();
}

void leave()
{
  object who = query_leader ();

  if (who)
    who->add_temp ("invocation", -INVCOST);
  destruct(this_object());
}

void unconcious ()
{
  object who = query_leader ();
  if (who)
    who->add_temp ("invocation", -INVCOST);
  message_vision (HIB"$N�ҽ�һ��������ʧ����Ӱ���١�\n", this_object ());
  destruct (this_object ());
}

int needlevel ()
{
  return INVLEVEL;
}

int manacost ()
{
  return MANACOST;
}

