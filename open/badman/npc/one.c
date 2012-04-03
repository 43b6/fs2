// one.c by oda

#include </open/open.h>
#include <ansi.h>

inherit NPC;

string do_cure();
string stop_bleed();
string cure_poison();
string do_ask();

void create()
{
	set_name("����", ({ "one tsun liu", "one", "liu" }) );
	set("title", "��ҽ");
	set("gender", "����");
	set("age", 49);
	set("attitude", "peaceful");
	set("combat_exp", 100000);
	set("no_kill", 1);
	set("long", "�㿴��һ���������ӣ����ų��ۻƹڣ�����ƮƮ����Ȼ������\n���鿴��˵�����ĺ�ƽ������\n���Ƕ��˹���Ψһ��ҽ���������ڶ��˹��е��˶������β���\n");
	set("str", 22);
	set("cor", 20);
	set("int", 33);
	set("spi", 30);
	set("cps", 32);
	set("con", 28);

	set("chat_chance", 3);
	set("chat_msg", ({
		"����̾�˿������૵�����..��֪����˭�ܾȵ�����..\n",
		"����ҡ��ҡͷ˵���������С����⺢�ӡ�\n",
	}) );
	
	set("inquiry", ([
	//"��"	:	(: do_ask1 :),
	//"С���":	(: do_ask2 :),
    "����ɭ��" : "����ȥ����ɭ��.. ?��Ҳֻ����˵���� ,��ϸλ���������˹�Ҳֻ�ж�ɱ����ԯ�����Ǹ��öĹ�֪������...\n",
	"����"	:	(: do_cure :),
	"ֹѪ"	:	(: stop_bleed :),
	"�ⶾ"	:	(: cure_poison :),
    "����"  :   (: do_ask :),
	]));

	setup();
}

int accept_fight(object me)
{
	return notify_fail("����Ц�Ŷ���˵����λ"+RANK_D->query_respect(me)+"����Ц�˺���?\n");
}

string do_cure()
{
	int kee, ekee, mkee;
	object who;
	who = this_player();
	ekee = who->query("eff_kee");
	mkee = who->query("max_kee");

	if( ekee==mkee ) return "�㲻�Ǻúõģ��������ˣ�";
	if( ekee>=mkee*8/10 ) return "������Ʋ������أ��Լ�����Ϣ�ͺ��ˡ�";
	kee = (mkee*8/10 - ekee);
	if( !who->can_afford(kee*100) )
		return "�Բ����������ƶ��ԣ�ֻ�����Ǯ���°ﲻ���㡣";
	who->pay_money(kee*100);
	who->set("eff_kee", mkee*8/10);
	message_vision("���������һ��$N�����ƣ��������˼�������ҩ����$N���˿��ϡ�\n", who);
	tell_object(who, HIC"��о������ϵ��˿ںö��ˡ�\n"NOR);
	return "���ˣ���λ"+RANK_D->query_respect(who)+"���Ժ�ǵ�С��һ��ม�";
}

string stop_bleed()
{
	int bleed;
	object who = this_player();

	if( !bleed = who->query_condition("bleeding") )
		return "��������Ѫ�ˣ�����Ѫ�ҿɲ��Ρ�";
	if( !who->can_afford(500*bleed) )
		return "�Բ����������ƶ��ԣ�ֻ�����Ǯ���°ﲻ���㡣";
	who->pay_money(500*bleed);
	message_vision("�㿴�������Լ��������ַ�Ѹ�ٵİ�$N��ҩ�������˿ڡ�\n", who);
	who->apply_condition("bleeding", 0);
	tell_object(who, HIC"����˿�ֹͣ��Ѫ�ˡ�\n"NOR);
	return "����Ӧ�þͿ����ˡ�";
}

string cure_poison()
{
	int snake, coldpoison;
	int dark, five, rose, fire;
	object who = this_player();
	coldpoison = 0;

	if( who->query_condition("spring") ) {
		command("grin");
		return "�����Ϻ�ɢ��û�н�ҩ�ģ����Լ���͵�ԣ���Ҳû�취����";
	}
	snake = who->query_condition("snake_poison");
	if( dark = who->query_condition("dark_poison") )
		coldpoison += dark;
	if( five = who->query_condition("five_poison") )
		coldpoison += five;
	if( rose = who->query_condition("rose_poison") )
		coldpoison += rose;
	if( fire = who->query_condition("fire_poison") )
		coldpoison += fire;

	if( !coldpoison && !snake )
		return "�Ϸ�ʵ���ǿ��������е���ʲô����";
	if( coldpoison && coldpoison<=3 ) {
		tell_object(who,"����ҡҡͷ˵�����е�����涾�Ѿ�û�취�ټ����ˡ�\n");
	} else if( coldpoison ) {
		tell_object(who,"��������üͷ˵����������ڤħ�̵�����涾����ֻ�����Ű�����ᶾ�Կ����ˡ�\n");
		if( !who->can_afford(coldpoison/2*20000) )
			return "�Բ������Ǯ������ô��Ľ�ҩ��";
		who->pay_money(coldpoison/2*20000);
		if( dark ) who->apply_condition("dark_poison", dark/2);
		if( five ) who->apply_condition("five_poison", five/2);
		if( rose ) who->apply_condition("rose_poison", rose/2);
		if( fire ) who->apply_condition("fire_poison", fire/2);
	}
	if( snake ) {
		tell_object(who, "�������˿���˵�����������߶�ม�\n");
		if( !who->can_afford(500*snake) )
			return "�Բ��������ϵ�Ǯ��������������߶�ม�";
		who->pay_money(500*snake);
		who->apply_condition("snake_poison", 0);
	}
	message_vision("������ϸ�ļ����һ��$N��״������ת��ӳ����ϵ�һ��������\n���˼��ź�ɫҩ�裬����$N�Ŀ��С�\n", who);
	tell_object(who, "һ��ǿ�ҵĳ�ζ�������ﴫ�˳�����������Ż����ֻ����ס����һ\n������ҩ��������ȥ��\n");
	if( coldpoison )
		tell_object(who, HIC"��о������ڵĶ��Լ������١�\n"NOR);
	else
		tell_object(who, HIC"��о���������ˡ�\n"NOR);
	return "��ҩ��ڣ�������̰ɡ�";
}

string do_ask()
{
  int me;
  object who = this_player();
  if(who->query_temp("marks/karup2")!=1)
  {
   return "ʲô�������˹��������ֶ�����\n";
  }
  else
  {
   who->set_temp("marks/allow",1);
message_vision("[36m����˵����[1;33m����������������Ů�ˣ�ɶ������˵�ˣ�
�ðɣ�����������ڶ���ɭ�ֵ�ĳ���ط���ȥ����ԯ����ɡ�
���ɱ�˵��������ȥ�İ�����Ȼ��ɱ֪���ˣ����Ҷ��鷳��[0m\n",who);
  return "[1;37m��ǧ��𽲰���[0m\n";
  }
}
