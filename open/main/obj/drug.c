inherit ITEM;

void create()
{
        set_name("ҩ��", ({ "drug powder", "drug", "powder" }) );
        set("unit", "��");
        set("long", "һ��ҩ�ۣ��ƺ�������(put)�ڲ�ˮ�\n");
        set("no_sell", 1);
	setup();
}

void init()
{
  add_action("do_put", "put");
}

int do_put (string arg)
{
  object	me=this_player(), tea;

  if (!arg && arg != "drug" && arg != "powder" && arg != "drug powder")
	return 0;
  
  if (!tea=present("teapot", me))
	return notify_fail ("�����ҩ����ʲô��������?\n");

  tell_room (environment(me), "�㿴��"+me->name()+"�������İ�"+
	"���еķ۷������С�\n", me);
  if (me->query_temp("quests/badman_license")>=4 &&
	tea->query("Һ��/ʣ") > 0)
  {
    me->set_temp("quests/badman_license", 5);
    tell_object(me, "������е��ɺ�ҩ�������С�\n");
    tea->set_temp("has_drug",1);
  }
  else tell_object(me, "������е�ҩ�۷������С�\n");
  tea->set("long", "һ������ҩ�۵Ĳ�ˮ���ƺ�������(send)�˺�...*grin*\n");
  destruct (this_object());
  return 1;
}
