// lee.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("�����", ({ "lee da tswei", "lee", "da", "tswei" }) );
	set("nickname", "������ͷ");
	set("class", "bandit");
	set("attitude", "badman");
	set("gender", "����");
	set("age", 40);
	set("combat_exp", 800000);
	set("long", "�㿴��һ����ò���������ӣ����������ǽ�����������֮ɫ��Ŀֲ�ħͷ\n����˵������������ɱ���Լ�ȫ����С���������ǡ����ǳ���Ϊ��������\nͷ������Ϸ����������ͷ����ʲô���ԣ�������ʵ������������������ͷ\n�����Ź��ġ�\n");

	set("str", 32);
	set("cor", 29);
	set("int", 22);
	set("spi", 20);
	set("cps", 22);
	set("con", 30);
	set("per", 32);
	set("max_force", 1200);
	set("force", 1200);
	set("force_factor", 10);
	set("max_gin", 1000);
	set("max_kee", 2300);
	set("max_sen", 1000);

	set_skill("badforce", 65);
	set_skill("badstrike", 85);
	set_skill("dodge", 40);
	set_skill("force", 55);
	set_skill("ghost-steps", 60);
	set_skill("move", 50);
	set_skill("parry", 60);
	set_skill("unarmed", 75);
	map_skill("force", "badforce");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");
	map_skill("unarmed", "badstrike");
	map_skill("parry", "badstrike");
	set("functions/evil-blade/level", 25);

	set("chat_chance_combat", 25);
	set("chat_msg_combat", ({
	(: perform_action, "unarmed.evil-blade" :),
	}));

	setup();
	add_money("gold", 10);
}

int accept_object(object who, object ob)
{
  string name, str;

  if (ob->query("name") == "���õ�ʬ��") {
  command("say С���� ,ʬ�嶼�õ��� ,Ҫ��ô�� ?");
  return 1;
  }


  else if (ob->query("name") == "�����õ�ʬ��") {
  if (who->query_temp("evilup")!=1) {
     command("say ���н��������� ?������Ҳ���� ,�ٺ� ,л��");
     destruct(ob);
     return 1;
     }
  else if (who->query_temp("yang")!=1) {
     command("say ����С�ӵ�������һ��� ,л��");
     destruct(ob);
     return 1;
     }
  else if (who->query("quests/evilup")) {
     command("say �̶����˻������ ?");
     destruct(ob);
     return 1;
     }
  else {
  who->set("quests/evilup",1);
  command("say ������ ,��ͦ��� !���� ,�ͽ���һ���ڹ���!!!");
  tell_object (who, "[35m����һ�� ,ȫ��ɱ����Ȼ����һɢ ,���ɱ�������!!!(evilup)[0m\n");
  destruct(ob);
   return 1;
  }
 }
  else if (ob->query("name") == "��Х���ʬ��") {
  if (who->query_temp("evilup")!=1) {
     command("say ���н��������� ?������Ҳ���� ,�ٺ� ,л��");
     destruct(ob);
     return 1;
     }
  else if (who->query_temp("kou")!=1) {
     command("say ����С�ӵ�������һ��� ,л��");
     destruct(ob);
     return 1;
     }
  else if (who->query("quests/evilup")) {
     command("say �̶����˻������ ?");
     destruct(ob);
     return 1;
     }
  else {
  who->set("quests/evilup",1);
  command("say �ܺúܺ� ,�� ,��ͦ˳�ڵ�!!!�üһ� ,�ʹ���һ�а� !");
  tell_object (who, "[35m����һ�� ,ȫ��ɱ����Ȼ����һɢ ,���ɱ�������!!!(evilup)[0m\n");
  destruct(ob);
  return 1;
  }
 }
  else if (ob->query("name") == "��������ʬ��") {
  if (who->query_temp("evilup")!=1) {
     command("say ���н��������� ?������Ҳ���� ,�ٺ� ,л��");
     destruct(ob);
     return 1;
     }
  else if (who->query_temp("chen")!=1) {
     command("say ����С�ӵ�������һ��� ,л��");
     destruct(ob);
     return 1;
     }
  else if (who->query("quests/evilup")) {
     command("say �̶����˻������ ?");
destruct(ob);
     return 1;
     }
  else {
  who->set("quests/evilup",1);
  command("say �� ,ζ���óԼ��� !�������������ͦ����� ,��!!�ͽ�����ôһ��!!!");
    tell_object (who, "[35m����һ�� ,ȫ��ɱ����Ȼ����һɢ ,���ɱ�������!!!(evilup)[0m\n");
    destruct(ob);
    return 1;
  }
 }
  else {
  command("say ���� !�����õ��ֲ�����Щ�һ�� ,����û�Թ��� ?");
  return 1;
  }
  return 1;
}
 
