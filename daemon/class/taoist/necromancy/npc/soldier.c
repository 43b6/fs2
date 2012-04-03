// hell_guard.c
// by airke

#include <ansi.h>
#include <combat.h>

inherit NPC;

#define bell_big 600
#define bell_small 300
#define INVLEVEL 30
#define MANACOST 150
#define INVCOST 25



object room2;
void create()
{
	set_name("�ػ����", ({ "soldier", "god" }) );
	set("long", "����������µ����С�ӳ���ȫ����"+
                    "�����ܸߵ����ס�\n");
              
	set("attitude", "friendly");
        set("max_gin", 3000);
	set("max_sen", 3000);
	set("max_kee", 3000);
	set("max_force", 2000);
	set("force", 2000);
	set("force_factor",10);
        set("str", 40);
	set("cor", 30);
	set("cps", 25);
	set_skill("sword",30);
	set_skill("shasword",50);
	map_skill("sword","shasword");
	set_skill("dodge",50);
        set_skill("fly-steps", 40);
        map_skill("dodge","fly-steps");
	set_skill("parry",120);
	map_skill("parry","shasword");
        set("class","swordman");
     

	setup();

	carry_object(__DIR__"obj/golden_armor")->wear();
	carry_object(__DIR__"obj/golden_sword")->wield();
}

void besummon(object who,object room)
{
	int i, bell,pp,mkee;
	object *enemy;
	object me = this_object ();
	room2=room;

	message_vision (HIB"һ����紵�����߳�һ��$N��\n" +
			"$N�ȵ���������ǲ��\n" NOR, me);
	pp=who->query("combat_exp");
        
	set("combat_exp",pp);

	set("max_kee",300+pp/600);
	set("kee",300+pp/600);
	
        bell = who->query ("bellicosity");
	if (bell < bell_small)
	  {
            message_vision (HIW"Ц��������������Ҳ��ӣ�\n", me);
	  }
		else if (bell < bell_big )
	  {
	    message_vision ("$N��ü�������С�£�Ҳ����ǲ�ң���\n", me);
	  }
	else
	  {
	    message_vision (HIB"N$ŭ�ȣ��η���ħ��������ǲ�������\n", me);
	    kill_ob (who);
	    set_leader (who);
	    return;
	  }

	enemy = who->query_enemy ();
	i = sizeof(enemy);
	while(i--) {
        if(!enemy[i]) continue;
		enemy[i]->fight_ob(this_object());
		fight_ob(enemy[i]);

	}
        command("defend "+who->query("id"));
	set_leader(who);
         who->add_temp ("invocation", INVCOST);
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
  message_vision (HIB"$N˵����ĩ������ٻ��������Ѿ���ɻ������񣬾ʹ˸�ǣ�\n" +
		  "һ����紵����$N��������֮�����ˡ�\n" NOR, this_object ());
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

int invcost ()
{
  return INVCOST;
}


