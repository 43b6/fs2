#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
void create()
{
        set_name("���", ({"ka hui","hui","ka"}));
        set("long",@LONG
        �����ŵ����������ص�������ʿ����Ϊ�������ʥ��̷ǳ�
        �ĳ��ţ�����������ʱ��Ͷ����ڵĹ�������Ȼ���Ͳ�����
        ���Ժգ�����Ϊ�������ľ��񱻽��������ͣ�����������
        Ϊ�����ŵ�����֮һ��
LONG);
        set("gender","����");
        set("class","prayer");
        set("family/master_name","�ֺ���");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",51);
        set("title","��������");
        set("kee",6000);
        set("max_kee",6000);
        set("force",9000);
        set("max_gin",4000);
        set("max_sen",4000);
        set("max_force",9000);
        set("force_factor",5);
        set_skill("holy-force", 60);
        set_skill("superforce", 80);
        set_skill("cure", 40);
        set_skill("dodge", 80);
        set_skill("force",60);
        set_skill("move", 60);
        set_skill("parry", 80);
        set_skill("canon", 80);
        set_skill("unarmed",70);
        set_skill("literate",50);
        set_skill("shift-steps",80);
        set_skill("universe",60);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/white/level",40);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: exert_function("white") :),
        }));
        setup();
    carry_object("/open/prayer/obj/emery-robe")->wear();
    carry_object("/open/prayer/obj/hat")->wear();
    carry_object("/open/prayer/obj/emery-armband")->wear();
    carry_object("/open/prayer/obj/emery-belt")->wear();
    carry_object("/open/prayer/obj/emery-firer")->wield();
    add_money("gold",5);
        create_family("������",5,"����");
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_2"))
        {
        command("say û�н�����ͬ��,�Ҳ������������������!");
        return 0;
        }
        command("smile");
        command("say ����������֮��,��ͱ���Խ�����,����!֪����??");
        command("recruit "+ob->query("id"));
        ob->set("marks/ʥ�������",1);
        this_player()->set("title","ʥ����������׼ҵ���");
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
