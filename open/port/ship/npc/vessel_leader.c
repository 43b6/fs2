inherit NPC;

void create()
{
	set_name("��ڤ����",({"vessel leader","leader"}));
	set("long","��ֻ�ܴ�����������ı��� , ���ֱ�������� , ���������� !\n");
	set("gender","����");
	set("combat_exp",3000);
        set("attitude","heroism");
	set("age",130);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("unarmed",40);
	set_skill("dodge",30);
	set_skill("parry",30);
	set("chat_chance",20);
	set("chat_msg",({
	"һ·������Ҳ� , ����亹ֱð ! \n",
	"����ô��ͻȻ����һƬ���� , ��е��ޱȵĿ־� !\n",
	}));
	setup();
	add_money("silver",10);
}
 int accept_kill(object me)
 {
	return notify_fail("���������ֶ����� , ����˵ɱ���� !\n");
  }
 int accept_fight(object me)
 {
	return notify_fail("����� , �����û�Ǹ�����������ս !\n");
 }
