#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;

string ask_man()
{
        object ob=this_player();
        if( ob->query_temp("high-man") >= 3 )
        {
        ob->set_temp("high-man", 4);
        return("�����鼫Ϊ�º�, �ô򱧲�ƽ, ���� 3 ��ǰ�����֮��ǰ����ԭ����, ��;��Ϯ, �ҿ���λ���˴�Ȳ���������!!���Ĵ�����, �治֪��Ҫ��β���������??
�����Ϸ�����, ֻҪ��������Σ��ʱ, ��Ӧ�û�ͦ�������!!\n");
        }
        else
        {
        return("��, ������ЩҪ��ɶ��??\n");
        }
}        

void create()
{
        set_name("��������", ({"gonfu_elder","gonfu","elder"}));
        set("long",@LONG

        ʥ��̻��̳���֮һ�Ĵ������ϣ�����Ǭ����������
        ������ͬ��һ���Ī�⣬��������Ҳ��̾���磡�ǳ�
        ϲ����ѧ����ı��ԣ����Ҷ��ڸ��ҵ���ѧ��������
        һ�����ǽ��ڵ���ѧͨ���븱�������Ǿ��ǰݰ��ֵܣ�

LONG);
        set("gender","����");
        set("class","prayer");
        set("nickname","���");
        set("family/master_name","�ֺ���");
        set("combat_exp",1500000);
        set("attitude","heroism");
        set("age",58);
        set("title","ʥ���");
        set("kee",5500);
        set("max_kee",5500);
        set("force",10000);
        set("max_force",10000);
        set("force_factor",15);
        set("max_gin",2800);
        set("max_sen",2800);
        set_skill("superforce", 90);
        set_skill("dodge", 60);
        set_skill("cure",65);
        set_skill("literate",65);
        set_skill("force",90);
        set_skill("holy-force",85);
        set_skill("move", 70);
        set_skill("canon",90);
        set_skill("parry", 70);
        set_skill("universe",95);
        set_skill("unarmed", 90);
        set_skill("shift-steps",85);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("inquiry",([
        "��������":(: ask_man :),
        ]));
        set("functions/goldsun/level",60);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: exert_function("goldsun") :),
        }));
        setup();
        create_family("ʥ���",4,"����");
    carry_object("/open/prayer/obj/dragon-robe")->wear();
    carry_object("/open/prayer/obj/dragon-hat")->wear();
    carry_object("/open/prayer/obj/dragon-hands")->wear();
    carry_object("/open/prayer/obj/dragon-icer")->wield();
    carry_object("/open/prayer/obj/dragon-legging")->wear();
    add_money("gold",10);
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_9"))
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
        int i,j;
        object ob1, hu_fa, *enemy;
        ob1 = this_object();
        add_temp("kill_me",1);
        if(query_temp("kill_me")>5)
        {          
          message_vision( HIY"\n$N�ܲ��˵��˵�ɧ�Ŷ�������!!\n"NOR,ob1);
          set("title",HIR"������"NOR);         
          enemy = all_inventory( environment(ob1) );
          j=sizeof(enemy);
          for(i=0;i<j;i++)
          {
            if(userp(enemy[i]) && !enemy[i]->is_fighting() && living(ob1))
              kill_ob(enemy[i]);
          }
        }
        if( !present("hu-fa", environment(ob)) && living(ob1)) {
        tell_room(environment(ob),HIW"\nͻȻ�������λ����!!\n\n"NOR);
        for(i=0;i<2;i++)
        {
        hu_fa = new("/open/prayer/npc/hu_fa");
        hu_fa->move(environment(ob));
        hu_fa->command("guard behavior_elder");
        hu_fa->command("follow "+ob->query("id"));        
        hu_fa->kill_ob(ob);        
        }}
        write("����������˹����е����󵨿�ͽ��������Ҳ�Ҷ�����\n");
        return 1;
}

void init()
{
        object ob;
        ::init();
        if(interactive(ob =this_player()) && !is_fighting() )
        {
        remove_call_out("greeting");
        call_out("greeting",1,ob);
        }
}

void greeting(object ob)
{
        if(!ob) return ;
        if (ob->query_temp("high-man") == 2 )
        {
        write("\n[36m�Ǻ�, ����λ������ֶ���˵��Щʲô��??��, ��������ļ�, �ѹ�����������������!![0m\n");
        write("\n[36m��λ[��������]��ѧ��ķǳ����, �������ڽ�, ��, ��޵�������, �������˰ݷ�!!����������һ��֮Ե��!![0m\n");
        ob->delete_temp("high-man");
        ob->set_temp("high-man", 3);
        return;
        }

        if (ob->query_skill("coldpoison", 1))
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
