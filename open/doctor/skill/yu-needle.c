// yu-needle
// 七奇针诀--- 手鍼(unarmed), 针鍼(stabber)
// by adam..

#include <ansi.h>
#include <combat.h>
inherit SKILL;

void bleed(object me, object victim, object weapon, int damage);

string *parry_msg=
    ({
   "$n身躯一引，指间$w平平搭在$N的武器上，一招‘"HIM" 拦雀尾"NOR" ’将$N的武器曳了开去。",
   "$n将身体靠向$N，一招‘"HIC" 沾衣十八跌 "NOR"’，将$N黏在原地，使不开招式!",
   "$n手中$w上下舞动，一招‘"HIW" 飞瀑长虹"NOR" ’, 逼得$N不得不守住自身!",
   "$n把手中的$w舞成圆环一招‘"HIB" 云回圆月 "NOR" ’，将$N的攻势尽数挡了下来。",
   "$n以静制动，手中$w平举胸前，一招‘"CYN" 如封似闭"NOR" ’，化解了$N的攻势!",
    });

//unarmed, stabber_action

mapping *action = ({
([ "action":"$N一招‘"HIW" 白蛇吐信"NOR" ’，下身稍曲，步履前跨，双掌微分，手指尖往$n的胸前‘"BLINK+HIC" 鸠尾穴"NOR" ’用力戳了去!",
        "dodge": -10,
        "parry": -20,
        "damage": 30,
        "force":  50,
        "damage_type":  "刺伤",
]),

([ "action":"$N手掌一张，一式‘"HIR" 恶虎扑羊"NOR" ’，纵身一跳，由上往下向$n的头顶‘"BLINK+HIY" 百会穴"NOR" ’扑了去!",
        "dodge": -20,
        "parry": -10,
        "damage": 40,
        "force": 130,
        "damage_type": "刺伤",
]),

([ "action":"$N双手一拉一按一压，将$n的左手背‘"BLINK+MAG" 合谷穴"NOR" ’制住，往外回转一圈，用力地将$n抛了开去!",
        "dodge": -30,
        "parry": 20,
        "damage": 50,
        "force": 180,
        "damage_type": "摔伤",
]),
([ "action" : "$N拗膝微蹲，倏地身躯一转，绕到了$n的背后，中指向$n背后‘"BLINK+HIW" 命门穴"NOR"’戳了去!",
        "dodge": -30,
        "parry": -10,
        "damage": 90,
        "force": 240,
        "damage_type": "刺伤",
]),
([ "action" : "$N身行突然地往后退了数步，$n跟进，忽然$N身行立停，手肘一曲，转退为进，肘尖往$n腹部‘"BLINK+HIR" 气血穴"NOR" ’急顶而去!",
        "dodge": -40,
        "parry": 10,
        "damage": 110,
        "force": 300,
        "damage_type": "刺伤",
]),

([ "action":"$N呼啸一声，身法轻灵地往$n背后纵了去，双手一打一戳，向$n的左边‘"BLINK+HIY" 太阳穴"NOR" ’，后脑‘"BLINK+HIG" 风府穴"NOR" ’攻击!",
        "dodge": 20,
        "parry": -10,
        "damage": 100,
        "force": 280,
        "damage_type": "刺伤",
]),
([ "action" : "$N一招‘"HIM" 转身六合"NOR" ’，身形轻轻左右摇摆，双手上下翻动，急速地向着$n或拍打，或擒拿，往$n的全身各大要穴招呼!",
        "dodge": 20,
        "parry": 10,
        "damage": 70,
        "force": 220,
        "damage_type": "刺伤",
]),

//weapon_action

([ "action":"$N左手一挥，右手一勾，一招‘"HIG" 飞花落叶"NOR"  ’，把手中$w舞向$n的双臂‘"BLINK+HIG" 尺泽穴"NOR" ’!",
        "dodge": -20,
        "parry": -10,
        "damage": 60,
        "force":  140,
        "damage_type":  "刺伤",
]),

([ "action":"$N运使$w, 左右开弓, 绵绵不尽, 戳向$n的胸前‘"BLINK+HIM" 膻中穴"NOR" ’, 背后‘"BLINK+HIR" 肾内穴"NOR" ’",
        "dodge": -30,
        "parry": -10,
        "damage": 260,
        "force": 30,
        "damage_type": "刺伤",
]),

([ "action":"$N身躯一蹲，双手掐$w，平平往前直刺，一招‘"HIC" 海底翻花"NOR" ’蓄势待发，迎向$n的脚底‘"BLINK+HIC" 涌泉穴 "NOR"’",
        "dodge": -35,
        "parry": -20,
        "damage": 120,
        "force": 270,
        "damage_type": "刺伤",
]),
([ "action":"$N身法轻灵，一招‘"HIY" 飞步拗鸾"NOR" ’，轻身一跃，$w刺向$n肩胛‘"BLINK+HIW" 云门穴"NOR"’，肩顶‘"BLINK+WHT" 肩胶穴"NOR" ’",
        "dodge": 25,
        "parry": -10,
        "damage": 90,
        "force": 240,
        "damage_type": "刺伤",
]),
([ "action":"$N双臂向外一张，一式‘"HIC" 大鹏展翅"NOR" ’，紧跟一招‘"HIM" 平沙落雁"NOR" ’，手中$w疾向$n的咽喉‘"BLINK+HIB" 天突穴"NOR" ’刺去!\n",
        "dodge": -40,
        "parry": -20,
        "damage": 60,
        "force": 230,
        "damage_type": "刺伤",
]),
([ "action":"$N身形一转，一式‘"HIM" 转身六合"NOR" ’，将手中$w舞成一股气流，回旋在$n四周，倏地一招‘"HIY" 回望春月"NOR" ’，将$w刺向$n脑门‘"BLINK+WHT" 天柱穴"NOR" ’，‘"BLINK+HIC" 哑门穴"NOR" ’",
        "dodge": 20,
        "parry": -20,
        "damage": 50,
        "force": 130,
        "damage_type": "刺伤",
]),
([ "action":"$N大喝一声‘[1;33m 绝命七针[0m ’，鼓动全身内劲，手中$w舞成七点光点，分别

向$n的‘"BLINK+HIR" 百会穴"NOR" ’，‘"BLINK+WHT" 印堂穴"NOR" ’，‘"BLINK+HIC" 天突穴"NOR" ’，‘"BLINK+HIM" 膻中穴"NOR" ’，‘"BLINK+HIY" 中脘穴"NOR" ’，□
‘"BLINK+MAG" 鸠尾穴"NOR" ’，‘"BLINK+HIR" 气海穴"NOR" ’，急急突刺!",
        "dodge": -30,
        "parry": -20,
        "damage": 190,
        "force":350,
        "damage_type":"刺伤",
        "post_action": (: bleed :),
]),
});

//超强攻击

void bleed(object me, object victim, object weapon, int damage)
{
        if(damage > 40)
         {
          victim->apply_condition("bleeding", random((int)damage / 10 +
          (int)me->query_skill("yu-needle",1)/10));
          message_vision(sprintf("[1;31m$N‘ 绝命七针 ’刺透了$n身上的任脉大穴, $n的身上血斑点点。[0m\n"),me,victim);
         }
}

mapping query_action(object me, object weapon)
{

        object wea=me->query_temp("weapon");

        if( wea!=0)
            return action[random(7)+7];
        else
          return action[random(7)];
}
                                        

int valid_enable(string usage)
{
        object me=this_player();
        object wea=me->query_temp("weapon");
         {
          if(wea!=0)
          if(wea->query("skill_type")=="stabber")
           {
//这一行表示有拿 needle
            me->map_skill("stabber","yu-needle");
            me->map_skill("parry","yu-needle");
            me->map_skill("unarmed",0);
            return (usage=="stabber")||(usage=="parry");
           }
//此行以下表空手
          me->map_skill("unarmed","yu-needle");
          me->map_skill("stabber",0);
          me->map_skill("parry",0);
          return (usage=="unarmed");
         }
        return (usage=="unarmed");
}

int practice_skill(object me)
{
        if(!me->query_temp("weapon") || !me->query_temp("secondary_weapon") )
          return notify_fail("练七奇炙针诀还是要拿根针吧!....\n");
        if( (int)me->query("gin") < 5 )
          return notify_fail("你的精不够，无法练习。\n");
        if( (int)me->query("kee") < 30 )
          return notify_fail("体力不够啰! 休息一下再继续练吧.\n");
        if( (int)me->query("force") < 1 )
          return notify_fail("目前内力不足,休息一会儿再练吧.\n");
        me->receive_damage("gin", 5);
        me->receive_damage("kee", 30);
        me->add("force", -1);
        return 1;
}

//parry_action_randon

int query_parry_msg(string limb)
{
//                return parry_msg[random(sizeof(parry_msg))];
return 1;
}
