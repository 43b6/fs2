// changed by Onion

inherit ITEM;

void create()
{
	set_name("����", ({ "bandage" }) );
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	        set("long","ר����������(bandage <id> )�ı�����\n");
		set("unit", "��");
		set("value",100);
		set("material", "cloth");
		set("cure_type","bandage");
	}
	setup(); 
}

void init()
{
	add_action("do_bandage", "bandage");
	add_action("do_remove", "remove");
}

int do_bandage(string arg)
{
        object ob=this_object();
	object me=this_player();
	object target;
	int tick;

	if( !arg )	target = me;
	else 
	{
	  target = present(arg, environment(this_player()));
	  if( !target || !target->is_character() )
	    return notify_fail("û������ˡ�\n");
	}
	
	if( target->query_temp("medicine/bandaged") )
	  return notify_fail((target=me?"��":target->name())+"���˿����Ѿ��б��������ˣ������Ҫ�������°��������Ȱ�������(remove)��\n");

	if( me->is_fighting() || target->is_fighting() )
	  return notify_fail("ս���в��ܰ�����\n");

	if( target->query("kee") == target->query("max_kee") )
	  return notify_fail( (target==me? "��" : target->name())+"��û�����Ե����ˡ�\n");

	if( !move(target) ) return 0;

	message_vision("$Nϸ�ĵ���$n��"+(target==me?"�Լ�":target->name())+"���ˡ�\n",me,ob);

	tick=me->query_skill("cure")/30;
	if( tick>6 )	tick=6;
	tick = 9-tick;
	target->set_temp("medicine/bandage_tick",tick);
	target->set_temp("medicine/bandage_times",20-tick);
	target->set_temp("medicine/bandaged",1);
	set("no_drop",1);
	set("value",0);
	set("equipped",1);
	return 1;
}

int do_remove(string str)
{
	object ob=this_object();
	object me=this_player();
	if( ob->query("equipped") && str=="bandage" )
	{
	  me->set_temp("medicine/bandage_tick",0);
	  me->set_temp("medicine/bandaged",0);
	  message_vision("$N��$n���˿ڴ�����������\n",me,ob);
	  destruct(this_object());
	  return 1;
	}
	else
	  return 0;
}
