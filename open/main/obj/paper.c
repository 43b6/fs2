#include "/open/open.h"

inherit ITEM;

void create()
{
        set_name("ֽ��", ({ "paper" }) );
        set("unit", "��");
        set("long", "һ��ֽ�����ƺ����Դ򿪿�����\n");
        set("no_sell", 1);
	setup();
}

void init()
{
  add_action("do_open", "open");
}

int do_open (string arg)
{
  object	me=this_player();
  int		query;

  if (!arg || arg != "paper")
	return 0;
  
  query = me->query_temp("quests/badman_license");

  message_vision("$N�����е�ֽ�򿪡�\n", me);
  if (query >= 3) {
    me->set_temp("quests/badman_license", 4);
    tell_object(me, "�㷢��ֽ�������һ��ҩ�ۣ�Ҳ�����ɺ�ҩ�ɡ�\n");

    new(MAIN_OBJ"drug")->move(me);
    destruct (this_object());
  }
  else set ("name", "�򿪵�ֽ��");
  return 1;
}
