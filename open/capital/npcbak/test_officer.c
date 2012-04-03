// test_officer.c
// rewrite by wade in 1/5/1996 for heart_beat ��ʽ

#include <ansi.h>
#include <capital.h>
inherit NPC;
inherit F_MASTER;
#define PREPARE 300
#define START 330
#define END 350
#define REPORT 400

int	time=290;
mapping test_men_data = ([
        "ƯƯ����":200,
	"�ն���": 120,
	"����": 70,
	"����ʯ": 90,
	"˾���": 100,
	"��۫": 20,
	"���": 80,
	"������": 100,
	"½��Ԩ": 80,
	"����": 110,
	"����": 30,
	"�ž�": 25,
	"��ʫ��": 60,
	"�ָ�": 65,
	"�����": 70,
	"����": 75,
	"������": 20,
	"����": 80,
	"����": 70,
    "Сѩ��": 100,
	"����ʥ��": 90,
	"ŷ�����": 80,
	"Ľ�ݳ�": 15,
	"Ľ����": 85,
	"������": 90,
	"��Ӱ����": 100,
	"����": 70,
]);

void create()
{
	seteuid(getuid());
	set_name("�ϴ���",({"test officer","officer","master"}));
	set("long","����۹����Ե�������,������� join �����뿼��,\n"+
	           "���ϵ���Ҳ���� report �������ְ,ע��: һ������\n"+
	           "��ְ,������ԭ����,ǧ������!!\n");
	set("gender","����");
	set("title","������");
	set("age",56);
	set("time",0);
	set("test_men",([]));
	set("set_test_men",([]));
	set("new_officer",([]));
	set("test_men_id",([]));
	set("chat_chance",15);
	set("class","officer");
	set("officer_class","������");
	set("max_officer_power",100);
	set("officer_power",100);
	set("max_kee", 10000);
	setup();
	set_heart_beat(1);
}
void init()
{
	add_action("join_test","join");
	add_action("join_guild","report");
}

void do_prepare()
{
	CHANNEL_D->do_channel(this_object(), "mud",
	HIY "\n�Ӿ����ﴫ����Ϣ��\n���Լ�����ʼ��.....\n" NOR);
}

int query_test()
{
  write ("time is "+time+".\n");
  return time;
}

void do_start()
{
	mapping	dict2;
	string	*name3;
	string	test_men_name;
	int	i;
	set("test_men_id",([]));
	CHANNEL_D->do_channel(this_object(), "mud",
	HIG "\n�Ӿ����ﴫ����Ϣ��\n������ʽ��ʼ��....!!!\n" NOR);
	command("say �������λҪ�μӿ��ԵĿ�����ʼ����(join)��");
	dict2=query("set_test_men");
	for(i=0;i<3;i++)
	{
		name3=keys(test_men_data);
		test_men_name=name3[random(sizeof(test_men_data))];
		dict2[test_men_name]=test_men_data[test_men_name];
		dict2[test_men_name]=random(random(dict2[test_men_name]));
		dict2[test_men_name]+=10+5*i;
		map_delete(test_men_data,test_men_name);
	}
	dict2=query("test_men_id");
	dict2["1"]=1;dict2["2"]=1;dict2["3"]=1;
	set("test_men_id",dict2);
}

void do_end()
{
          CHANNEL_D->do_channel(this_object(), "mud",
            HIC "\n�Ӿ��ﴫ����Ϣ��\n���Խ�����.....\n" NOR);
          command("say ���� ! ����ʱ�䵽�ˡ�\n");
}

void do_report()
{
	mapping dict1,dict2;
	string *name1,*name2;
	string  msg;
	string test_men_name;
	int i,th1,th2,th3;

	dict1=query("test_men");
	dict2=query("set_test_men");
	name1=keys(dict1);
	name2=keys(dict2);
	if (!name2 || sizeof(name2) == 0) return;
	th1=0;th2=0;th3=0;
	for(i=0;i<sizeof(dict2);i++)
	if(dict2[name2[i]]>dict2[name2[th1]])
		th1=i;
	if(th1==0) th2=1;
	for(i=0;i<sizeof(dict2);i++)
	if(dict2[name2[i]]>dict2[name2[th2]]&&i!=th1)
		th2=i;
	if(th1==0||th2==0) th3++;
	if((th1==1||th2==1)&&th3==1) th3++;
	for(i=0;i<sizeof(dict2);i++)
	if(dict2[name2[i]]>dict2[name2[th3]]&&i!=th1&&i!=th2)
		th3=i;
	msg = 
	    HIR"�Ӿ��ﴫ������Ϣ��\n���Խ����.....\n״Ԫ��"+
	    name2[th1]+"\n���ۣ�"+name2[th2]+"\n̽����"+name2[th3]+"\n";
	msg += "����ߣ�\n";
	for(i=0;i<sizeof(dict1);i++)
	  if(name2[th1]!=name1[i]&&name2[th2]!=name1[i]&&name2[th3]!=name1[i])
	    msg += name1[i]+"\n";
	msg += HIY "��ȡ���뾡��������(report)\n" NOR;
	CHANNEL_D->do_channel(this_object(), "mud", msg);
	dict1=([]);
	dict2=query("test_men_id");
	name1=keys(query("set_test_men"));
	dict1[1]=dict2[name1[th1]];
	dict1[2]=dict2[name1[th2]];
	dict1[3]=dict2[name1[th3]];
	set("new_officer",dict1);
	set("test_men",([]));
	set("set_test_men",([]));
	time = 0;
}

int join_test()
{
	mapping dict;
	object	me=this_player();
        set_heart_beat(1);         

	if (time < START || time >= END)
		return notify_fail("������δ��ʼ�������ٵȵȰɡ�\n");
	if(me->query_skill("literate",1)==0)
		return notify_fail("��äҲ������ ?\n");
        if(me->query("family/family_name")=="ħ����") 
                return notify_fail("���������ɲ��ܵ���ม�\n");
if(me->query("family/family_name")=="ħ��Ī��")
return notify_fail("���������ɲ��ܵ���ม�\n");
if(me->query("class")=="prayer")
return notify_fail("���������ɲ��ܵ���ม�\n");
	dict=query("test_men");
	if(dict[me->query("name")]!=0)
		return notify_fail("�㲻���Ѿ������������� ?\n");
	if(me->query("officer_class"))
		return notify_fail("�㲻�����������ٱ������Ծ��Ƿ����۾�֮�\n");
	message_vision(
	CYN "$N˵������Ҫ�μӿ��� !\n" NOR,me);
	if(me->query("class")=="officer")
	{
		command("say ���� ! ����ҿ���Ц�ˡ�");
		return 1;
	}
	command("nod");
	dict=query("test_men");
	dict[me->query("name")]=random(me->query_skill("literate",1));
	dict=query("set_test_men");
	dict[me->query("name")]=random(me->query_skill("literate",1));
	dict=query("test_men_id");
	dict[me->query("name")]=me->query("id");
	return 1;
}

int join_guild()
{
	mapping dict=query("new_officer");
	object	me=this_player();
	int i;

	if(me->query("class")=="officer")
		return notify_fail("���Ѿ��ǹ��ˡ�\n");
	for(i=1;i<=3;i++)
	if(me->query("id")==dict[i])
	{
		message_vision("$N��ȡ�˹��������˸�С�١�\n",me);
		me->set("class","officer");
		me->set("officer_class","С��");
		me->delete("family");
		me->delete("marks/�ɽ�����");
		return 1;
	}
	command("say �Բ��� ! �㲢û���ϣ����Ͱɣ��´������������� !!");
	return 1;
}

void heart_beat()
{
  if (time == PREPARE) do_prepare();
  else if (time == START) do_start();
  else if (time == END) do_end();
  else if (time == REPORT) do_report();

  time++;

  ::heart_beat();
}
