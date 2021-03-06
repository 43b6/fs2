//木诀心法 - 捻花指诀 by sueplan
#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
void remove_effect(object me, int amount);

int perform(object me, object target)
{
        int skill,force,woodforce,temp,down;
        force=me->query("max_force"); 
        woodforce=me->query_skill("woodforce",1);
        if( (string)me->query_skill_mapped("force")!= "woodforce")
        return notify_fail("捻花指诀要用木诀心法来启动。\n");
        if (me->query("force") < force/6)
        return notify_fail("你的内力不够，无法聚神使出捻花指诀。\n");
        if(me->query_temp("beg_ok")==1) 
        return notify_fail("你已经在用了。\n");
        if( me->query("family/family_name") != "少林派")
        return notify_fail("阁下不是少林中人，不可使用！\n");
        temp=me->query("functions/bergamon/level","bergamon");
        skill = (temp+temp)/2;
//最多add attack 150
        if( skill >= woodforce ) skill = woodforce;
        if (skill > 100) skill = 100;
        me->add("force",-force/6);
        me->set_temp("beg_ok",1);

//第一层        

        if (skill < 10)
        {
        message_vision(
HIB "$N气沉于心运起木诀心法中的「明”字诀，双手凝气成真！。\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
        }

//第二层

        if (skill >=10 && skill < 20)
      
        {
        message_vision(
HIB "$N气沉于心运起木诀心法中的「心”字诀，双手凝气成真！。\n",me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(1);

        return 1;
        }

//第三层

        if (skill >= 20 && skill < 30)
        {
        message_vision(
HIR "$N气沉于心运起木诀心法中的「见”字诀，双手凝气成真！。\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(1);

        return 1;
        }

//第四层

        if (skill >=30 && skill < 40)
        {
        message_vision(
HIR "$N气沉于心运起木诀心法中的「性”字诀，双手凝气成真！。\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }
//第五层
        if (skill >=40 && skill < 50)
        {
        message_vision(
HIG "$N气沉于心运起木诀心法中的「空”字诀，双手凝气成真！。\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }
        

//第六层

        if (skill >=50&& skill < 60)
        {
        message_vision(
HIG "$N气沉于心运起木诀心法中的「彻”字诀，双手凝气成真！。\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }
//第七层
        if (skill >=60 && skill < 70)
        {
        message_vision(
HIC "$N气沉于心运起木诀心法中的「通”字诀，双手凝气成真！。\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }
//第八层
        if (skill >=70 && skill < 80)
        {
        message_vision(
HIC "$N气沉于心运起木诀心法中的「悟”字诀，双手凝气成真！。\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }
//第九层
        if (skill >=80 && skill < 90)
        {
        message_vision(
HIW "$N气沉于心运起木诀心法中的「佛”字诀，双手凝气成真！。\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }                      
//第十层
if (skill >=90 && skill <= 100)
        {
        message_vision(
HIC"                $N明了木诀心法捻花指诀中万事万物皆有万象的佛理\n
                        "HIY"「明心见性    空彻通悟  ”\n  
"+HIC+"               $N身上散发无限光辉，此其为捻花指诀中最高深的境界。\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);
        return 1;
        }
}
 
void remove_effect(object me, int skill)
{
     int woodforce=me->query_skill("woodforce",1);
        if(skill >= 100) me->set("functions/bergamon/level",100);
        else 
        if(skill < woodforce )
        function_improved("bergamon",(skill*5+random(skill*5)));
        me->delete_temp("beg_ok");
        me->add_temp("apply/attack",-skill);
        message_vision("$N全身佛意散去，身上白光渐渐化为光线射出。\n",me);
}

