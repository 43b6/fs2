// made by roger
//300万
inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name(HIC"冰蟾丹元"NOR, ({"ice-frog pill","pill"}) );
	set("long",
	"本是千年冰蟾额上的丹元，发出淡淡冰冷的气息。\n");
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        set("no_put",1);
	set("unit", "颗");
	set("base_unit", "粒");
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
 tell_object(me,"冰蟾丹元一生只能服用一次，否则恐有内劲失控之虑。\n");
    return 0;
                                        }

message_vision(
"$N一口吞下了"HIC"冰蟾丹元"NOR"，只觉丹元冰冷的气息暂时压抑了练内功时
所带来的心浮气躁，不知不觉中$N的基本内功已增益了不少。\n", me);
  me->set_skill("force",force+25);
  me->clear_condition();
  me->set("quests/ice-frog",1);
  add_amount(-1);
  return 1;	
}

