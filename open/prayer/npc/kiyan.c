#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
string ask_reason()
{
    object ob2=this_player();
    if( ob2->query("family/master_name") =="����ʫ" )
    {
    ob2->set_temp("can_ask",1);
    return("��������Ů�ɵĽ���!!������[32m��Ů��[0m[36m��������......\n
    �����Դ��ҵ�ʦ��[32m½�ܽ[36m��ı��ȡ����֮��.....\n");
    }
    else
    {
    return("[36m��λ��ʿ�������Ǳ��ŵĵ���, ��ذ�!![0m");
    }
}

string ask_lu()
{
    object ob2=this_player();
    if( (ob2->query("family/master_name") =="����ʫ") && ob2->query_temp("can_ask",1) )
    {
    ob2->delete_temp("can_ask");
    ob2->set_temp("can_kill",1);
    return("[36mʦ��½�ܽ������ݺ���, ʹ���ұ�����[���].....\n
    ������ֻ�ô�����һλСʦ��Զ������.....[0m\n");
    }
    else
    {
    return("[36m��λ��ʿ�������Ǳ��ŵĵ���, ��ذ�!![0m");
    }
}

string ask_misunder()
{
    object ob2=this_player();
    if( (ob2->query("family/master_name") =="����ʫ") && ob2->query_temp("can_kill") )
    {
    return("[36m���ڶ�˵Ҳû�˻�������, ���������ɱ��ʦ��½�ܽ, �Ϳ�������ͷ֮Թ��.\n
    ȥ���ҵ���һ��[Сʦ��], ���������ʦ��Ĳ�����!![0m\n");
    ob2->delete_temp("can_kill");
    ob2->set_temp("go_kill",1);
    }
}

string ask_book()
{
    object ob2=this_player();
    object ob3=new("/open/prayer/obj/girlbook");
    if( ob2->query("quests/girlsword",1) && !present("girlbook",ob2) )
    {
    ob3->move(this_player());
    return "�����Ҫ�úõ�ѧϰ��Ů�ɵĽ���!!\n";
    }
    else
    {
    return "�����Ҳ�������!!���������彣[31m[��Խ�][36m�ҷ��ڿ����ŵ�ĳһ���ط�!!\n";
    }


}   

void create()
{
        set_name("����ʫ", ({"chi i-zhi","chi","i-zhi"}));
        set("long",@LONG

        �����ŵ�������ԭ������ԭ���ֵ�һλСʦ̫����Ϊ���ɵ�
        ������, ���ǲ�֪Ϊ���ܵ�����������ʥ���, һ����Ůɢ
        �����������뻯, ��ʥ��̵������ѧ��, ��Ҳ������һ��
        һ�ĺ���!!

LONG);
        set("gender","Ů��");
        set("class","prayer");
        set("family/master_name","�ֺ���");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",28);
        set("title","��������");
        set("kee",5000);
        set("max_kee",5000);
        set("force",9000);
        set("max_force",9000);
        set("max_gin",4000);
        set("max_sen",4000);
        set("force_factor",5);
        set_skill("holy-force", 50);
        set_skill("superforce", 80);
        set_skill("cure", 40);
        set_skill("dodge",60);
        set_skill("force",50);
        set_skill("canon",80);
        set_skill("move", 40);
        set_skill("parry", 80);
        set_skill("unarmed",80);
        set_skill("literate",40);
        set_skill("shift-steps",60);
        set_skill("universe",80);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/bluesea/level",40);
        set("inquiry",([
        "��Ůɢ������":"��������Ϊĳ��[32mԭ��[36m, ���Բ����Ѳ����䵽�����!!\n",
        "ԭ��":(: ask_reason :),
        "½�ܽ":(: ask_lu :),
        "��Ů��":"��Ů������ԭ��һ��С����, ���ǽ������Ǹ�������, ��Ϊʦ����λ����, ����[32m����[36mҲ��������!!\n",
        "����":(: ask_book :),
        "��Խ�":"��������ר�õı���, �뽣����ϻ�ʹ�Ļ�, ɱ��������!!\n",
        "���":(: ask_misunder :),
        ]));
        set("chat_chance",5);
        set("chat_msg", ({
        HIC+"����ʫ����:�������ġ������������硫!!\n\n"+NOR
        HIC+"��������������������ˮ��!!\n\n"+NOR,
        HIC+"���������Ϊ�����ֻء�!!\n\n"+NOR
        HIC+"�ټұ������������þ��衫!!\n\n"+NOR,
        }) );
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: perform_action("force.bluesea1") :),
        (: perform_action("force.bluesea2") :),
        (: exert_function("bluesea") :),
        }));
        setup();
    add_money("gold",5);
    carry_object("/open/prayer/obj/emery-robe")->wear();
    carry_object("/open/prayer/obj/hat")->wear();
    carry_object("/open/prayer/obj/emery-belt")->wear();
    carry_object("/open/prayer/obj/emery-firer")->wield();
    carry_object("/open/prayer/obj/emery-armband")->wear();
    create_family("������",5,"����");
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_6"))
        {
        command("say û�н�����ͬ��,�Ҳ������������������!");
        return 0;
        }
        command("smile");
        command("say ��Ȼ�ǽ�������˼,����ͽ����ҿ����Ű�!");
        command("say ʥ��̵ľ�ѧ������,�ɲ�����ô��ѧ��!");
        command("say ��ѧ�ø�\����ѧ�͵úú���ϰ�ڹ��Ļ���!");
        command("recruit "+ob->query("id"));
        ob->set("marks/ʥ�������",1);
        this_player()->set("title","ʥ��̿������׼ҵ���");
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

int accept_object(object ob2, object obj, object ob3)
{
        if( obj->query("name") == "���" )
        {
          command("pat "+getuid(ob2));
          command("say ̫����, ����Ľ���ʦ��ɱ����!!л�ˡ�");
          if( ob2->query("family/master_name") == "����ʫ" && !ob2->query("marks/girlsword") && ob2->query_temp("will_kill") )
          {
          command("say ��Ȼ����������������, �ұ㽫�˽��״�������ɡ�");
          write(this_object()->query("name")+"������������������һ����㿴��\n\n"+
          "����ô�һ�����ƺ��쳣���ʺ���, �����ѧ�����ֿ��Ը���һ���ˡ�\n\n"+
          "[36m��ѧ������Ů�ɵ�[32m����Ůɢ��������[0m��\n\n");
              ob2->set_skill("girlsword",10);
              ob2->set("quests/girlsword",1);
              ob3=new("/open/prayer/obj/girlbook");
              ob3->move(this_player());
          }
          destruct(obj);
        }
        else
        command("? "+getuid(ob2));
        return 1;
}
