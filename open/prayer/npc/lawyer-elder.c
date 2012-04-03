#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
void create()
{
        set_name("ִ������", ({"lawyer_elder","lawyer","elder"}));
        set("long",@LONG

        �����ֺ����ĵܵܣ�������ѣ�����ϰ�����ķ��������ѡ��
        ��ϧΪ��һ��һ�ۣ�˿���������飬���Բ�����������Ϊ��
        �εĳм��ߣ���Ҳ�������Ե�ʽ����������ļ���һ��ȫ��
        ���ţ�ʥ��̵���ʢҲ���������������ģ�

LONG);
        set("gender","����");
        set("class","prayer");
        set("family/master_name","�ֺ���");
        set("combat_exp",1500000);
        set("attitude","heroism");
        set("age",61);
        set("title","ʥ���");
        set("kee",5600);
        set("max_kee",5600);
        set("force",10000);
        set("max_force",10000);
        set("force_factor",15);
        set("max_gin",2800);
        set("max_sen",2800);
        set_skill("superforce", 95);
        set_skill("dodge", 90);
        set_skill("cure",75);
        set_skill("literate",75);
        set_skill("force",80);
        set_skill("holy-force",90);
        set_skill("move", 85);
        set_skill("parry", 70);
        set_skill("universe", 80);
        set_skill("unarmed", 80);
        set_skill("shift-steps",85);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/bluesea/level",60);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: exert_function("bluesea") :),
        }));
        setup();
        create_family("ʥ���",4,"����");
    add_money("gold",10);
    carry_object("/open/prayer/obj/dragon-robe")->wear();
    carry_object("/open/prayer/obj/dragon-hat")->wear();
    carry_object("/open/prayer/obj/dragon-ring")->wear();
    carry_object("/open/prayer/obj/dragon-legging")->wear();
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_10"))
        {
        command("say û�н�����ͬ��,�Ҳ���������������Ϊ���ҵ���!");
        return 0;
        }
        command("smile");
        command("say ��Ȼ�ǽ�������˼,�Ժ���͸��Һú�ѧ��!");
        command("recruit "+ob->query("id"));
        ob->set("marks/ʥ��������",1);
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
        hu_fa->command("guard lawyer_elder");
        hu_fa->command("follow "+ob->query("id"));
        hu_fa->kill_ob(ob);
        }}
        write("����������˹����е����󵨿�ͽ��������Ҳ�Ҷ�����\n");
        if( ob->query_temp("elder2") > 3 ) {
		command("say ��, ����? û��ô���ף�\n" );
		ob->start_busy(1);
	}
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
