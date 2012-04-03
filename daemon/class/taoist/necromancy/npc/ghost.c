
#include <ansi.h>
#include <combat.h>

inherit NPC;

#define bell_small 250
#define bell_big 500
#define INVLEVEL 1
#define MANACOST 40
#define INVCOST 15

object room2;
void create()
{
	set_name("��ͷ��", ({ "hell ghost", "ghost" }) );
	set("long", "����һ����������Ķ��ר����ץҪ�����ˡ�ƭƭС�����Ż���ͷ������ר����\n");
	set("attitude", "friendly");
        set("max_gin", 1000);
	set("max_kee", 1000);
	set("max_sen", 1000);
	set("str", 80);
	set("cor", 30);
	set("cps", 25);
	set_skill("whip",80);
	set("combat_exp", 200000);

	setup();

	carry_object(__DIR__"obj/ghost_armor")->wear();
	carry_object(__DIR__"obj/ghost_whip")->wield();
}

int accept_fight(object who)
{
        if(who==query_leader())
        {
          command("say �ٻ���,����Ӧ�ú����Եв���,��Ҫ���������!!");
          return 0;
        }
        else
        {
          command("say ��!���ú�!!");
          return 1;
        }
}
int accept_kill(object who)
{
        if(who==query_leader())
        {
          command("say �ٻ���,����Ӧ�ú����Եв���,��Ҫ���������!!");
          return 0;
        }
        else
        {
          command("say ��!���ú�!!");
          return 1;
        }
}

void init()
{
       
      set_heart_beat(1);
}

void heart_beat()
{
	object who = query_leader ();
//    if(!who) who=query_temp("leader");
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
   if(this_object()){
  message_vision (HIB"$N˵�����������ٻ��������Ѿ�������񣬾ʹ˸�ǣ�\n" +
		  "һ�����紵����$N��������֮�����ˡ�\n" NOR, this_object());
  destruct (this_object());
  }
}

void unconcious ()
{
  object who = query_leader ();
  if (who)
    who->add_temp ("invocation", -INVCOST);
  message_vision (HIB"$N�ҽ�һ����������Ϊ�ҽ���\n" NOR, this_object());
  destruct (this_object ());
}

void besummon(object who,object room)
{
	int i, bell;
	object *enemy;
	room2=room;

	message_vision (HIB "һ�����紵�����߳�һ����Ŀ������$N��\n" +
			"$N�ȵ������˴�����ң���\n" NOR, this_object());
	bell = (int)who->query ("bellicosity");
	set("combat_exp",who->query("combat_exp"));
	set_skill("whip",who->query_skill("whip",1));
	set_skill("gwhip",who->query_skill("gwhip",1));
	map_skill("whip","gwhip");
	set_skill("dodge",who->query_skill("dodge"));
	set_skill("parry",who->query_skill("parry"));
	if (bell < bell_small)
	  {
            message_vision ("�����Ц��������������Ҳ��ӣ�\n", this_object());
	  }
	else if (bell > bell_big )
	  {
	    message_vision ("�����Ц����С��һ׮��\n", this_object ());
	  }
	else
	  {
	    message_vision (HIR"$Nŭ�ȣ����²����Ҿ�Ȼ����ǲ�����\n", this_object ());
	     kill_ob (who);
	     set_leader (who);
	  }

	enemy = who->query_enemy();
	i = sizeof(enemy);
	while(i--) {
		fight_ob (enemy[i]);
		enemy[i]->fight_ob (this_object ());

	}
	set_leader(who);
	who->add_temp ("invocation", INVCOST);
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
