#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("�ֺ���",({"pope lin","pope","lin"}));
        set("long",@LONG

        û����֪������������Ҳû��֪�������书�ж����һ������Ī
        ������������ǰ����Ƽʻᣬʹ�������ˡ�ʥ��̡���Ҳ��֪
        �����úη�����������Ӵ����֯��Ҳ��Ϊ���, ���������ϵ���
        ��Ϊ�������񻰡���

LONG);
        set("gender","����");
        set("clan_kill",1);
        set("class","prayer");
        set("nickname","������");
        set("title","ʥ��̻ʡ���");
        set("combat_exp",7000000);
        set("attitude","heroism");
        set("age",75);
        set("max_kee",15000);
        set("str", 50);
        set("cor", 50);
        set("cps", 45);
        set("per", 30);
        set("int", 42);
        set("marks/tengin",1);
        set("force",50000);
        set("max_force",50000);
        set("force_factor", 40);
        set("max_gin",10000);
        set("max_sen",10000);
        set_skill("cure", 120);
        set_skill("superforce", 150);
        set_skill("dodge", 120);
        set_skill("force",150);
        set_skill("move", 120);
        set_skill("literate",120);
        set_skill("parry", 130);
        set_skill("array",130);
        set_skill("fire-array",130);
        set_skill("unarmed",130);
        set_skill("canon",150);
        set_skill("literate",120);
        set_skill("shift-steps",150);
        set_skill("universe",140);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("array","fire-array");
        map_skill("unarmed","universe");
        set("functions/blood/level",60);
        set("functions/tengin/level",120);
        set("chat_chance", 1);                                                  
        set("chat_msg", ({                                                      
                CYN"�̻�����������������������������ʯ�˲�����\n
                        �쳾���»Ӳ�����������Ц�ǳ��ˡ���\n"NOR,                                                          
                CYN"�̻�Ц����������ԡѪ��־�ߣ�������ı���мƣ�\n
                        һ�ں俪�չص���������˧Խ��ӡ���\n"NOR,                                                          
                CYN"�̻�̾�����������۱�����磬ǧ�ﶨ�������壻\n
                        ��������ǹ��ڣ��ٴ�����˭�빲����\n"NOR,                                                          
                CYN"�̻��ֵ������������¿ջ��һƬ����ˮ�¼䣻\n
                        ������ɽ���ܴ����糤�������ɹء���\n"NOR,                                                          
                CYN"�̻ʱ�������������ʱ�����У����²���ǿ��\n
                        ʱ���˾͵������첻�Ṽ�������˰�����\n"NOR,                                                          
                CYN"�̻��������ҹ������ǧɽ�£�·ң����ǧ�ֻ���\n
                        ��ղ�֪�˻������������οͶ��ҡ���\n"NOR,                                                          
                CYN"�̻�������������������Ŷ��죬��ѧ���������ꣻ\n
                        ˭����Խһ�߽磬�ݹ������������\n"NOR,                                                          
                CYN"�̻�˵���������½������ɾ��������ַ�ȡ���飻\n
                        ��Ҫ��ǿ����Ȱ��������������������\n"NOR,                                                          
        }) );                                                                   
        set("chat_chance_combat",40);
                set("chat_msg_combat", ({
                (: perform_action, "universe.tengin" :),
//              (: exert_function, "blood" :),
//              (: perform_action, "force.blood1" :),
//              (: perform_action, "force.blood2" :),
                (: perform_action, "force.blood3" :),
        }));
        setup();

        add_money("thousand-cash",20);
        carry_object("/open/prayer/obj/boris-boots")->wear();
        carry_object("/open/prayer/obj/boris-cloth")->wear();
        carry_object("/open/prayer/obj/boris-hat")->wear();
        carry_object("/open/prayer/obj/boris-hands")->wear();
        carry_object("/open/prayer/obj/kylin-belt")->wear();
        carry_object("/open/prayer/obj/dragon-icer")->wield();
        create_family("ʥ���",1,"�̻�");
        carry_object("open/prayer/obj/lin-head");

}

void init()
{
        add_action("do_join","join");
        add_action("do_select","select");
        add_action("do_verify","verify");
}

int accept_fight(object who)
{
return notify_fail("�̻�����ĵ� : ȥ.ȥ..ȥ...�������ҡ�\n");
}

int do_verify(string arg)
{
object me,ob,ob1;
me=this_player();
ob=new("open/prayer/obj/woodboard");
ob1=new("open/prayer/obj/ironboard");
if( arg!="board")
  {
    write("��Ҫ����ʲô\n");
    return 1;
   }
if(me->query("family/family_name")!="ʥ���")
  {
    write("ֻ��ʥ���ͽ�Ż�������\n");
    return 1;
  }

 if( present("wood board",me) || present("iron board",me) )
  {
    write("���Ѿ��������\n");
    return 1;
  }
  
 if ( me->query("marks/�����Ǿ�") )
    {
    write("����ʥ��̸ɲ���ר������!!�ɲ�Ҫ����!!\n");
    ob1->move(me);
      return 1;
    }
    else
    {
    write("����ʥ��̵����� ,����úñ��� ,������ʧ��\n");
    ob->move(me);
  return 1;
  }
}

  void attempt_apprentice(object ob)
{
        if(ob->query("marks/ʥ�������")==1)
        {
        if((int)this_player()->query("combat_exp")<=200000)
        {
        command("? " +ob ->query("id"));
        command("say �㲻�ǰݹ������ŵ���������?");
        command("say ����ĳ̶Ȼ������ʸ����ѧϰ��ѧ�����Ĵ����!");
        command("say �úø������Լ���ʦ����ѧ�����!");
        return 0;
        }
        command("look "+ob->query("id"));
        command("pat");
        command("say ��,���Ȼ�ǿ���֮��,�����ȥ����λ������Ϊ����ѧ��ָ��!");
        ob->delete("family");
        command("say ����ѡ��(select)��һλ������?");
        command("say ��������(gonfu_elder)��ִ������(lawyer_elder)���ǽ��ɳ���(behavior_elder)��");
        ob->set_temp("allow_select",1);
        }
        if(ob->query("marks/ʥ��������")==1)
        {
        if((int)this_player()->query("combat_exp")<=900000)
        {
        command("? " +ob ->query("id"));
        command("say �㲻���Ѿ��ݹ���λ������Ϊ��ʦ����?");
        command("say ����ĳ̶�������Ŀǰ�������ʸ����ѧϰ��ѧ�����Ĵ����!");
        command("say �úø��ų������ٶ�ѧ�����!");
        return 0;
        }
        command("look "+ob->query("id"));
        command("pat");
        command("say ��,���Ȼ���Ƿ���֮��,�����ȥ�ҽ��ڵ������Ǿ���Ϊ����ѧ��ָ��!");
        ob->delete("family");
        command("say �����ѡ�����Ǿ�(warrior)�������Ǿ�(literate)");
        ob->set_temp("allow_select",1);
        }
        if(ob->query("marks/�����Ǿ�")==1)
        {
        if((int)this_player()->query("combat_exp")<=2500000)
        {
        command("? " +ob ->query("id"));
        command("say �㲻���Ѿ��������Ǿ������ҵ�������?");
        command("say ����ĳ̶Ȼ������ʸ����ѧϰ��ѧ�����Ĵ����!");
        command("say �úø��������Ǿ���ĥ��ĥ����!");
        return 0;
        }
        command("look "+ob->query("id"));
        command("pat");
        command("say ��,���Ȼ�ǿ���֮��,�ӽ����ɱ��������Խ̵�!");
        ob->delete("family");
        command("recruit "+this_player()->query("id"));
        this_player()->set("title","[31mʥ��̵մ�����[0m");
        message("mud","[36mʥ��̻ʡ����ֺ���������Ц: \n
        ��������....������ʵ��̫����������\n
        [5m[33m"+this_player()->name()+"[0m[36m���ʥ��̵��ص���������ļ����ˣ�\n
                        �úøɰ�!!�Ϸ򲻻�������!![0m\n",users());
        return ;
        }
            command("hmm");
        command("say �ҽ���æ ,��ȥ��ʥ������ŵ������� !");
        command("say �������(select)��һ����?");
        command("say �����ѡ�������(tangi)��������(tanshu)����Ȩ��(tanchun)");
        command("say �����ѡ�������(tanshun)�������(uhen)��������(kiyan)");
        command("say �����ѡ��������(youkoun)��������(zhenche)");
        ob->set_temp("allow_select",1);
            }

int do_join()
        {
        if(this_player()->query("class"))
                return notify_fail("���Ѿ��������������ˡ�\n");
        if(this_player()->query("officer_class"))
                return notify_fail("�̻������˵����������ԭ���������ˣ���ʥ��̲���ӭ��!!\n");
        this_player()->set("class","prayer");
        message("mud","\n[33mʥ��̻ʡ����ֺ��� : ��.��..��...\n
��λʥ��̵ĵ����ǣ�\n
�����ǻ�ӭ[32m" +this_player()->name()+"[33m������[31mʥ���[33m!![0m\n\n",users());
        return 1;
}
        int do_select(string str)
        {
        object who;
        who=this_player();
        if(!who->query_temp("allow_select"))
        {
        command("say ����û��Ӧ������? ");
        return 1;
        }
        if(who->query_temp("have_say")==1)
        {
        message_vision(sprintf(HIC"$N˵����"+str+"\n"NOR),who);
        command("say �㲻��������?");
        return 1;
        }
        if(str=="�����" ||  str == "tangi")
        {
         message_vision(HIC"$N˵���������\n"NOR,who);
        this_player()->set_temp("allow_1",1);
        command("smile");
        command("say �� ,���ȥ��������Ű�!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "������" || str == "tanshu")
        {
        message_vision(HIC"$N˵����������\n"NOR,who);
        this_player()->set_temp("allow_2",1);
        command("smile");
        command("say �� ,��ͼ��������Ű�!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "��Ȩ��" || str == "tanchun")
        {
        message_vision(HIC"$N˵������Ȩ��\n"NOR,who);
        this_player()->set_temp("allow_3",1);
        command("smile");
        command("say �� ,��ͽ�ȥ��Ȩ��������!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "�����" || str == "tanshun")
        {
        message_vision(HIC"$N˵���������\n"NOR,who);
        this_player()->set_temp("allow_4",1);
        command("smile");
        command("say �� ,��͵�����źú�ĥ����!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "�����" || str == "uhen")
        {
        message_vision(HIC"$N˵���������\n"NOR,who);
        this_player()->set_temp("allow_5",1);
        command("smile");
        command("say �� ,��ͼ�������Ű�!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "������" || str == "kiyan")
        {
        message_vision(HIC"$N˵����������\n",who);
        this_player()->set_temp("allow_6",1);
        command("smile");
        command("say �� ,���ǰ��������ѧϰ��!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "������" || str == "youkoun")
        {
        message_vision(HIC"$N˵����������\n"NOR,who);
        if(this_player()->query("gender") != "Ů��")
        command("say �㲻��Ů��, �����ſ��²��������! ��ѡһ����!");
        else
        {
        this_player()->set_temp("allow_7",1);
        command("smile");
        command("say �� ,���ǰȥ�����Ű�ʦѧ�հ�!");
        this_player()->set_temp("have_say",1);
        }
        return 1;
        }
        if(str == "������" || str == "zhenche")
        {
        message_vision(HIC"$N˵����������\n"NOR,who);
        this_player()->set_temp("allow_8",1);
        command("smile");
        command("say �� ,���ǰȥ�����Ű�ʦѧ�հ�!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "��������" || str == "gonfu" || str == "gonfu_elder")
        {
        message_vision(HIC"$N˵������������\n"NOR,who);
        this_player()->set_temp("allow_9",1);
        command("smile");
        command("say �� ,���ȥ���������Ƕ�ѧ�հ�!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "ִ������" || str == "lawyer" || str == "lawyer_elder")
        {
        message_vision(HIC"$N˵����ִ������\n"NOR,who);
        this_player()->set_temp("allow_10",1);
        command("smile");
        command("say �� ,���ȥִ�������Ƕ�ѧ�հ�!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "���ɳ���" || str == "behavior" || str == "behavior_elder")
        {
        message_vision(HIC"$N˵�������ɳ���\n"NOR,who);
        this_player()->set_temp("allow_11",1);
        command("smile");
        command("say �� ,���ȥ���ɳ����Ƕ�ѧ�հ�!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "���Ǿ�" || str == "warrior")
        {
        message_vision(HIC"$N˵�������Ǿ�\n"NOR,who);
        this_player()->set_temp("allow_12",1);
        command("smile");
        command("say �� ,���ȥ���Ǿ��Ƕ�ѧ�հ�!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        if(str == "���Ǿ�" || str == "literate")
        {
        message_vision(HIC"$N˵�������Ǿ�\n"NOR,who);
        this_player()->set_temp("allow_13",1);
        command("smile");
        command("say �� ,���ȥ���Ǿ��Ƕ�ѧ�հ�!");
        this_player()->set_temp("have_say",1);
        return 1;
        }
        command("say û����!");
        return 1;
        }
int accept_kill(object ob)
{
        int i;
        object ob1, hu_fa;
        ob1 = this_object();
        command("exert blood");
        if( !present("hu-fa", environment(ob)) ) {
        tell_room(environment(ob),HIW"\nͻȻ�������λ����!!\n\n"NOR);
        for(i=0;i<3;i++)
        {
        hu_fa = new("/open/prayer/npc/hu_fa");
        hu_fa->move(environment(ob));
        hu_fa->command("guard pope");
        hu_fa->command("follow "+ob->query("id"));
        hu_fa->kill_ob(ob);
        }}
        write("����������˹����е�������������������\n");
        write("�ֺ�������ɱ����˵��������֪С��!!������!!!��\n");
        kill_ob(ob);
        command("perform universe.tengin");
        return 1;
}
void greeting(object ob)
{
        if (ob->query_skill("coldpoison", 1))
//      if ((present("five poison", ob)) || (present("dark poison", ob)) || (present("faint poison", ob)) || (present("rose poison", ob)) )
        {
        command("say ������һ���������䣡����ʹ��ѧ�ж���֮�ˣ���");
        kill_ob(ob);
        }
        if( ob->query("class")=="dancer")
        {
        command("say �����������Щ������ɫ֮�ˣ���");
        kill_ob(ob);
        }
    return;
}
void die()
{

   object winner = query_temp("last_damage_from");
   string name = winner->query("name");
   tell_object(users(),HIR"
       Զ��������һ��ŭ��!!��ʥ��������ֺ�����������!!ǿ����������,ʹ����
      "+HIW+"����Ǭ�������߾�
                          ��"+HIC+"��"+HIG+"��"+YEL+"��"+BLU+"��"+HIW+"��"HIR"
       һʱ֮�䣬��ر�ɫ!!���ŭХ!!�����������ŵ���������ӿ���ֺ���֮����!!!
       ��Ȼ��!!��~~һ������!!!�ֺ����޷���ʻ���ϵľ�������!!�����������!!Ѫ��ģ��!!

     "+HIC+"����"+HIY+name+HIC+"����Ц����ʥ��������Ծ�!!������ҳưԵ�ʱ����!!����!!"NOR);
  :: die();
}


void heart_beat()
{
 object me=this_object();
 if(random(100) < 20 && is_fighting()) {
   command("perform universe.tengin");
   me->delete_busy();
   me->clear_condition();
 }
 if( random(100) < 10)
 {
  if( is_fighting() )
  {
   if( query("kee") < query("max_kee") )
    message_vision(HIR"\n�ֺ����������ķ�֮���ľ������ϵ��˿��漣ʽ������\n"NOR,me);
    me->receive_heal("kee",1000);
    me->receive_heal("gin",200);
    me->receive_heal("sen",200);
    me->delete_busy();
    me->clear_condition();
  }
 }
::heart_beat();
}
