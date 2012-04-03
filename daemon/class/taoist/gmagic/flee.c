#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
void remove_flee (object me);
int conjure(object me,object target)
{
	object *enemy;
	int memove,enemymove,funlvl;
        mapping exit=environment(me)->query("exits");
        string *dirs;
        int i;
        dirs=keys(exit);
        i=random(sizeof(dirs));
        if(!exit[dirs[i]]) return notify_fail("出路被挡住了, 不过多试几次就好了!!\n");
        load_object(exit[dirs[i]]);
        if(!me->query("spells/flee/level"))
        return 0;
        if(me->query("class")!="taoist")
        return 0;
        if(!me->is_fighting())
          return notify_fail("你又没在战斗，跑什么跑?\n");
	if(me->query_temp("tt"))
		return notify_fail("你的法术尚未施完!!");
        if( me->query_skill_mapped("dodge") != "g-steps")
          return notify_fail("你没有天道派的独门轻功，无法使出「隐遁”。\n");

        if(!exit)
	return notify_fail(HIW"这里无处可逃!!\n"NOR);
        message_vision(HIY"$N使出奇门遁甲之「隐遁”。\n"NOR,me);
		
	funlvl = me->query("spells/flee/level");
	if( random(funlvl+100) > random(100) )
          {
            message_vision(HIW"只见$N眨眼间已不知去向。\n"NOR,me);
            me->move(exit[dirs[i]]);
          }
        else
          {
            message_vision(HIY"可惜$N技术不够纯熟而失败了。\n"NOR,me);
            me->start_busy(1);                        
	  }
	
	if( me->query("spells/flee/level") < 100 )	
	spell_improved ("flee", random(funlvl*5)+100);
//me->start_call_out((: call_other, __FILE__, "remove_flee", me :),2);
	return 1;
}

void remove_flee (object me)
{

me->delete_temp ("tt");
  
  return;
}
