// wulai.c by bigcat

inherit NPC;

string do_ask1();
string do_ask2();

void create()
{
	set_name("����", ({ "wulai", "human" }) );
	set("race", "����");
	set("age", 30);
	set("long", "��\n");
	
	set("str", 26);
	set("cor", 25);
	set("combat_exp",300);

	
	set("chat_chance_combat",5);
	set("chat_msg_combat", ({
		"�������һ��:��ү���ձ�������,�������ľ͹ԹԵĽ�����!\n",
		"���������ݵ��߹���,��������һ��ŧ̵��\n"
	}) );
		
	set("chat_chance", 5);
	set("chat_msg", ({
	    "����˵��: ��˵�ƻ�����һ����ŮǱ���ڼ�Ժ�����ǾͲ�֪��Ժ���ġ�\n",
	    "����˵��: ��˵�и�ˮ�ɹ���������������һ�׷���\n",
	    "����˵��: �ܿ�����˵�е�ˮ�ɹ����Ҳ�Ŀ�ˡ�\n",
	}) );
		
	set_temp("apply/attack", 15);
	set_temp("apply/damage", 6);
	set_temp("apply/armor", 2);
	set("inquiry", ([
	    "������"	:	"����������������������ˡ�",
	    "ˮ�ɹ���"	:	(: do_ask1 :),
	    "����Ժ"	:	"�������ֵ�˵���Ƕ�������û�������ϧ��\n",
	    "�ƻ���"	:	(: do_ask2 :),
	]) );

	setup();
       add_money("coin",100);
}

string do_ask1()
{
  int	query;
  object me=this_player();

  query=me->query_temp("quests/help_water_god");

  if (!query || query != 1  || me->query("quests/help_water_god"))
  {
      switch (random(5)) {
	case 0:
	  return "ˮ�ɹ���������������? ���ܸ��Ұɡ�\n";
	  break;
	case 1:
	  return "������֪��ˮ�ɹ�������һ��Ҥ��? ����ȥ��ʶ��ʶ��\n";
	  break;
	case 2:
	  return "���ֲ���ˮ�ɹ����������\n";
	  break;
	case 3:
	  return "�Ҳ���ʶʲôˮ�ɶž�ģ�ȥȥȥ��\n";
	  break;
	default:
	  return "˭֪��˭��˭����\n";
      }
  }
  else {
    me->set_temp("quests/help_water_god", 2);
    if (random(2))
      return "ˮ�ɹ�����˵�����������У�ȫ����ϣ���Ϳ������������ˡ�\n";
    else
      return "ˮ�ɹ��ﷸ���ƻ����Ĵ�ɣ��������ڱ�׷ɱ����"+
	     "����̾�˿�����˵��: ��֪������᲻����ֽ�ȡ�\n";
  }
}

string do_ask2()
{
  if (random(2))
    return "�ƻ���? ����˭֪�����Ķ��ˣ�ֻ������ҥ�����ˡ�\n";
  else
    return "�һ��������֣�ȥ��صĹ������������ˡ�\n";
}
