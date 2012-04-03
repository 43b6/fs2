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
	set_name("ħ����", ({ "kinggod", "god" }) );
	set("long", "�Ĵ�����֮��ħ���࣬�ֳֳ�ǹ\n" +
		    "����ʩ�粼��֮�ܡ�\n");
		
	set("nickname","��������");
        set("attitude", "heroism");
        set("gender","����");
        set("max_gin", 1500);
	set("max_sen", 1500);
	set("max_kee",1000);
	set("kee",1000);
	set("max_force", 2000);
	set("force", 2000);
	set("force_factor",15);
	set_skill("lance",150);
	set_skill("dodge",100);
        set_skill("fly-steps",100);
        map_skill("dodge","fly-steps");
	set_skill("parry",100);
	set_temp("apply/defense",1500);
        set_temp("apply/attack",1500);
        set("str", 30);
	set("cor", 30);
	set("cps", 25);

	setup();

	carry_object(__DIR__"obj/golden_armor")->wear();
	carry_object(__DIR__"obj/king_lance")->wield();
}

void besummon(object who,object room)
{
	int i, bell,pp,mkee;
	object *enemy;
	object king2,me = this_object ();
	room2=room;

        enemy = who->query_enemy ();
	message_vision (HIC"\n\nһ����紵�����Ĵ��������ƻ������������\n"+
                            "���˽�̤���ǣ��������󣬽��һ�������Ľ���\n", me);

        message_vision ("�Ĵ��շ�վ�ķ�����$Nչ������...\n",enemy[0]);

	pp=who->query("combat_exp");
	mkee=who->query("max_kee");
	set("combat_exp",pp*3/2);


	set("max_kee",mkee*3);
	set("kee",mkee*3);
	
        bell = who->query ("bellicosity");
	if (bell > bell_big)
	  {
        
	    message_vision (HIB"N$ŭ�ȣ��η���ħ��������ǲ�������\n", me);
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
//     if(who->query("quests/supertao")==1) {
       command("defend "+who->query("id"));
//          if(who->query_temp("invocation")+20 <= who->query_skill("spells")/2) {
            king2=new(__DIR__"king2");
            king2->move(room);
            king2->besummon(who,room);
//          }
//     } 
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
  message_vision (HIB"$N˵��������������ɣ��ʹ˸��!!\n" +
		  "һƬ���������Ĵ��ռ�����ʧ����ձ˶ˡ�\n" NOR, this_object ());
  if (who)
    who->add_temp ("invocation", -INVCOST);
  destruct(this_object());
}

void unconcious()
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

int invcost ()
{
  return INVCOST;
}


