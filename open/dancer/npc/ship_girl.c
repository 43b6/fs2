inherit NPC;

void create()
{
	set_name("����",({"ship girl","girl"}));
	set("long","һ��˫ʮ�껪�Ĺ��� , ����������̬�ٿ��Ŵ� !\n");
	set("gender","Ů��");
	set("combat_exp",30000);
        set("attitude","heroism");
	set("age",20);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("unarmed",40);
	set_skill("dodge",60);
	set_skill("parry",60);
	set("chat_chance",20);
	set("chat_msg",({
	"�����Ĵ��Ŵ��� , ����һ����ĺ��� !\n",
	"���ߴ�������ĺ�����������Ľ���������Ȼ���� !\n",
	"������ȥ��һƬ�ı̺����� , ���������� !\n",
	}));
	setup();
	add_money("silver",10);
}
 int accept_kill(object me)
 {
	return notify_fail("����˵�� : ��Ȼ����ҾͲ�������!\n");
  }
 int accept_fight(object me)
 {
	 return notify_fail("�������µ� : ��Ҫ�۸���С����:~~~~\n");
 }
