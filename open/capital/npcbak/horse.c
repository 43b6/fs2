inherit NPC;

void create()
{
	set_name("����",({"horse"}));
	set("short", "����");
	set("race", "Ұ��");
	set("light_up",1);
	set("no_kill",1);
	setup();
}

void init()
{
  add_action("do_look", "look");
}

int do_look (string arg)
{
  object	me, env;

  me = this_player();
  if (!arg || arg != "out") return 0;

  env = environment();

  "/cmds/usr/look"->look_room(me, env, 1);
  return 1;
}

int start_marry(object husband)
{
  string	name=husband->query("name");

  set("short", "���ɹ�"+name+"�Ŀ���(Horse)");
  set("long", "����һƥ�ߴ�ͦ������ƥ�����ϵ�����������˿�����Ե�ϲ������\n"+
              "�����ӣ��������������ŵ��������ɹ�--"+name+"��\n");
}
