#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("�ֺ���",({"master lin","master","lin"}));
	set("long","û����֪������������Ҳû��֪�������书�ж����һ������Ī������"+
"������ǰ����Ƽʻᣬʹ�������ˡ�ʥ��̡���Ҳ��֪�����úη�����������Ӵ����֯��"+
"Ҳ��Ϊ���, ���������ϵ��˳�Ϊ�������񻰡���\n");
	set("gender","����");
	set("class","prayer");
 	set("nickname","������");
        set("title","ʥ��̻ʡ���");
        set("combat_exp",5000000);
        set("attitude","heroism");
	set("age",75);
        set("max_kee",10000);
	set("str", 50);
	set("cor", 50);
	set("cps", 45);
	set("per", 30);
	set("int", 42);
	set("force",20000);
	set("max_force",20000);
	set("force_factor", 100);
        set("max_gin",2800);
        set("max_sen",2800);
        	set_skill("superforce", 180);
        	set_skill("cure", 120);
        	set_skill("dodge", 150);
	set_skill("force",180);
        	set_skill("move", 150);
        	set_skill("parry", 150);
        	set_skill("stick",150);
        	set_skill("unarmed",150);
        	set_skill("array",150);
        	set_skill("literate",150);
	set_skill("fire-catch",150);
	set_skill("shift-steps",150);
        	set_skill("universe",150);
        	map_skill("force","superforce");
	map_skill("dodge","shift-steps");
	map_skill("move","shift-steps");
	map_skill("parry","universe");
        	map_skill("stick","fire-catch");
        	map_skill("unarmed","universe");
        	set("functions/blood/level",60);
	set("chat_chance_combat", 40);
        	set("chat_msg_combat", ({
		(: perform_action("force.ball") :),
		(: perform_action("force.hand") :),
		(: perform_action("force.sword") :),
		(: exert_function("blood") :),
        }));
	setup();
	carry_object("/u/k/kael/fire-cmd");
	add_money("thousand-cash",10);
	create_family("ʥ���",1,"�̻�");
}

void init()
{
     	add_action("do_join","join");
    	add_action("do_select","select");
            add_action("do_verify","verify");
}

int do_verify(string arg)
{
 object me,ob;
me=this_player();
ob=new("open/sword/obj/b1");
if( arg!="prayer")
  {
    write("��Ҫ����ʲô\n");
    return 1;
   }
if(me->query("family/family_name")!="ʥ���")
  {
    write("ֻ��ʥ���ͽ�Ż�������\n");
    return 1;
  }

 if( present(ob,me) )
  {
    write("���Ѿ��������\n");
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
	if((int)this_player()->query("combat_exp")<=500000)
     	return notify_fail(command("say �úø������Լ���ʦ����ѧ�����!"));
	command("look "+ob->query("id"));
	command("pat");
	command("say ��,���Ȼ�ǿ���֮��,�����ȥ����λ������Ϊ����ѧ��ָ��!");
	ob->delete("family");
	command("say ����ѡ��(select)��һλ������?");
	command("say ��������(gonfu_elder)��ִ������(lawyer_elder)���ǽ��ɳ���(behavior_elder)��");
	ob->set_temp("allow_select",1);
	return 1;
            }
	if(ob->query("marks/ʥ��������")==1)
	{
	if((int)this_player()->query("combat_exp")<=1800000)
     	return notify_fail(command("say ����ĳ̶Ȼ������ʸ����ѧϰ��ѧ�����Ĵ����!"));
	command("look "+ob->query("id"));
	command(":)");
	command("say ��,���Ȼ���Ƿ���֮��,�����ȥ�ҽ��ڵ������Ǿ���Ϊ����ѧ��ָ��!");
	ob->delete("family");
	command("say �����ѡ�����Ǿ�(warrior)�������Ǿ�(literate)");
	ob->set_temp("allow_select",1);
	return 1;
            }
	if(ob->query("marks/�����Ǿ�")==1)
	{
	if((int)this_player()->query("combat_exp")<=3500000)
     	return notify_fail(command("say �úø��������Ǿ���ĥ��ĥ����!"));
	command("look "+ob->query("id"));
	command("pat"+ob->query("id"));
	command("say ��,���Ȼ�ǿ���֮��,�ӽ����ɱ��������Խ̵�!");
	ob->delete("family");
	command("recruit "+this_player()->query("id"));
	message("mud",HIW"��ʥ��̻ʡ��ֺ���Ц��:\n 
	��������....������ʵ��̫������!\n
	ʥ���ͽ,"+this_player()->name()+": ���͸��ű������ú�ѧϰ��ι�������.\n"NOR,users());
	ob->set("marks/ʥ�����",1);
      ��ob->set("title","[31mʥ��̵մ�����[0m");
	return 1;
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
	this_player()->set("class","prayer");
	message("mud",HIW "�ֺ���������� :\n
	��ӭ" +this_player()->name()+"����ʥ��̹���!!\n\n"NOR,users());
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
	this_player()->set_temp("allow_7",1);
	command("smile");
	command("say �� ,���ǰȥ�����Ű�ʦѧ�հ�!");
	this_player()->set_temp("have_say",1);
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
void greeting(object ob)
{
	if (ob->query_skill("coldpoison", 1))
//	if ((present("five poison", ob)) || (present("dark poison", ob)) || (present("faint poison", ob)) || (present("rose poison", ob)) )
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
  
