// coffin.c by powell

#include <ansi.h>
#include </open/open.h>

inherit ITEM;

void create()
{
	set_name(YEL "��ľ" NOR,({"coffin"}) );
	set("long", "һ�ڳ�����̦�Ĺ�ľ, �ƺ��Ѱ�\�����кö����ˡ�\n"+
	            "Ҳ�������ƿ�(move)�׸�\, ��һ����������ô, ����"+
	            "���п�����δ֪��"+HIR+"Σ��"+NOR+"ม�\n");
	set("unit", "��");
	set_weight(5000000);
	set("value",1);
	setup();
}

void init()
{
	add_action("do_move", "move");
}

int do_move(string arg)
{
	int maxf,killair,check;
	object who;
	who = this_player();
	maxf = who->query("max_force");
	killair = who->query("bellicosity");
	check = who->query_temp("coffin");
	if ( arg == "coffin" ) {
	if ( killair > 100 && check !=1 ) {
	message_vision( "ͻȻ, ��о��������е�˵�����Ĺ���....\n"+
			"һ��Ӱ����ģ���������ĳ�����$N����ǰ��\n\n",who);
	tell_object( who,"�����ػ���а��Ķ�����Ц����\n"+
		         "�������Ҫ�ᶯ�����ľ��?\n\n");
	message_vision( "Ӱ�Ӷ���$N˵�˾仰��, ���ٴ���������ģ��, "+
	                "�����ʧ������\n",who);
	who->set_temp("coffin",1);
	return 1;
	}	         			
			
	message_vision( "$N�����Ὺ�׸�\, һ���Ǻڵ���������$N��������ȥ��\n",
			who );
	tell_object( who, "��е�����ʮ�ֲ���, ȫ��������\n");
	if ( maxf > 50 ) {
	who->add("max_force",-50);
	return 1;
	}
	who->set("kee",1);
	who->set("gin",1);
	who->set("sen",1);
	return 1;
	}
	tell_object( who, "����Ҫ�ᶯ��ô???\n" );
	return 1;
}

