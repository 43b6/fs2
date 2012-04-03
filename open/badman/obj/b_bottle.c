// b_bottle.c by powell 

#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
        set_name("��ɫСƿ��",({"blue bottle","bottle"})); 
        set("long","һ������ɫ��Сƿ�ӣ�����������װ��������\n"+
                   "Ҳ�����볢����ƿ��Ķ���(eat bottle)��\n");

	set("unit", "ƿ");
        set("base_unit", "ƿ");
        set("value", 0);
        set("base_weight", 50);
	set_amount(1);
	setup();
}

void init()
{
		add_action("eat_bottle","eat");
}

int eat_bottle(string arg)
{      
	object who = this_player();
        if(arg=="bottle"){
        message_vision(
			"$N��ƿ�����ҩ���ó������̽����\n",who );
	if (who->query_condition("snake_poison")) {
	who->apply_condition("snake_poison",0);
        tell_object(who,HIB"���е��߶�����!\n"NOR);
	}
	else {
	tell_object(who,"�㽫ҩ�����º���ô��Ҳû������\n");
	}
	tell_object(who,"��Ϊƿ���Ѿ����ˣ������ֽ�ƿ�Ӷ�����\n");
	destruct (this_object());
	}
	tell_object(who,"��Ҫ����ô??\n");
	return 1;
}

