// made by roger
//300��
inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name("ǧ��֮ˮ", ({"blood water","water"}) );
	set("long",
	"һ�Ųغڵ��������ڲ��ϵ�������, ���ɫ��ѪҺ������������������, 
�������ƺ���������(suck)�����Ѫ\n");
	set("unit", "��");
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
        int maxkee,maxforce;
        object ob,me=this_player();
        maxkee=me->query("max_kee",1);
        maxforce=me->query("max_force",1);
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
  	if( ob != this_object() )       return 0;
        if (me->query_condition("mogi") > 0){
        message_vision(
"$N��������������к�ɫ��Ѫˮ, ͻȻ��������һ���ʹ, ����֮���ƺ�
���������\n", me);
        me->clear_condition("mogi");
	add_amount(-1);
 log_file("mogi/poison", sprintf("%s(%s) �������֮�� on %s\n"
,me->query("name"),me->query("id"), ctime(time()) ));
	return 1;
                                       }
   else {
        message_vision(
"$N��������������к�ɫ��Ѫˮ, ��Ȼ��ʹ���, Ż����һ̲��ɫ��Ѫˮ!\n", me);
        me->add("force",-1000);
        me->receive_wound("kee",90);
        me->apply_condition("mogi",5);
	add_amount(-1);
	return 1;
        }    	
}
