#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;

string ask_lover()
{
    object ob=this_player();
    if( ob->query("family/family_name") =="ʥ���" && ob->query_temp("youkoun") >= 1 )
    {
    ob->set_temp("youkoun", 2);
    return("[36m������ʮһ, ��ϼɽ�ɵĵ���, Ҳ�����ҵľ�������!!�书��ǿ, �����Ҿ�....
�����ҵ�[���]ȴ�������Ҹ�������!![0m\n");
    }
    else
    {
    return("[36m�Ҹ���Ҫ�ش��������ѽ!![0m\n");
    }
}

string ask_emery()
{
    object ob=this_player();
    if( ob->query_temp("youkoun") >= 2 )
    {
    ob->set_temp("youkoun", 3);
    return("[36m������[���], ������������, Ҳ������ʦ��!!��Ȼ�����ҹ���[�̷�]����
���ǻ����������!!��������!![0m\n");
    }
    else
    {
    return("[36m�Ҹ���Ҫ�ش��������ѽ!![0m\n");
    }
}

string ask_room()
{
    object ob=this_player();
    if( ob->query_temp("youkoun") >= 3 )
    {
    ob->set_temp("youkoun", 4);
    return("[36m��Ȼ�Ұ��������˹���, ������֪������û��, �������ͷ�͸�û������!!
�����Ҿ�˽����һ���̷�, ÿ�쿽����, ϣ�����ܲ���Ƥ��֮�������!!�������⼸����, 
��Ҳ�Դ���һ��[ѱ����]!!����һ��С�ջ��!![0m\n");
    }
    else
    {
    return("[36m�Ҹ���Ҫ�ش��������ѽ!![0m\n");
    }
}

string ask_skill()
{
    object ob=this_player();
    if( ob->query_temp("youkoun") >= 4 )
    {
    ob->set_temp("youkoun", 5);
    return("[36mѱ����??�!!�����ҳ������̷�����Ű�������������һ��������ѧ!!
Ȼ����ʹ�����Ʒ�Ұ�޵���;��, Ҳ�ر����Ч��!![0m\n");
    }
    else
    {
    return("[36m�Ҹ���Ҫ�ش��������ѽ!![0m\n");
    }
}

string ask_red()
{
    object ob=this_player();
    if( ob->query_temp("youkoun") >= 3 )
    {
    ob->set_temp("youkoun", 6);
    return("[36mֻҪ�ܽ��������, һ�������������ת���!!��Ը��(nod)�����æ��??[0m\n");
    }
    else
    {
    return("[36m�Ҹ���Ҫ�ش��������ѽ!![0m\n");
    }
}

string ask_book()
{
    object ob=this_player();
    object ob3=new("/open/prayer/obj/trainbook");
    if( ob->query("quests/trainbeast",1) && !present("trainbook",ob) )
    {
    ob3->move(this_player());
    return "���Լ��úõش�Ħ��Ħ��!!\n";
    }
    else
    {
    return "�ǵ�ѱ����ֻ��Ұ����Ч�ö����!!\n";
    }
}   


void create()
{
        set_name("�ܬL�", ({"chou shou-chin","chou","shou-chin"}));
        set("long",@LONG

        �����ŵ����������Թ��죬���Ϊʥ������ŵ�����
        , ����ȴ���ȵ���������, ���޽���������, �κ���
        �Զ����ý���������, �����������!!����ϰ���ڹ�
        �����ǳ����!!

LONG);
        set("gender","Ů��");
        set("class","prayer");
        set("family/master_name","�ֺ���");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",34);
        set("title","��������");
        set("kee",5900);
        set("max_kee",5900);
        set("force",9000);
        set("max_force",9000);
        set("max_gin",3900);
        set("max_sen",3900);
        set("force_factor",10);
        set_skill("holy-force", 90);
        set_skill("superforce", 80);
        set_skill("cure", 20);
        set_skill("dodge",70);
        set_skill("canon",80);
        set_skill("force",90);
        set_skill("move", 40);
        set_skill("parry",70);
        set_skill("unarmed",60);
        set_skill("literate",40);
        set_skill("shift-steps",60);
        set_skill("universe",80);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("inquiry",([
        "�̷�":(: ask_room :),
        "����":(: ask_lover :),
        "���":(: ask_emery :),
        "���":(: ask_red :),
        "����":(: ask_book :),
        "ѱ����":(: ask_skill :),
        ]));
        set("functions/bluesea/level",40);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: perform_action("force.blue1") :),
        (: perform_action("force.blue2") :),
        (: exert_function("blue") :),
        }));
        setup();
    add_money("gold",5);
    carry_object("/open/prayer/obj/emery-robe")->wear();
    carry_object("/open/prayer/obj/hat")->wear();
    carry_object("/open/prayer/obj/emery-belt")->wear();
    carry_object("/open/prayer/obj/emery-armband")->wear();
        create_family("������",5,"����");
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_7"))
        {
        command("say û�н�����ͬ��,�Ҳ������������������!");
        return 0;
        }
        command("smile");
        command("say ��Ȼ�ǽ�������˼,����ͽ����������Ű�!");
        command("say ʥ��̵ľ�ѧ������,�ɲ�����ô��ѧ��!");
        command("say �����������ž�Ҫ��������!!֪����??");
        command("recruit "+ob->query("id"));
        ob->set("marks/ʥ�������",1);
        this_player()->set("title","ʥ����������׼ҵ���");
        }

void init()
{
        object ob;
        ::init();
        if(interactive(ob =this_player()) && !is_fighting() )
        {
        remove_call_out("greeting");
        call_out("greeting",2,ob);
        add_action("do_nod","nod"); 
        }
}

int do_nod()
{
        object ob=this_player();
        if( ob->query_temp("youkoun") < 6  )
        {
        return 0;            
        }
        else
        {
        ob->set_temp("kill_red",1);
        write("[36m�ǾͰ�����ȥ����!!�³�֮��, �һ����ô���!![0m\n");
        return 1;
        }

}

void greeting(object ob)
{
    if(!ob) return ;

        if( ob->query_temp("�ô��̷�",1) && ob->query("class") == "prayer" )
        {
          if((int)ob->query("combat_exp") > 300000)
          {
          command("tender "+getuid(ob));
          write("[36mֻ��Ů�˲Ż��˽�Ů�˵�����!!!![0m\n");
          write("[36m�����������ʧȥ[����]��������??[0m\n");
          ob->set_temp("youkoun",1);
          return;
          }
          else
          {
          write("[31m��С��, �������Խ��뱾�������̷�!![0m\n");
          ob->set_temp("youkoun",1);
          kill_ob(ob);
          return;
          }
        }

        if (ob->query_temp("kill_red") >= 2 && !ob->query_temp("kill_eleven") )
        {
        write("\n[36mлл����������æ!!�Ҿͽ���[ѱ����]��Ϊ������!![0m\n");
        ob->delete_temp("youkoun");
        ob->set_skill("train-beast",5);
        ob->set("quests/trainbeast", 1);
        ob->add("max_force",50);
        return;
        }

        if ( ob->query("kill_eleven") && ob->query("family/master_name") != "�ܬL�")
        {
        write("[36m�Ҽǵ��������, ������, �㾹Ȼ���˺��ҵ�����!![0m\n");
        kill_ob(ob);
        return;
        }

        if (ob->query_skill("coldpoison", 1))
//      if ((present("five poison", ob)) || (present("dark poison", ob)) || (present("faint poison", ob)) || (present("rose poison", ob)) )
        {
        write("[33m�������������ѧ�ж���֮�ˣ�ɱ��뷣���[0m\n");
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

void die()
{

    object ob;
    ob= this_object()->query_temp("last_damage_from");
    if( ob && userp(ob) ) 
    {
    ob->delete_temp("kill_red");
    ob->set_temp("kill_youkoun", 1);
    write("[36m��..............[0m\n");
    }
    ::die() ;
}
