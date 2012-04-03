// hell_guard.c
//be airke

#include <ansi.h>
#include <combat.h>

inherit NPC;

#define bell_big 600
#define bell_small 400
#define INVLEVEL 50
#define MANACOST 100
#define INVCOST 50

int special_att ();

object room2;
void create()
{
	set_name("��������", ({ "nine-fox","fox" }) );
	set("long", "��������һ������ǿ�����֣�ȫ��ѩ�ף�ӵ�м��ߵ�����\n" +
		    "�ͷ������������Ͼ��շ���\n");
		    
	set("attitude", "peaceful");
        set("race","Ұ��");
	set("gender","����");
        set("max_force",3000);	
	set("max_kee",4000);
	set("force_factor",10);
	set_skill("dodge",200);
        set("str", 30);
	set("cor", 30);
	set("cps", 25);
        set("int", 50);
        set("spi", 50);
	set("limbs",({"ͷ��","�ز�","����","����","ǰ��","���","β��"}));
        set("verbs",({"bite","claw"}));
  set ("chat_chance_combat",35);
	set ("chat_msg_combat", ({(: special_att :)}));

	setup();

}

void besummon(object who,object room)
{
	int i, bell,pp;
	object *enemy;
	object me = this_object ();
	room2=room;

	message_vision (MAG"һ����紵����һֻ$N���������Ρ�\n" NOR, me);
	pp=who->query("combat_exp");
	set("combat_exp",pp*3/2);
	if( pp > 500000 )	
		pp = 500000;
	set("max_kee",pp/100);
	set("kee",pp/100);
	
        bell = who->query ("bellicosity");
	if (bell > bell_small)
	{
	    message_vision (HIB"$N��Ц��:��ƾ��?\n", me);
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
	if( environment() )
  message_vision (
		  MAG"һ����紵����$N�������ٶ�����ڰ�֮�С�����\n" NOR, this_object ());
  if (who)
    who->add_temp ("invocation", -INVCOST);
  destruct(this_object());
}

void unconcious ()
{
  object who = query_leader ();
  if (who)
    who->add_temp ("invocation", -INVCOST);
  message_vision (HIG"$N�ҽ�һ��������ʧ����Ӱ���١�\n", this_object ());
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

int special_att ()
{
  object me = this_object ();
  object *enemy = me->query_enemy (), victim;
  int i = sizeof (enemy);
  victim = enemy[random(i)];
message_vision (HIG"$N����һ����Х��һ����������е������������������\n\n"NOR, me);   
message_vision (HIC"$N��ʱ�е�һ����㯣��������ز�֪���롣\n"NOR, victim);  
  victim->start_busy(3);  
  me->start_busy (1);
  return 1;
}
