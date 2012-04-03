#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
void create()
{
        set_name("˾ͽ֪��", ({"se-tu hua","se-tu","hua"}));
        set("long",@LONG

        ����ŵ�����������Ȩ����˾ͽ�ٵ�Ԫ�䣬����������ԭս��
        ʱ�ڵ����Ž��࣮����������ڽ����Ĵ���֮�£�һͬ����ʥ
        ��̣�˾ͽ֪�����ڹ��������Ϊ�ǳ�רһ����ʥ��̵����
        ��ѧ--���챦���Ѿ�������¯����!!

LONG);
        set("gender","Ů��");
        set("class","prayer");
        set("family/master_name","�ֺ���");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",44);
        set("title","�������");
        set("kee",5400);
        set("max_kee",5400);
        set("force",9000);
        set("max_force",9000);
        set("max_gin",3800);
        set("max_sen",3800);
        set("force_factor",10);
        set_skill("holy-force", 70);
        set_skill("superforce", 80);
        set_skill("cure",60);
        set_skill("dodge", 60);
        set_skill("force",70);
        set_skill("move", 60);
        set_skill("parry", 80);
        set_skill("canon", 80);
        set_skill("unarmed",70);
        set_skill("literate",60);
        set_skill("shift-steps",60);
        set_skill("universe",60);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/goldsun/level",40);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: perform_action("force.sun2") :),
        (: exert_function("goldsun") :),
        }));
        setup();
    carry_object("/open/prayer/obj/emery-robe")->wear();
    carry_object("/open/prayer/obj/speed-ring")->wear();
    carry_object("/open/prayer/obj/emery-armband")->wear();
    carry_object("/open/prayer/obj/emery-belt")->wear();
    carry_object("/open/prayer/obj/emery-firer")->wield();
    add_money("gold",5);
    create_family("�����",5,"����");
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_4"))
        {
        command("say û�н�����ͬ��,�Ҳ������������������!");
        return 0;
        }
        command("smile");
        command("say ��Ȼ�ǽ�������˼,����ͽ���������Ű�!");
        command("say �����ķ�������,�ɲ�����ô��ѧ��!");
        command("say ��ѧ�����ķ��͵úú���ϰ�ڹ��Ļ���!");
        command("recruit "+ob->query("id"));
        ob->set("marks/ʥ�������",1);
        this_player()->set("title","ʥ���������׼ҵ���");
        }

int accept_kill(object ob)
{
        ob->set_temp("ɱ��֮��",1);
        command("say ��!!"+ob->name()+"�ҷ��������ұ���ġ�");
        return 1;
}

void greeting(object ob)
{
        if( ob->query_temp("ɱ��֮��") )
        {
        command("angry "+getuid(ob));
        command("say �����ȷ�[˾ͽ��]������!!!!");
        kill_ob(ob);
        return;
        }

        if (ob->query_skill("coldpoison", 1))
//      if ((present("five poison", ob)) || (present("dark poison", ob)) || (present("faint poison", ob)) || (present("rose poison", ob)) )
        {
        command("say �������������ѧ�ж���֮�ˣ�ɱ��뷣���");
        kill_ob(ob);
        return;
        }
        if( ob->query("class")=="dancer")
        {
        command("say ���������������-----��ɱ���ۣ���");
        kill_ob(ob);
        return;
        }
        return;
}
