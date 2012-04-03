// crazy_dog.c

inherit NPC;

string do_ask();
string do_ask1();

void create()
{
	set_name("��Ʀ", ({ "dipi", "human" }) );
	set("race", "����");
	set("age", 30);
	set("long", "һ˫�׶������֣���´������㡣\n");
	
	set("str", 30);
	set("cor", 27);
	set("combat_exp",340);

	
	set("chat_chance_combat",4);
	set("chat_msg_combat", ({
		"��Ʀ��֪�����Ĵ�����һ�Ƕ���\n",
		"��ƦͻȻ���Դ�,��ȭ�˽ŵ�������˹�����\n",
	}) );
	set("chat_chance", 5);
	set("chat_msg", ({
		"��Ʀ˵��: �����������Ǹ���Ӣ�ۡ�\n",
		"��Ʀ˵��: ˵����������죬�������ڰ��������ݷ��ĺ��ܡ�\n",
	}) );
		
	set_temp("apply/attack", 15);
	set_temp("apply/damage", 6);
	set_temp("apply/armor", 2);
	set("inquiry", ([
	    "����֤"	:	"������˵����£�ӵ��������˳��������˹ȡ�",
	    "���˹�"	:	"���˹Ȳ���������ɽ��? ��..����û�����ҵõ�·��",
	    "����ɽ"	:	"��ͼ�ϲ���������?",
	    "��ͼ"	:	"�Լ�ȥ��һ���ɡ�",
	    "���"	:	"˭������ܰ���Ҳ���Լ����վ��ӡ�",
	    "����"	:	"��˵��΢΢��һЦ����������Ů�����ߵ�����Ҫ���Ȿ��ͺ��ˡ�",
	    "������"	:	(: do_ask :),
	    "����������":	(: do_ask :),
	    "�޷���"	:	(: do_ask1:),
	]) );

	setup();
       add_money("coin",50);
}

string do_ask()
{
  int	query;
  object me=this_player();

  query=me->query_temp("quests/badman_license");

  if (!query || query != 1 || me->query("quests/badman_license"))
  {
      switch (random(5)) {
	case 0:
	  return "������˭�˲�֪���˲������������������ң���Ѱ�˿�����?\n";
	  break;
	case 1:
	  return "��������������β����Ҳ��֪�����˼����ںδ���\n";
	  break;
	case 2:
	  return "�������������������˵˵����?\n";
	  break;
	case 3:
	  return "�Һ���û��ʲô���캦��Ĵ��£���Ȼ������������������С�\n";
	  break;
	default:
	  return "��������������ǰ�������������ֺ���?\n";
      }
  }
  else {
    me->set_temp("quests/badman_license", 2);
    if (random(2))
      return "��������˵Ϊ�˴��������ܽ��㣬�Ѿ���ȥ�޷����ˡ�\n";
    else if (random(2))
      return "�⼸����������˵������Ϊ��������ܽ����ļ���٣�"+
		"�˿���׷��ȥ�޷����ˡ�\n";
    else
      return "��˵��������ҹ��̸�ȥ�޷��´������ܣ�ȴû��֪��˭�������졣\n";
  }
}

string do_ask1()
{
  object me=this_player();
  int	query1, query2;

  query1=me->query_temp("quests/badman_license");
  query2=me->query_temp("quests/help_water_god");

  if ((query1 && query1 == 2 && !me->query("quests/badman_license")) ||
      (query2 && query2 == 2 && !me->query("quests/help_water_god")))
  {
	if (random(2))
	  return "��˵��ط�����ͼ�϶�û�м��أ�ȴ��֪���������ô��ȥ�ġ�";
	else
	  return "�������ŵ�ͼ��ȥ���ǵ������ˣ�Ҳ��֪��û���ʵ���";
  }
  else
	if (random(2))
	  return "�޷���? ֻ��˵����ط����������Ķ���Ҳ��֪����\n";
	else
	  return "�޷���? �����ר�ſ޵�����ĵط��ɣ���û��Ȥ��\n";
}
