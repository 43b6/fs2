// ���master_ba , ���ӽ���а��������string ask_evil(), 2001/8/8 write by Firedancer
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string ask_blade();
string ask_yuan();
string ask_test();

string ask_yan();
string ask_lotch();
string ask_mogi();
string do_special_fight();
string ask_evil();
void create()
{
        set_name("��Ԫ��",({"master ba","ba","master"}));
        set("long","���������𽭺��Ľ��޵���Ԫ�ԡ�\n");
        set("gender","����");
        set("class","blademan");
        set("nickname","���޵�");
        set("combat_exp",2000000);
        set("attitude","heroism");
        set("env/����","YES");
        set("age", 50);
        set("str", 45);
        set("cor", 30);
        set("cps", 30);
        set("per", 20);
        set("int", 40);
        set("max_gin", 5000);
        set("gin", 5000);
        set("max_kee", 5000);
        set("kee", 5000);
        set("max_sen", 5000);
        set("sen", 5000);
        set("force",4000);
        set("functions/gold-dest/level",100);
        set("functions/fast-dest/level",100);
        set_skill("literate",40);
        set("max_force",4000);
        set_skill("magic",20);
        set_skill("spells",20);
        set_skill("move",60);
        set_skill("force",90);
        set_skill("dodge",60);
        set_skill("parry",90);
        set_skill("blade",120);
        set_skill("riding",100);
        set_skill("gold-blade",100);
        set_skill("sixforce",100);
        set_skill("cure", 60);
        set_skill("fast-blade", 100);
        map_skill("blade","fast-blade");
        map_skill("parry","gold-blade");
        map_skill("force","sixforce");
        set_temp("apply/armor",100);
        set("force_factor",15);
        set("inquiry",([
        "������"   :  (: ask_lotch :),
       "����ӡ��" : (:ask_test:),
        "��Ԫ��"   :  (: ask_yuan :),
        "Ѫħ"     :  "��˵�Ǵ�ħͷ��~~~������ʦ˵���ѱ��ɽ���ʦͬ��ʦ��������Һ�����ӡ~~~�����ó�ս������....�ɽ���ʦ�Ͳ�֪����...�������������Ѫħ���ӷ�������...��������ҵ�������...��Ͳ��ö�֪��~~~",
        "������"   :  (: ask_yan :),
        "������"   :  (: ask_blade :),
        "��������" :  (: ask_mogi :),
	"��а��"   :  (: ask_evil :),
        ]));
        set("chat_chance_combat",80);
        set("chat_msg_combat",({
        (: do_special_fight :),
    }));
        setup();
        create_family("����",5,"����");
        carry_object("/daemon/class/blademan/obj/gold-blade")->wield();
        add_money("gold",10);
}

void init()
{
        object ob;
        ::init();
        if(interactive(ob =this_player()) && !is_fighting() ) 
	{
           remove_call_out("greeting");
           call_out("greeting",2,ob);
        }
}

string ask_evil()
{
object me,ob;
	me=this_player();
	ob=this_object();
	message_vision(
HIY"$N¶��ʮ������ı��顫\n"NOR"

"HIW"$N˵����$n�봳����а�������š����ȿ���һ��...\n\n"NOR,ob,me);
	call_out("do_evil",2,me);
return "......\n";
}

int do_evil()
{
object me,ob;
string arg;
int exp;
	me=this_player();
	ob=this_object();
	exp=(int)me->query("combat_exp");
	if(me->query_temp("evil/g_temp/ask"))
	{
		arg="��Ԫ�Բ��ͷ���˵���㻹ȱ";
		if(!me->query_temp("evil/g_temp/gold"))
			arg = arg +" 100 ���ƽ� ";
		if(!me->query_temp("evil/g_temp/iron"))
			arg = arg +" �������� ";
		if(!me->query_temp("evil/g_temp/tooth"))
			arg = arg +" �������� ";
		arg = arg +"û����...\n";
		message_vision(arg+"\n
\n$N˵��������Ҳ������Ͳ�Ҫ�˷��ҵ�ʱ�䣬�ҿ�æ�ĺܡ�\n",ob);
		return 0;
	}
	if(exp <= 500000)
	{
		message_vision("
$N˵�����ҿ��Ǻ��ˡ�����������������Ҳ�������װ�������

              ��Ǹ��ˡ�Ҳ��ܴ�Ӧ�㣬$n��ذɡ�\n",ob,me);
	}
	else
	{
		message_vision("
$N˵�����š�$n������Ӧ�ù��ˣ������һ���Ҫ����һ�¡�

�����������������$n�ܽ������������롲�����������������ң��ټ���100���ƽ�Ļ�...

	      �Ҿͽ�ͨ����Ʒ--�ƽ�ӡ���㡣\n",ob,me);
		me->set_temp("evil/g_temp/ask",1);
	}
return 1;
}


string do_special_fight()
{

        if( query_skill_mapped("blade") == "fast-blade" ) {
            command("perform blade.fast-dest");
            map_skill("blade", "gold-blade");
        }
        else if( query_skill_mapped("blade") == "gold-blade" ) { 
            command("perform blade.gold-dest");
            map_skill("blade", "fast-blade");
        }
        command("perform blade.gold-dest");
        return "";
}

void attempt_apprentice(object ob)
{
if(this_player()->query("class")!="blademan")
        {
                command("say �㲻�����ǵ��� ,�Ϸ������������� ?\n");
                return;
        }
if(this_player()->query("family/family_name")=="ħ����"||this_player()->query("family/family_name")=="ħ��Ī��")
{
        command("say ����ħ���ˣ������Ҳ������㡣\n");
            return;
}
        command("smile");
       command("recruit "+ob->query("id"));
        ob->set_temp("being-apprentice",1);
        call_out("do_act1",2,this_player());
}
        int do_act1(object ob)
    {
    say("��Ԫ��˫�����˼��� .\n");
        call_out("do_act3",1,ob);
    }
        int do_act2(object ob)
    {
    say("һ��Сͯ���˸����Ӵ������߳� .\n");
        call_out("do_act3",1,ob);
    }
        int do_act3(object ob)
    {
    object boy;
    boy=new("/open/gblade/npc/boy");
        say("һ��Сͯ���˸����Ӵ������߳� .\n");
        boy->move("/open/gblade/room/gblade");
        call_out("do_act4",6,ob);
    }
        int do_act4(object ob)
    {
     say("��Ԫ�Խӹ����� ,����һ�� ,˵�� : ���°� !\n");
        call_out("do_act6",4,ob);
    }
        int do_act5(object ob)
    {
        object money;
     message_vision("��Ԫ�մ�������ȡ��һ������ ,����$N !\n",ob);
        command("say ��͵���������� !");
        money=new("/obj/money/gold");
        money->move(ob);
        call_out("do_act6",4,ob);
    }
        int do_act6(object ob)
{
        object blade;
        blade=new("/open/gblade/obj/g-blade");
        blade->move(ob);
        message_vision("��Ԫ�Դ�������ȡ��һ�ѽ��������С�� ,����$N���� .\n",ob);
     command("say �������ǽ��ŵ����� ,������Ʊ��� !");
        call_out("do_act7",3,ob);
    }
    int do_act7(object ob)
    {
command("say ����һ���������� ,�������� .");
command("say ������ħ��ͽ ,�Ժ������� ,���Բ��ɷŹ� ,֪���� ?");
        call_out("do_act8",3,ob);
      }
      int do_act8(object ob)
      {
        command("smile "+ob->query("id"));
    command("say ���� ,�Ժ�ú��������ѧϰ�� !");
        ob->delete_temp("being-apprentice");
   return 1;
    }
void greeting(object ob)
{
   if(!ob) return ;
  if(ob->query("family/family_name")=="����")
  {
  if(!present("gold blade",ob))
  {
  new("/open/gblade/obj/g-blade")->move(ob);
        command("hmm");
        command("say ���С��Ū���˰� ?");
        command("say �ٸ���һ�� , ����Ū���� !");
        message_vision("��Ԫ�Դӻ���ȡ��һ��С�� , ����$N����\n",ob);
  }
  }
}
string ask_lotch()
{
        if(!present("lotch",this_player())&&this_player()->query("quests/lotch"))
        {
        command("say �� , �������治С�� , ���������Ϊаħ������� , �Ǿ��↪ !");
        command("say ����СͽТ����˻��� !");
        new("/open/gblade/mob/lotch")->move(this_player());
        message_vision("��Ԫ�Խ�������������$N .\n",this_player());
        return "ϣ�����ܺúÿ��ô��� , ����Ū������ !\n";
        }
            if(this_player()->query("quests/lotch") )
        return "ϣ���������������������� , �������� !\n";
        if(this_player()->query("lotch")>3)
        return "ԭ���������Ѿ���͵���� ! �ò�����������ͽ !";
        if(this_player()->query("lotch")<1)
        return "����������� ?";
        return "�����������洫֮�� , ��Ϊ���� , �Ұ������� ...";
}
string ask_yan()
{
  object me;
  me=this_player();
  if( me->query("fyan")==2)
{
command("say �ɽ����߷�����,ǰ�����������ҹ���,������Ԯ��һ��Կ�Ѫħ,֮����������Ҫ��ȥ���������ɰ�æ,���ž�����,��Ҳ���崦��ȥ���ˡ�\n ");
me->set("fyan",3);
}
  else
    {
   command("say �Ҳ��崦��~��\n");
    }
}
string ask_yuan()
{
        if(this_player()->query_temp("can_help_yuan") && this_player()->query("marks/��������") )
        {
        command("say ��Ȼ���������һ� , ����ͽ���л��� !");
        this_player()->delete_temp("can_help_yuan");
        this_player()->set_temp("help_yuan",1);
        return "�ұ�㯿�һ��� !\n";
        }
        if(this_player()->query("lotch")>4 || this_player()->query("quests/lotch") )
        return "�� , ����Ȼ�Ĺ������� !";
        return "�� , �Ժ�������ǰ , ������������Ե���ͽ !\n";
}
string ask_test()
{
 if(this_player()->query("quests/yan")==3)
 {
 if(this_player()->query("quests/lotch",1)&&this_player()->query("quests/yantestmark1",1)  && this_player()->query("quests/2ndtest",3))
  {
  int i;
  i=6+random(5);
  command("say лл���İ�æ.��Ը�⽫appo���ҵ�ӡ�Ǵ���������!\n");
  tell_object(this_player(),HIW"˲������Ԫ�Խ��ִ�����ļ���..���ʱ����һ��ů������Ԫ�Ե����д�����\n"NOR);
  this_player()->set("quests/2ndtest",i);
  this_player()->set("quests/yantestmark2",1);
  return("���һ��ӡ����ʥ��������,�����ȥ����������\n");
  }
 else if (this_player()->query("quests/yantestmark2")>1)
  return ("���Ѿ���ӡ�Ǹ�����..�㻹Ҫ��ʲô\n");
 else
  return ("ȥ���Ұ��������ҳ����Ҿ͸���˵ӡ�����ġ�\n");
 }
else
 return ("ɶӡ��..����˵ʲô?\n");
}
string ask_blade()
{
        if(this_player()->query("quests/lotch")||this_player()->query("marks/��������") )
        return "��лл����ҽ���Ѱ������ !\n";
        if(this_player()->query("lotch")<2)
        return "�����ҽ����� !";
        if(this_player()->query("lotch")>3)
        return "ԭ�����Ѿ������һ��������� , �����컹�� !";
        this_player()->set("lotch",3);
        command("say �������ѱ���Ԫ������ͽ���� , ����ͽΪ�˶��� ,�ӵ���ɽȥ�� ");
        return "ϣ�����ܰ��ҽ��Ŷ�ر��� !";
}
int accept_object(object me,object ob)
{
        string ob_id;
        ob_id = ob->query("id");
	me=this_player();
	if(ob->query("id")=="gold")
	{
		if(me->query_temp("evil/g_temp/ask") && ob->value() >= 1000000 )
		{
		command("say �ܺ�..���Ҿ���������Щ�ƽ�\n\n");
		me->set_temp("evil/g_temp/gold",1);
		call_out("evil_check",1,me);
		destruct(ob);
		return 1;
		}
		else
		{
		command("say Ǯ������...��ˣ����!!\n");
		command("angry");
		destruct(ob);
		return 0;
		}
	}
	if(ob->query("id")=="good iron")
	{
		if(me->query_temp("evil/g_temp/ask"))
		{
		command("say �ܺ�..���Ҿ����������������\n\n");
		me->set_temp("evil/g_temp/iron",1);
		call_out("evil_check",1,me);
		destruct(ob);
		return 1;
		}
	}
	if(ob->query("id")=="red-wolf tooth")
	{
		if(me->query_temp("evil/g_temp/ask"))
		{
		command("say �ܺ�..���Ҿ������������������\n\n");
		me->set_temp("evil/g_temp/tooth",1);
		call_out("evil_check",1,me);
		destruct(ob);
		return 1;
		}
	}
        if(ob_id=="dragon-tiger blade")
        {
        if(me->query("lotch")<4)
                {
                command("give "+me->query("id")+" dragon-tiger blade");
                command("say ��л����ҽ����һش����� , �������ɽ���һ�� !");
                return 1;
                }
        if(me->query("lotch")>3)
                {
                command("say ����̫�м��� , �����ҵ����������������� !");
                me->set("marks/��������",1);
                return 1;
                }
        return 1;
        }
        if(ob_id=="lotch")
        {
                if(me->query("quests/lotch") )
                {
                command("say �㲻Ҫ��? �������Ű� !");
                command("give "+me->query("id")+" lotch");
                return 1;
                }
                if(!me->query("marks/��������") )
                {
                command("say ������ܰ����һ������� , �ұ������������� !");
                command("give "+me->query("id")+" lotch");
                command("say �㻹���Լ����Ű�!");
                return 1;
                }
        if(me->query("lotch")>5)
                {
                command("say ���ﲻ�� , ��Ȼ���ҵ��� , �������� !");
                command("give "+me->query("id")+" lotch");
                command("say �ұ㴫�������������� , ϣ����������֮ !");
        message_vision(sprintf(HIW"��Ԫ�Դ���$N�������� !\n"NOR),me);
        message("system",HIY "��Ԫ�Դ���˵�� :\n
���������ֽ��� ,"+me->name()+": ϣ������ƾ����������
�������²��� !\n\n"NOR,users());
                me->set("quests/lotch",1);
                me->delete("lotch");
                me->delete("marks/��������");
                me->delete("marks/��������");
                return 1;
                }
        command("give "+me->query("id")+" lotch");
        command("say ��Ե�޹ʸ�������������� !");
        return 1;
        }
return 1;
}

int evil_check()
{
object me,ob,obj;
string arg;
	me=this_player();
	ob=this_object();
	if(me->query_temp("evil/g_temp/gold") && me->query_temp("evil/g_temp/iron") && me->query_temp("evil/g_temp/tooth"))
	{
		message_vision("
$NЦ�����Ǻǡ���Ȼ��û�����ˡ�

������������������ƽ�ӡ��ȥ�ɡ�\n\n",ob);
		obj=new("/open/evil-area/npc/obj/golden_seal");
		obj->move(me);
		message_vision("$N��"+obj->query("name")+"������$n��\n",ob,me);
		me->delete_temp("evil/g_temp");
		me->set_temp("evil/g_enter");
	}
	if(me->query_temp("evil/g_temp/ask"))
	{
		arg="��Ԫ��˵���㻹ȱ";
		if(!me->query_temp("evil/g_temp/gold"))
			arg = arg +" 100 ���ƽ� ";
		if(!me->query_temp("evil/g_temp/iron"))
			arg = arg +" �������� ";
		if(!me->query_temp("evil/g_temp/tooth"))
			arg = arg +" �������� ";
		arg = arg +"û����...\n";
		message_vision(arg+"\n\n$N˵������ȥ�Ұɡ�\n",ob);
	}
return 1;
}

string ask_mogi()
{
        object me = this_player();

        if( me->query("mogi/ask_quest") >= 2 )
            return "���Ѿ���֪���Ķ��������ˡ�\n";
        if( me->query("mogi/ask_quest") < 1 )
            return "�����������ʲô?\n";

        me->add("mogi/ask_quest", 1);
        me->add("mogi/desc", CYN+name()+"˵��: ���Ǵ�˵��һ�ֿ���������ħ��а�ķ�ֽ��\n"NOR);
        me->add("mogi/desc", CYN+name()+"˵��: ���������Ϲ�ʱ���������ǧ�����������޵���Ѫ���������Ƶ�, ���м�ǿ����а���á�\n"NOR);
        me->add("mogi/desc", CYN+name()+"˵��: �뵽�������·���, ��ħ����, �治֪����Щ��ֽ����������...\n"NOR);
        me->add("mogi/desc", CYN+name()+"˵��: ���������ȥ���Ϲ��, �Ĵ���̽һ��ħ�����Ϣ��\n"NOR);

        write(CYN+name()+"˵��: ���Ǵ�˵��һ�ֿ���������ħ��а�ķ�ֽ��\n"NOR);
        write(CYN+name()+"˵��: ���������Ϲ�ʱ���������ǧ�����������޵���Ѫ��"+
                         "�������Ƶ�, ���м�ǿ����а���á�\n"NOR);
        write(CYN+name()+"˵��: �뵽�������·���, ��ħ����, �治֪����Щ��ֽ"+
                         "����������...\n"NOR);
        return "���������ȥ���Ϲ��, �Ĵ���̽һ��ħ�����Ϣ��\n";
}

void die()
{    
        object winner = query_temp("last_damage_from");
        int j;
        if(!winner)
        {
        ::die();
        return ;
        }
        tell_object(users(),HIG
   "\n\t���˶غ���ң�һ�����Ϳ౼�������ھ���ô����!!\n\n\t����һ��"HIM+winner->query("name")+HIG"ʵ��!!��̾��"HIY"��Ԫ��"HIG"��������!!\n\n\t��........����!!\n\n"NOR);
        if ( winner->query_temp("bless")==1 )
        {
        j=random(6000);
          if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
          {
          new("/open/sky/obj9/happy_charm")->move(environment(winner));
          message_vision(HIM"\n����Ԫ�Ե����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/happy_charm",sprintf("%s(%s) ����Ԫ�Ե����˿���֮���� %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }else{
        j=random(12000);
          if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
          {
          new("/open/sky/obj9/happy_charm")->move(environment(winner));
          message_vision(HIM"\n����Ԫ�Ե����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/happy_charm",sprintf("%s(%s) ����Ԫ�Ե����˿���֮���� %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }
        ::die();
}
