// made by roger

inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name("ǧ��֮ˮ", ({"blood water","water"}) );
	set("long",
	"һ�Ųغڵ��������ڲ��ϵ�������, ���ɫ��ѪҺ������������������, 
�������ƺ���������(suck)�����Ѫ\n");
	set("unit", "��");
    set("no_steal",1);
	set("base_unit", "��");
        set("value", 100000);
        set("base_weight", 50);
	set_amount(1);
	setup();
}
void init()
{
	if( this_player()==environment() )
		add_action("suck_water", "suck");
}
int suck_water(string arg)
{
        object ob,me=this_player();

        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
  	if( ob != this_object() )       return 0;

        if (me->query_condition("mogi") > 30){
        message_vision(
"$N��������������к�ɫ��Ѫˮ֮��, ������һ�������ĲҺ�, ��������������ȥ...\n", me);
        me->die();
 log_file("mogi/poison", sprintf("%s(%s) ������ʳǧ��֮ˮ��ƨ on %s\n"
,me->query("name"),me->query("id"), ctime(time()) ));
	add_amount(-1);
	return 1;
                                       }

       else if (me->query_condition("mogi") > 0){
        message_vision(
"$N��������������к�ɫ��Ѫˮ, ͻȻ��������һ���ʹ, �漴���������Ѫ, ����֮����Ȼ������\n", me);
        me->apply_condition("mogi",35);
 log_file("mogi/poison", sprintf("%s(%s) ��ʳ��ǧ��֮ˮ on %s\n"
,me->query("name"),me->query("id"), ctime(time()) ));
	add_amount(-1);
	return 1;
                                       }
       else {
        message_vision(
"$N��������������к�ɫ��Ѫˮ, ��Ȼͷʹ����, ������ʱȫ��Ѫɫ��\n", me);
        me->add("force",-1000);
        me->receive_wound("kee",90);
        me->apply_condition("mogi",5);
 log_file("mogi/poison", sprintf("%s(%s) ������֮��(��ʳ) on %s\n"
,me->query("name"),me->query("id"), ctime(time()) ));
	add_amount(-1);
	return 1;
        }    	
}

int query_autoload()
{
 return 1;
}
