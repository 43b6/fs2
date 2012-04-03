#include <combat.h>
#include <ansi.h>
inherit SSERVER;
int perform(object me, object target)
{
object ob = me->query_temp("weapon");
string msg;
int funlv=me->query_function("ghost-sword",1);
int forlv=me->query("force");
int hit=0;
int damage;
if(!ob || (string)ob->query("skill_type") != "sword")
return notify_fail("你没拿剑喔．\n");
if( !target ) target = offensive_target(me);
if(me->query("class")!="bandit")
return notify_fail("你不是恶人所以不能用。\n");
if( me->query_skill("badsword",1) < 30 ) 
 return notify_fail("你的魔日剑法还不够精纯，无没使出魔日斩。\n" NOR);
if( !target || !target->is_character() || !me->is_fighting(target) )
 return notify_fail("魔日斩只能在战斗中使用。\n");
if(me->query("force")<200)
 return notify_fail("你的内力不够。\n");
if(me->query("kee")<250)
 return notify_fail("你的气不够。\n");
msg=NOR
"                "HIR"☆  "BYEL+HIW"魔"NOR"  "BYEL+HIW"日"NOR"  "BYEL+HIW"斩"NOR+HIR"  ☆\n
"HIG"$N"HIY"纵身一跃，将全身功力集中于剑尖，凭空发出一击。\n"NOR;

if(random(me->query_skill("sword") + me->query_skill("badsword",1)) + funlv * 2 > 3 * (random(target->query_skill("dodge",1) + target->query_skill("parry",1)) / 2)||random(10)<=2 )
        {
           msg += RED;
           msg += "$n反应不及，"BYEL+HIW"魔日斩"RED"已全数贯穿$n的身体。\n" NOR;
damage = random(forlv*2) + funlv;
   if (damage > 800) {damage = 800;}
        target->receive_wound("kee",damage);
        me->add("force",-100);
        hit=1;
        } 
        else {
              msg += NOR "$n在危急时刻猛然一跃，机灵的躲开了"BYEL+HIW"魔日斩"NOR"。\n"NOR;
             }
        message_vision(msg, me, target);
        me->start_busy(1);
        if (funlv < 100)
        me->function_improved("ghost-sword", funlv * 2 + random(100));
        if(hit==1) COMBAT_D->report_status(target);
        return 1;
}
