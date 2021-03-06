//极火金身
#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
 
void remove_effect(object me, int amount);

int perform(object me, object target)
{
        int skill,force,fireforce,temp;
        force=me->query("max_force"); 
        fireforce=me->query_skill("fireforce",1);

        if( !me->query("quest/gold-fire") ) return notify_fail("你没有学会此心法\n");

        if( (string)me->query_skill_mapped("force")!= "fireforce")
        return notify_fail("极火金身要用极火功来启动。\n");
    
        if (me->query("force") < force/6)
        return notify_fail("你的内力不够，不能运起极火金身。\n");

        if(me->query_temp("gold-fire")==1) return notify_fail("你已经在用了。\n");

        temp=me->query("functions/gold-fire/level","gold-fire");
        skill = temp;
	if( skill >= fireforce ) skill = fireforce;
        if (skill > 90) skill = 90;
        me->add("force",-force/6);
        me->set_temp("gold-fire",1);
if (skill < 14){
        message_vision(
        HIM "$N运起极火金身第一层「天极身”，全身四周笼罩在一股紫色的护身气劲内！。\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);
 
        return 1;
                       }
if (skill >=14 && skill < 28){
        message_vision(
        HIG "$N运起极火金身第二层「地极身”，全身四周笼罩在一股绿色的护身气劲内！。\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
if (skill >= 28 && skill < 42){
        message_vision(
        HIW "$N运起极火金身第三层「人极身”，全身四周笼罩在一股白色的护身气劲内！。\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
if (skill >=42 && skill < 56){
        message_vision(
        HIB "$N运起极火金身第四层「魔极身”，全身四周笼罩在一股蓝色的护身气劲内！。\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
if (skill >=56 && skill < 70){
        message_vision(
        HIC "$N运起极火金身第五层「龙极身”，全身四周笼罩在一股青色的护身气劲内！。\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
if (skill >=70 && skill < 84){
        message_vision(
        HIR "$N运起极火金身第六层「火极身”，全身四周笼罩在一股火红的护身气劲内！。\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
if (skill >=84){
        message_vision(
        HIY "$N运起极火金身顶级功力「极火金身”，四周金光暴现，并有熊熊烈火环绕在$N的四周！。\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
}
 
void remove_effect(object me, int skill)
{
   int fireforce=me->query_skill("fireforce",1);
   if(skill >= 90) me->set("functions/gold-fire/level",90);
        else if(skill < fireforce )
        function_improved("gold-fire",(skill*7+random(skill*8)));

        me->delete_temp("gold-fire");
        me->add_temp("apply/defense",-skill);
        message_vision("$N的护身气劲开始崩溃涣散了。\n",me);
}
