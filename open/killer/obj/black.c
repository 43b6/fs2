//极毒无比，细如牛毛，极为少见，取自血变，因此数量很少
#include <weapon.h>
#include <ansi.h>
inherit THROWING;
void create()
{
     set_name("黑血神针",({"black blood","blood","black"}));
     set_weight(1);
     if( clonep() )
         set_default_object(__FILE__);
     else {
       set("unit","支");
       set("base_unit","支");
       set("long","传说中只存在于飘花宫的致毒武器，只有极少数暗器高手会使用\n
                    你可以用shot将黑血神针射出去");
       set("light_up",-1);
       set("value",1000);
       set("no_sell",1);
       set ("no_drop",1);
       set("material", "silver");
       set("wield_msg","$N拿起$n,心中十分兴奋，这就是天下至毒--黑血神针\n");
       set("unwield_msg", "$N将$n放入金制护套，以免误伤自己\n");
     }
      init_throwing(10);
      set_amount(1);
      setup();
}
void init()
{
    if( this_player()==environment() )
    {
       add_action("black_shot","shot");
    }
}

int black_shot(string arg)
{
   int sk;
   object ob,me,target;
   string str;
   me = this_player();
   ob = this_object();
   sk=me->query_skill("throwing",1);
   if( !arg )
       return notify_fail("你想射空气呀？\n");
   if (me->query("class") != "killer")
	return 0;
   target = present(arg, environment(me)); 
    if(!target) return notify_fail("找不到敌人!!\n");
   if( target->query("no_kill") ) 
       return notify_fail("这家伙你不能动就是不能动。\n");
   if( !wizardp(me) && environment(me)->query("no_fight") )
       return notify_fail("这里禁止战斗。\n");
   if( !target->is_character() || target->is_corpse() )
       return notify_fail("看清楚点,它并不是活物。\n");
   if( target == me ) 
       return notify_fail("杀手目前还没有，练尸魂人的打算啦！不要找死啦！\n");
   message_vision("$N把身上的黑血神针往$n的身上射了过去。\n\n",me,target);
   if( random(sk) > random(target->query_skill("dodge",1)/2))
   {
        message_vision(HIM "$N一个不留意,被黑血神针刺中了！\n" NOR,target);
        target->apply_condition("blood",sk/10);
        add_amount(-1);
        return 1;
   }
   else
   {
        message_vision(
        HIC "$N急急忙忙往后跳开, 被黑血神针吓出了一深冷汗。\n" NOR,target);
        add_amount(-1);
        return 1;
   }
}

int wield()
{
 object me=this_player();

 if(me->query_skill_mapped("throwing") != "rain-throwing")
 {
	tell_object(me,"杀手专用武器，你不是杀手，所以你不会用！\n");
        return 0;
 }
 if(me->query_skill("throwing",1) < 80 )
 {
 	tell_object(me,"小朋友，暗器手法练好一点，再用吧！\n");
        return 0;
 }
}
