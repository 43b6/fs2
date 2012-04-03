#include "/open/open.h"

inherit ITEM;
//inherit F_LIQUID;

void create()
{
	set_name("���", ({ "teapot" }) );
	set_weight(700);
	set("long", "����һֻ������\n");
	set("unit", "ֻ");
	set("value", 50);
	set("����", 40);

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("Һ��", ([
		"����": "��",
		"����": "��˺ή�����",
		"ʣ": 35,
		"ֹ��" : 30,
		"drunk_apply": 8,
	]) );
	setup();
}

void init()
{
  add_action("do_send", "send");
}

int do_send(string arg)
{
   object me=this_player(), day;
   string name, what;

  if (!arg) return 0;
  if ( sscanf (arg, "%s to %s", what, name) != 2) return 0;
  if (what != "teapot" && name != "day") return
	notify_fail ("��Ҫ��ʲô�͸�˭?\n");

  if (!day=present("day", environment(me)))
    return notify_fail ("�����첢�����������\n");

  if (me->query_temp("quests/badman_license") >= 5 && query_temp("has_drug")) {
    me->set_temp("quests/badman_license", 6);
    message_vision ("���������ҩ��֮������һ��......\n", me);
    day->die();
  }
  else
    message_vision ("���������ҩ��֮���Ե�������ˬ��\n", me);

  destruct(this_object());
  return 1;
}
