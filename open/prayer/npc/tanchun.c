#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;

string ask_study()
{
    object ob2=this_player();
    if( ob2->query("family/master_name") =="˾ͽ��" && (int)ob2->query("combat_exp") >= 300000 )
    {
    ob2->set("can_study",1);
    return("�����Ҵ��Ҿ���!!������Ҫ�úõ���ϰ�������ɲ���......\n");
    }
    else
    {
    return("[36m�Ҳ�������ѧϰ�����Ʒ�!![0m");
    }
}

string ask_test1()
{
    object ob2=this_player();
    if( ob2->query("family/master_name") =="˾ͽ��" && ob2->query("can_study",1) )
    {
    ob2->set("can_test1",1);
    ob2->set_skill("test1",1);
    return("��������--����ɳ, ��Ҫ�����Ʒ�֮���ȶ����Լ���˫��ǿ��, \n
    Ȼ�������������֮ʱ, �ƾ���͸��֮��, �˵�֮��!!�Ƚ��ȼ���߰�!!\n");
    }
    else
    {
    return("[36m�Ҳ�������ѧϰ�����Ʒ�!![0m");
    }
}

string ask_test2()
{
    object ob2=this_player();
    if( ob2->query("family/master_name") =="˾ͽ��" && ob2->query_skill("test1",1) >=30 )
    {
    ob2->set("can_test2",1);
    ob2->set_skill("test2",1);
    return("��������--��ʯ��, ��Ҫ�����Ʒ�֮���ڶ����Լ���˫��ǿ�Ⱥ�, \n
    ���ճ���ʱ�ľ���, ���ܶ����ƾ������շ�����ľ���!!��������!!\n");
    }
    else
    {
    return("[36m�Ҳ�������ѧϰ�����Ʒ�!![0m");
    }
}

string ask_test3()
{
    object ob2=this_player();
    if( ob2->query("family/master_name") =="˾ͽ��" && ob2->query_skill("test2",1) >= 30 )
    {
    ob2->set("can_test3",1);
    return("������ָ��, ���ǽ�����������, ������Ƶ�ʯ�˽��жԴ�, ֻҪ�ܹ�����ʯ��
,�����ͨ������, ϰ����ɳ�Ƶ�������ѧ!!\n");
    }
    else
    {
    return("[36m�Ҳ�������ѧϰ�����Ʒ�!![0m");
    }
}

string ask_test4()
{
    object ob2=this_player();
    if( ob2->query_temp("win_stone",1) && ob2->query("can_test2",1) )
    {
    ob2->set_skill("ironhand",10);
    ob2->delete("can_test1");
    ob2->delete("can_test2");
    ob2->delete_skill("test1");
    ob2->delete_skill("test2");
    ob2->set("study/ironhand",1);
    ob2->set("quests/ironhand",1);
    return("�ܺ�, ��ͨ���˲���, ����ʹ����������ɳ�Ʒ�!!\n");
    }
}

string ask_book()
{
    object ob2=this_player();
    object ob3=new("/open/prayer/obj/ironbook");
    if( ob2->query("quests/ironhand",1) && !present("ironbook",ob2) )
    {
    ob3->move(this_player());
    return "�����Ҫ�úõ�ѧϰ�ҼҴ��ľ���!!\n";
    }
    else
    {
    return("[36m�Ҳ�������ѧϰ�����Ʒ�!![0m");
    }
}   

void create()
{
        set_name("˾ͽ��", ({"se-tu rong","se-tu","rong"}));
        set("long",@LONG

        ��Ȩ�ŵ�������������˾ͽ֪�����˷ֱ��Ϊʥ��̰�����
        ���������������ɽ�˺��ģ�˾ͽ�ٱ�������������ѧΪ
        ��ұ�����������������Ǭ�����������ѧȴҲ����޼�!

LONG);
        set("gender","����");
        set("class","prayer");
        set("family/master_name","�ֺ���");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",45);
        set("title","��Ȩ����");
        set("kee",4700);
        set("max_kee",4700);
        set("force",9000);
        set("max_force",9000);
        set("force_factor",5);
        set("max_gin",2700);
        set("max_sen",2700);
        set_skill("superforce", 80);
        set_skill("holy-force", 50);
        set_skill("cure", 40);
        set_skill("dodge", 60);
        set_skill("force",50);
        set_skill("move", 50);
        set_skill("parry", 90);
        set_skill("canon",80);
        set_skill("unarmed",60);
        set_skill("literate",40);
        set_skill("shift-steps",60);
        set_skill("universe",80);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/black/level",50);
        set("inquiry",([
        "��ɳ�Ʒ�":"�����ҼҴ���ѧ, һ���ֳɰ�ʽ!!����Ҫѧϰ��??\n",
        "ѧϰ":(: ask_study :),
        "��������":"�������ɷֱ���[��ɳ]��[��ʯ], �����ͨ��[����]�Ϳ�������!!\n",
        "��ɳ":(: ask_test1 :),
        "��ʯ":(: ask_test2 :),
        "����":(: ask_test3 :),
        "ͨ��":(: ask_test4 :),
        "ȭ��":(: ask_book :),
        ]));
        set("chat_chance",10);
        set("chat_msg", ({
        HIC+"˾ͽ������:����Ϊ�С�����Ϊ�����Կ�Ϊ�֡�����Ϊ�ҡ�!!\n"+NOR,
        }) );
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: exert_function("black") :),
        }));
        setup();
    carry_object("/open/prayer/obj/emery-robe")->wear();
    carry_object("/open/prayer/obj/emery-armband")->wear();
    carry_object("/open/prayer/obj/emery-firer")->wield();
    carry_object("/open/prayer/obj/speed-ring")->wear();
    carry_object("/open/prayer/obj/hat")->wear();
    create_family("��Ȩ��",5,"����");
    add_money("gold",5);
}

int accept_kill(object ob2)
{
        ob2->set_temp("ɱ��֮��",1);
        command("say ��!!"+ob2->name()+"�����ӻ����ұ���ġ�");
        return 1;
}

void attempt_apprentice(object ob2)
{
        if(!ob2->query_temp("allow_3"))
        {
        command("say û�н�����ͬ��,�Ҳ������������������!");
        return 0;
        }
        command("smile");
        command("say ��Ȼ�ǽ�������˼,�Ժ�������ĵغúø���ѧ���!!");
        command("recruit "+ob2->query("id"));
        ob2->set("marks/ʥ�������",1);
        this_player()->set("title","ʥ�����Ȩ���׼ҵ���");
        }

void greeting(object ob2)
{
    if( ob2->query("family/master_name") =="˾ͽ��" && (int)ob2->query("combat_exp") > 300000 )
    {
    command("pat "+getuid(ob2));
    command("say �ҿ���������ļ�, �����⴫�����ҼҴ���[��ɳ�Ʒ�]!!\n");
    return;
    }

    if(ob2->query_temp("ɱ��֮��",1))
    {
    command("angry "+getuid(ob2));
    command("say ��������[˾ͽ֪��]������!!!!");
    kill_ob(ob2);
    return;
    }

    if (ob2->query_skill("coldpoison", 1))
//      if ((present("five poison", ob2)) || (present("dark poison", ob2)) || (present("faint poison", ob)) || (present("rose poison", ob)) )
    {
    command("say �������������ѧ�ж���֮�ˣ�ɱ��뷣���");
    kill_ob(ob2);
    return;
    }
    if( ob2->query("class")=="dancer")
    {
    command("say ���������������-----��ɱ���ۣ���");
    kill_ob(ob2);
    return;
    }
    return ;
}


