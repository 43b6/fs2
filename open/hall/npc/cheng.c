inherit NPC;
#include <ansi.h>
#include <combat.h>
#include </open/open.h>
string do_thief();
string ask_test();
void create()
{
	set_name("���޳�", ({ "chi wu-cheng","chi", "cheng" }) );
	set("title", "����ִ��");
  //set("nickname", "[1;34m��[36m��[34m��[36m��[34m��[36m��[34m��[36m��[0m NOR");
	set("class","officer");
	set("gender", "����" );
	set_max_encumbrance(1000000);
	set("age", 46);
	set("str", 20);
	set("cor", 20);
	set("cps", 20);
	set("int", 30);
	set("spi", 20);
	set("kar", 26);
	set("per", 20);
	set("con", 30);

	set("max_force", 2000);
	set("force", 2000);
	set("force_factor", 5);

	set("long", @LONG
    �˳ơ�����֮�⡯����˵��ϰ����񣬾�����˽ƈ�ҡ����������
���ն��ܾ�������Ҳ��Ϊ���Ĺ����Իͣ��Ȼ��ش���һ���з�������׼
�佫�����ӯ֮�ˣ���ն����!!
LONG);

	set("combat_exp",500000);
	set("score", 30000);

	set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
	"�޳����˺ȵ����󵨿�ͽ!!  ����!!\n",
	"�޳����˺ȵ�������֮�Ͼ�����Ұ!!  �����ϳ�!!\n"
	}) );

	set_skill("unarmed", 30);
	set_skill("force",  20);
	set_skill("parry",  20);
	set_skill("dodge",  20);
	set_skill("sword",  20);
	set_skill("literate", 90);

	set("inquiry", ([
	  "������" : "��!! ˭����ץ���ǻ����˵Ļ���ն����!!",
       "����ӡ��" : (:ask_test:),
	  "accuse" : "�뼩�������˵Ļ������ȵ��ſڻ�����ԩ(accuse)��",
	  "thief"  : (: do_thief :),
	  "����"   : "��ץ��(thief)�͵��Ⱦ����Ҳ���, �������������б�������ˡ�",
	  "test"   : "��ץ��(thief)�͵��Ⱦ����Ҳ���, �������������б�������ˡ�",
	  "accept" : "Ҫ���ܲ�����? �Ǿʹ�(accept test)��",
	]) );

	setup();
	carry_object(HALL_NPC"obj/god_sword")->wield();
	carry_object(HALL_NPC"obj/o_cloth")->wear();
}

string do_thief()
{
	object me=this_player();
    if( me->query("quests/catch_thief") == 0 || (me->query("marks/ask_linpo") && me->query("family/family_name")=="�μ�"))
	{
	  if( me->query_temp("thief") == 0 )
	    me->set_temp("thief",1);
	  return (RANK_D->query_respect(me)+"�������æץ���Ǵ������? "+
		"ֻ����������û���µ���ǰ��Ӧ��\n, "+RANK_D->query_respect(me)+
		"���б��µĻ����Ƚ��ܲ��԰�(accept test)��");
	}
	else
	{
	  command("smile");
	  command("pat "+me->query("id"));
	  return ("��������Ƕ������, ��񾩳��ָֻ�ƽ���ˡ�");
	}
}					    
void init()
{
	add_action("do_accept","accept");
}
int do_accept(string str)
{
	int i;
	object ob=this_object();
	object me=this_player();
	object mark=new(CAPITAL_OBJ"mark");
	if( me->query_temp("thief") == 0)
	  command("say ������Ϊ��Ҫ���԰ɡ�");
	if( me->query_temp("thief") > 1)
	  command("say ���ǲ��Թ�����?");
	if( me->query_temp("thief") == 1)
	{
	if( str=="test")
	{
	  command("say ��! ���Ϸ���������! С����");
	  for(i=0;i<5;i++)
	    COMBAT_D->do_attack(ob, me, ob->query_temp("weapon"), TYPE_QUICK);
	  if( me->query("kee") > 1 )
	  {
	    command("say ��Ȼ����\Ϊ��Ӣ��, ���Ҿͽ������ԭԭ������˵��������");
	    command("thank "+me->query("id"));
	    command("say �⾩�Ǵ��ĿǰΪֹ�ѵ��ֲ�������, �������׸���ͨ���լ��Ҳ\n"+
	    "		 ������, �����ž�����������һ����֮�ڱ����ư�, ��Ȼ"+RANK_D->query_respect(me)+
	    "\n 	   �Ը����, ������¾Ͱ������ˡ���������������鰸, ��ض��������͡�");
	    message_vision("$N����$nһ�桸�������ơ���\n",ob,me);
	    mark->move(me);
	    command("say ϣ���������ƶ���참���������档");
	    me->set_temp("thief",2);
	  }
	  else
	  {
	    command("say ���˰���, �һ��Ǽ�������Ӣ������");
	    command("sigh");
	  }
	}  
	else
	  write("����ʲô?!\n");
	}
	return 1;		 
}

int accept_object(object me, object man)
{
	string target = "���ٷ�";
	object ob=this_object();
	object reward;
	if( me->query_temp("thief") < 2 )
	  return notify_fail(ob->query("name")+"˵������..�Һ���û���������������Ȼ����ô����, �Ǿ�л����\n");
	if( man->query("victim_name") == target || man->query("name") == target )
	{
	  command("say ����̫����, ���и����������˳���Ĵ���ˡ�");
	  if( man->query("name") == target )
	  {
	    command("say ����Լ��, �������Ӧ�õ��ͽ�\n");
	    reward = new("/obj/money/gold");
	    reward->set_amount(5);
	    reward->move(me);
	    message_vision("$N�͸�$n�����ƽ�\n",ob,me);
	  }
	  else
	  {
	    command("say ��ϧ�⾩�Ǵ������, ����ͽ�ֻ��һ���ˡ�");
	    reward = new("/obj/money/gold");
	    reward->set_amount(2);
	    reward->move(me);
	    message_vision("$N�͸�$n�����ƽ�\n",ob,me);
	  }
	  if( !me->query("quests/catch_thief") )
	  {
	    write("\n\n[1;36m**��ɾ��Ǵ��֮��***[0m\n��õ�ʵս���� 200��\n");
	    me->add("combat_exp",200);
	    if( me->query("class") == "officer" )
	    {
	      write("��õ�����Ȩ�� 20��\n");
	      me->add("max_officer_power",20);
	    }  
	    me->set("quests/catch_thief",1);
	    me->delete_temp("thief");
	  }
	  destruct(man);
	}
	return 1;
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

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj9/health_charm")->move(environment(winner));
	  message_vision(HIM"\n�Ӽ��޳������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/health_charm",sprintf("%s(%s) �ü��޳������˽���֮���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj9/health_charm")->move(environment(winner));
	  message_vision(HIM"\n�Ӽ��޳������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/health_charm",sprintf("%s(%s) �ü��޳������˽���֮���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}
string ask_test()
{
 if(this_player()->query("quests/yan")==3)
 {
 if(this_player()->query("quests/catch_thief",1)&&this_player()->query("quests/yantestmark1",1)  && this_player()->query("quests/2ndtest",2))
  {
  int i;
  i=6+random(5);
  command("say лл���İ�æ.��Ը�⽫appo���ҵ�ӡ�Ǵ���������!\n");
  tell_object(this_player(),HIW"˲���ɼ��޳����ִ�����ļ���..���ʱ����һ��ů���ɼ��޳������д�����\n"NOR);
  this_player()->set("quests/2ndtest",i);
  this_player()->set("quests/yantestmark2",1);
  return("���һ��ӡ����ʥ��������,�����ȥ����������\n");
  }
 else if (this_player()->query("quests/yantestmark2")>1)
  return ("���Ѿ���ӡ�Ǹ�����..�㻹Ҫ��ʲô\n");
 else
  return ("ȥ���ҰѾ��Ǵ���ҳ����Ҿ͸���˵ӡ�����ġ�\n");
 }
else
 return ("ɶӡ��..����˵ʲô?\n");
}
