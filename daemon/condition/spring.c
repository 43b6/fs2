// spring.c by oda

#include <ansi.h>

int update_condition(object me, int duration)
{
	if( duration==0 ) return 0;
        if( !living(me) ) {
                message("vision", me->name()+"似乎受不了欲火焚身的煎熬，精尽而亡了。\n", environment(me), me);
        } else if( duration > 5 ) {
                tell_object(me, HIG"你觉得全身燥热无比，欲火难耐。\n"NOR);
                message("vision", me->name()+"看起来似乎坐立难安，极度饥渴的样子。\n", environment(me), me);
		me->receive_damage("gin",20);
		if( (int)me->query("water")==0 ) {
			tell_object(me, "你感到口干舌燥，最好赶快喝水。\n");
		}
		if( (int)me->query("water")>=50 )
			me->add("water", -50);
		else
			me->set("water", 0);
	} else if( duration > 0 ) {
                tell_object(me, HIG"你仍觉得口渴无比，不过欲火似乎渐渐消退了。\n"NOR);
                message("vision", me->name()+"全身青筋浮现，满头大汗。\n",
                        environment(me), me);
		me->receive_damage("gin", 10);
		if( (int)me->query("water")==0 ) {
			tell_object(me, "你感到口干舌燥，最好赶快喝水。\n");
		}
		if( (int)me->query("water")>=30 )
			me->add("water", -30);
		else
			me->set("water", 0);
        }
        me->apply_condition("spring", duration-1);
        if( duration < 0)
                return 0;
        return 1;
}
