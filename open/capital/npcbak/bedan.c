inherit NPC;

void create()
{
	set_name("����",({"bedan"}));
	set("short", "����");
	set("race", "Ұ��");
	set("gender", "����");
	set("light_up",1);
	set("age", 10);
	setup();
}

void init()
{
  add_action("do_look", "look");
}

int do_look (string arg)
{
  object        me, env;

  me = this_player();
  if (!arg || arg != "out") return 0;

  env = environment();

  "/cmds/usr/look"->look_room(me, env, 1);
  return 1;
}

int start_marry(object wife)
{
  string	name=wife->query("name");

  set("short", "������"+name+"�Ļ���(Bedan)");
  set("long", "����һ�����Σ���ͷ�������ɣ��Ե�ϲ����������ӣ�\n"+
              "�������������ŵ���������--"+name+"��\n");
}
