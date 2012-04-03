#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
void create()
{
        set_name("���ɳ���", ({"behavior_elder","behavior","elder"}));
        set("long",@LONG

        ʥ�����������λ���Ͻ����ɽ���������ѡ�����ģ����ɳ���
        ����˼�壬����ר�Ÿ���ලʥ����ڸ��˵����о�ֹ����
        ������С����ʦ�����þ�Ҫ���ؽ̹�Ĺ�䣮���в������ߣ�
        ���ɳ��ϱ�������ؼ��Դ��ݣ�

LONG);
        set("gender","����");
        set("class","prayer");
        set("family/master_name","�ֺ���");
        set("combat_exp",1500000);
        set("attitude","heroism");
        set("age",61);
        set("title","ʥ���");
        set("kee",4800);
        set("max_kee",4800);
        set("force",10000);
        set("max_force",10000);
        set("force_factor",15);
        set("max_gin",2800);
        set("max_sen",2800);
        set_skill("holy-force", 90);
        set_skill("dodge", 70);
        set_skill("cure",65);
        set_skill("literate",55);
        set_skill("force",80);
        set_skill("move", 70);
        set_skill("parry", 70);
        set_skill("universe", 90);
        set_skill("unarmed", 90);
        set_skill("canon",90);
        set_skill("shift-steps",75);
        set_skill("superforce",80);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/black/level",60);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: exert_function("black") :),
        }));
        setup();
    add_money("gold",10);
    carry_object("/open/prayer/obj/dragon-robe")->wear();
    carry_object("/open/prayer/obj/dragon-hat")->wear();
    carry_object("/open/prayer/obj/dragon-hands")->wear();
    carry_object("/open/prayer/obj/dragon-legging")->wear();
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
        int i,j;
        object ob1,hu_fa,*enemy;
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
        if( !present("hu-fa", environment(ob)) && living(ob1))
        {
        tell_room(environment(ob),HIW"\nͻȻ�������λ����!!\n\n"NOR);
        for(i=0;i<2;i++)
         {
         hu_fa = new("/open/prayer/npc/hu_fa");
         hu_fa->move(environment(ob));
         hu_fa->command("guard behavior_elder");
         hu_fa->command("follow "+ob->query("id"));
         hu_fa->kill_ob(ob);
         }
        }
        write("����������˹����е����󵨿�ͽ��������Ҳ�Ҷ�����\n");
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
