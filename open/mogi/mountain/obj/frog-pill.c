// made by roger
//300��
inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name(HIC"��󸵤Ԫ"NOR, ({"ice-frog pill","pill"}) );
	set("long",
	"����ǧ������ϵĵ�Ԫ�����������������Ϣ��\n");
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        set("no_put",1);
	set("unit", "��");
	set("base_unit", "��");
        set("value", 500000);
        set("base_weight", 50);
	set_amount(1);
	setup();
}
void init()
{
	if( this_player()==environment() )
		add_action("eat_pill", "eat");
}
int eat_pill(string arg)
{
        int force,fireforce;
        object ob,me=this_player();
        force=me->query_skill("force",1);
        fireforce=me->query_skill("fireforce",1);
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
  	if( ob != this_object() )       return 0;
    if(me->query("quests/ice-frog")==1){
 tell_object(me,"��󸵤Ԫһ��ֻ�ܷ���һ�Σ���������ھ�ʧ��֮�ǡ�\n");
    return 0;
                                        }

message_vision(
"$Nһ��������"HIC"��󸵤Ԫ"NOR"��ֻ����Ԫ�������Ϣ��ʱѹ�������ڹ�ʱ
���������ĸ����꣬��֪������$N�Ļ����ڹ��������˲��١�\n", me);
  me->set_skill("force",force+25);
  me->clear_condition();
  me->set("quests/ice-frog",1);
  add_amount(-1);
  return 1;	
}

