#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
inherit SSERVER;
object ob1=this_object();
string do_crystal();
string do_help()
{
    object ob2=this_player();
    if( !ob2->query_temp("ɱ���˷�") && !ob2->query_temp("can_tell",1)  )
    {
    return(" [36m���²�����ʥ��̵�ִ����, ˡ�������Ѵ���!![0m\n");
    }
    ob2->delete_temp("can_tell");
    ob2->set_temp("can_go",1);
    return(" ��!����������޷���ɽ�������������,��ʵ���޷�ԭ����..\n
    ����.........\n");
}

string do_else()
{
    object ob2=this_player();
    if( !ob2->query_temp("can_go",1) && !ob2->query_temp("ɱ���˷�") )
    {
    return("  ���²�Ը��̸����!!������ذ�!!");
    }
    ob2->delete_temp("can_go");
    ob2->set_temp("will_go",1); 
    return(" ��ȥ��������������,�Ҿͷ�����!!Ը����(nod)??\n");
} 

string ask_water()
{
    object ob=this_player();
    if(!ob->query_temp("ask_hurted") && !ob->query_temp("can_pass"))
    {
    return(" ��ˡ��������!!�����ƺ���Ȩ�����ҽ�����ѧ֮��!!\n");
    }
    ob->delete_temp("ask_hurted");
    ob->set_temp("can_take",1);
    return(" �����Ը�Ҫ��ȥ����ˮ�������������ó���!!\n");
}

string do_crystal()
{
    object ob2=this_player();
    object ob3;
    if( ob2->query("quests/white-crystal",1) && !present("white-crystal",ob2) )
    {
    ob3=new("/open/prayer/obj/crystal1");
    ob3->move(this_player());
    return("��ˮ�������һ�����, �����ص���������ѧѧ������ķ�!!\n");
    } 
    else
    {
    return("��!!��ˮ�������ڻ������䲻����!!���Ǽ�������!!");
    }
} 

void create()
{
        set_name("˾���", ({"sema ching","ching"}));
        set("long",@LONG

        ����ŵ���������ʥ�����������        [��ѧ���]�ĳƺţ���ѧ
        ���룡���ڸ��ֵ��鼮�������ԣ����Գ��ȣ�����ϸ�壬�ǰ�
        ���Ÿ����������ϵĴ�磮��ѧ������������ұ������ڹ���
        ��������

LONG);
        set("gender","����");
        set("class","prayer");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",48);
        set("nickname","��ѧ���");
        set("title","�������");
        set("kee",4500);
        set("max_kee",4500);
        set("force",9000);
        set("max_force",9000);
        set("force_factor",5);
        set("max_gin",3500);
        set("max_sen",3500);
        set_skill("holy-force", 70);
        set_skill("superforce", 80);
        set_skill("cure", 40);
        set_skill("dodge", 70);
        set_skill("force",70);
        set_skill("canon",70);
        set_skill("move", 50);
        set_skill("parry", 70);
        set_skill("unarmed",70);
        set_skill("literate",60);
        set_skill("shift-steps",70);
        set_skill("universe",80);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/black/level",40);
        set("inquiry",([
        "�˷�":"�����˷��������Խ��˷�Ű������,���Ա��ҹ��ڵ���֮�ڷ�ʡ!!\n",
        "����":(: do_help :),
        "����":(: do_else :),
        "ȭʦ":"ȭʦ������ȥ���ߵ�, ��Ϊ����������һ������!!\n",
        "����":"����һ������ˮ��!!\n",
        "����ˮ��":"�ǰ�ɫ�Ļ���ˮ��, �����Ǽ��ػ����ķ���!!\n",
        "��ˮ��":(: do_crystal :),
        "������":(: ask_water :),
        ]));
        set("chat_chance",3);
        set("chat_msg", ({
        HIC+"˾����ʵ�:����������������������������!!\n\n"+NOR
        HIC+"����������������������������!!\n\n"+NOR,
        HIC+"�����־填���򳾶���Ⱦһ����!!\n\n"+NOR
        HIC+"��Ԩ�ı������������ʧһ����!!\n\n"+NOR,
        }) );
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: exert_function("black") :),
        }));
        setup();
    carry_object("/open/prayer/obj/emery-robe")->wear();
    carry_object("/open/prayer/obj/hat")->wear();
    carry_object("/open/prayer/obj/emery-belt")->wear();
    carry_object("/open/prayer/obj/emery-firer")->wield();
    add_money("gold",5);
    create_family("ʥ���",5,"�������");
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

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_1"))
        {
        command("say û�н�����ͬ��,�Ҳ������������������!");
        return 0;
        }
        command("smile");
        command("say ��Ȼ�ǽ�������˼,�Ժ���͸��Һú�ѧ��!");
        command("recruit "+ob->query("id"));
        ob->set("marks/ʥ�������",1);
        this_player()->set("title","ʥ���������׼ҵ���");
}

int do_nod()
{
  object ob2=this_player();
  if( !ob2->query_temp("will_go",1))
  {
  return 0;
  }
  else
  {
  ob2->delete_temp("will_go");
  ob2->set_temp("can_pass",1);
  write(" ��ȥ��������ϸ���!!���������ν��붴�ߵ�!!\n");
  return 1;
  }
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
            
