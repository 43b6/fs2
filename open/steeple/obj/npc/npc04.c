#include <ansi.h>

#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("练习生", ({ "trainee" }) );
        set("title", "黑牙联");
        set("gender", "男性");
        set("long", "这是杀手的练习生。\n");
        set("age",12);
        set("attitude", "heroism");
        set("kee",600);
        set("max_kee",600);
        set("combat_exp",6000);
        setup();
}


int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"系统：战斗停止，$N回收中，。\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
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
if(me->query("quest/start_game")< 5)
       {
        tell_object(me,HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第四层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第五层试炼□塔"HIG"’"HIW"。
	"NOR);
	me->set("quest/start_game",5);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}