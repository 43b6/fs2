#include <ansi.h>

inherit NPC;
void create()
{
        set_name("测试肉包",({ "meet foot","meet","foot" }) );
        set("gender", "男性" );
        set("age", 41);
        set("str", 25);

	setup();
}

void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\n系统：由于你没携带晶片，所以无法记录战绩。\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\n系统：由于你没有正式登记，资料无法传输。\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 2)
       {
        tell_object(me,HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第一层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第二层试炼□塔"HIG"’"HIW"。
	"NOR);
	me->set("quest/start_game",2);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}