#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
void create()
{
        set_name("���ɳ���", ({"behavior_elder","behavior","elder"}));
        set("long","ʥ�����������λ���Ͻ����ɽ���������ѡ�����ģ����ɳ��Ϲ���˼��
������ר�Ÿ���ලʥ����ڸ��˵����о�ֹ���󷲽�����С�ǳ�ʦ�����þ�Ҫ���ؽ̹��
��䣮���в������ߣ����ɳ��ϱ�������ؼ��Դ��ݣ�\n");
        set("gender","����");
        set("class","prayer");
        set("family/master_name","�ֺ���");
        set("combat_exp",2700000);
        set("attitude","heroism");
        set("age",61);
        set("title","ʥ���");
        set("kee",7800);
        set("max_kee",7800);
        set("force",10000);
        set("max_force",10000);
        set("force_factor",25);
        set("max_gin",2800);
        set("max_sen",2800);
                set_skill("superforce", 150);
                set_skill("holy-force", 110);
                set_skill("cure", 110);
                set_skill("dodge", 95);
        set_skill("force",130);
                set_skill("move", 100);
                set_skill("parry", 105);
                set_skill("stick",110);
                set_skill("unarmed",95);
                set_skill("array",40);
                set_skill("literate",120);
        set_skill("fire-catch",110);
        set_skill("shift-steps",110);
                set_skill("universe",110);
                map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
                map_skill("stick","fire-catch");
                map_skill("unarmed","universe");
                set("functions/black/level",60);
        set("chat_chance_combat", 40);
                set("chat_msg_combat", ({
                (: exert_function("black") :),
        }));
        setup();
        add_money("gold",10);
        create_family("ʥ���",4,"����");
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_11"))
        {
        command("say û�н�����ͬ��,�Ҳ���������������Ϊ���ҵ���!");
        return 0;
        }
        command("smile");
        command("say ��Ȼ�ǽ�������˼,�Ժ���͸��Һú�ѧ��!");
        command("recruit "+ob->query("id"));
        ob->set("marks/ʥ��������",1);
        }

int accept_kill(object ob)
{
        int i;
        object ob1, hu_fa;
        ob1 = this_object();

        if( !present("hu_fa", environment(ob)) ) {
        tell_room(environment(ob),HIW"\nͻȻ�������λ����!!\n\n"NOR);
     for(i=0;i<2;i++)
     {
        hu_fa = new("/open/prayer/npc/hu_fa");
        hu_fa->move(environment(ob));
        hu_fa->command("guard behavior_elder");
        hu_fa->command("follow "+ob->query("id"));
        hu_fa->kill_ob(ob);
        }}
     tell_object(users(),HIR "����������˹����е����󵨿�ͽ��������Ҳ�Ҷ�����\n" NOR);
        return 1;
}

void greeting(object ob)
{
      if( ob->query_present("five poison") || ob->query_present("faint poison") || ob->query_present("rose poison") || ob->query_present("dark poison"))
      {
       command("say ���ö�,�Ŷ�û��!!");
        kill_ob(ob);
     }
    else
     {
     command("say ���ﲻ��������ĵط�!���뿪!!");
    }
    return;
}
