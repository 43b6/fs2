#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
void create()
{
        set_name("��֥֥", ({"lo chi-chi","lo","chi-chi"}));
        set("long",@LONG

        ���������Ϸ������˲��䣡�ǲ����峤��СŮ������ΪСʱ
        ����Խ��棬�������أ��������뿪�����Ĵ����֣�������
        ������������������ĸ��ˣ�ϰ��һ���ı�����ط������
        ����Ͷ��ʥ��̵�����λ�Ӿ�ʦһְ��

LONG);
        set("gender","Ů��");
        set("class","prayer");
        set("family/master_name","�ֺ���");
        set("combat_exp",2000000);
        set("attitude","heroism");
        set("age",35);
        set("nickname","���Ǿ�");
        set("title","ʥ��̾�ʦ");
        set("kee",6500);
        set("max_kee",6500);
        set("force",10000);
        set("max_force",10000);
        set("force_factor",25);
        set_skill("cure", 80);
        set_skill("superforce", 95);
        set_skill("holy-force", 100);
        set_skill("dodge", 95);
        set_skill("force",95);
        set_skill("move", 95);
        set_skill("parry",95);
        set_skill("unarmed",100);
        set_skill("array",90);
        set_skill("fire-array",80);
        set_skill("canon",100);
        set_skill("literate",80);
        set_skill("shift-steps",100);
        set_skill("universe",100);
        map_skill("array","fire-array");
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/bluesea/level",60);
        set("chat_chance_combat", 40);
                set("chat_msg_combat", ({
                (: exert_function("bluesea") :),
                (: perform_action("force.bluesea1") :),
                (: perform_action("force.bluesea2") :),
                (: perform_action("force.bluesea3") :),
        }));
        setup();
    add_money("gold",20);
    carry_object("/open/prayer/obj/dragon-robe")->wear();
    carry_object("/open/prayer/obj/dragon-hat")->wear();
    carry_object("/open/prayer/obj/dragon-hands")->wear();
    carry_object("/open/prayer/obj/dragon-icer")->weild();
    carry_object("/open/prayer/obj/dragon-legging")->wear();
    carry_object("/open/prayer/obj/dragon-ring")->wear();
        create_family("ʥ���",2,"��ʦ");
}

int accept_fight(object who)
{
  return notify_fail("��֥֥΢Ц��˵: ����һ���˾�һ��.\n");

}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_13"))
        {
        command("say û�н�����ͬ��,�Ҳ���������������Ϊ���ҵ���!");
        return 0;
        }
        command("smile");
        command("say ��Ҫ��Ϊһλı�Լ��ǲ����׵ģ�");
        command("say �ҿ��Ǻ��ϸ��ร�");
        command("recruit "+ob->query("id"));
        ob->set("marks/�����Ǿ�",1);
        this_player()->set("title","ʥ������Ǿ����ҵ���");
}

// by ACKY
int accept_kill(object ob)
{
        int i;
        object ob1, hu_fa;
        ob1 = this_object();

        if( !present("hu-fa", environment(ob)) ) {
        tell_room(environment(ob),HIW"\nͻȻ�������λ����!!\n\n"NOR);
        for(i=0;i<2;i++)
        {
        hu_fa = new("/open/prayer/npc/hu_fa");
        hu_fa->move(environment(ob));
        hu_fa->command("guard literate");
        hu_fa->command("follow "+ob->query("id"));
        hu_fa->kill_ob(ob);
	}}
        if( ob->query_temp("lochichi") > 3 ) {
		command("say ��, ����? û��ô���ף�\n" );
		ob->delete_temp("lochichi");
		ob->start_busy(1);
	}
	ob->add_temp( "lochichi", 1 );
	message_vision( HIR"����������˹����е����󵨿�ͽ����ʦ��Ҳ��ð������\n" NOR, ob );
        return 1;
}

void greeting(object ob)
{
        if (ob->query_skill("coldpoison", 1))
//      if ((present("five poison", ob)) || (present("dark poison", ob)) || (present("faint poison", ob)) || (present("rose poison", ob)) )
        {
        command("say �������������ѧ�ж���֮�ˣ�ɱ��뷣���");
        kill_ob(ob);
        }
        if( ob->query("class")=="dancer")
        {
        command("say ���������������-----��ɱ���ۣ���");
        kill_ob(ob);
     }
    return;
}

void die()
{
	object winner = query_temp("last_damage_from");
	int j;

        if(!winner)
	{
	::die();
	return ;
        }

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj4/stable_shells")->move(environment(winner));
	  message_vision(HIM"\n����֥֥�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/stable_shells",sprintf("%s(%s) ����֥֥�������ȶ�֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj4/stable_shells")->move(environment(winner));
	  message_vision(HIM"\n����֥֥�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/stable_shells",sprintf("%s(%s) ����֥֥�������ȶ�֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}