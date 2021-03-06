#include <combat.h>
#include <ansi.h>
inherit SKILL;
void sun1(object me, object victim, object  weapon, int damage);
void sun2(object me, object victim, object  weapon, int damage);
void sun3(object me, object victim, object  weapon, int damage);
void sun4(object me, object victim, object  weapon, int damage);
void sun5(object me, object victim, object  weapon, int damage);
void sun6(object me, object victim, object  weapon, int damage);

mapping *action = ({
//1
  ([ "action": 
HIY"$N使出"HBBLU+HIW"Ψ天山六阳掌Ψ"NOR+HIY"之起手式"HIR"‘阳关三叠’"HIY"强劲的掌力以连绵不绝生生不息之力
有如排山倒海之势朝$n击去，一掌三式掌劲浑厚无匹。"NOR,
                "dodge":                -5,
                "parry":                -20,
                "force":                200,
                "damage":               300,
                "post_action":               (:sun1:),
                "damage_type":  "内伤",                
        ]),
//2
  ([ "action": 
HIY"$N聚起全身的内力化劲成焰，一招"HIW"‘烈阳普照’"HIY"全身上下发出巨大的光芒，刺
眼的光芒使$n无法张眼，$N身上发出强烈的温度使$n全身灼伤有如陷
入焚炉之中痛苦万分。"NOR,
        "dodge":        -10,
        "parry":        -50,
        "force":        300,
        "damage":       350,
        "post_action":               (:sun2:),
        "damage_type":  "灼伤",
        ]),
//3
  ([ "action":
HIY"$N左手运劲内走奇经八脉化气成焰，右手逆转内劲气走丹田化为霜，使出\n"
HBBLU+HIW"Ψ天山六阳掌Ψ"NOR+HIY"第三式"HIC"‘阳盛阴衰’"HIY"，强大的内劲催使$n左冷右热两极
交叉内息大乱受到严重的内伤狂吐鲜血。"NOR,
           "dodge":        -15,
           "parry":        -30,
           "force":        200,
           "damage":       400,
           "post_action":               (:sun3:),
           "damage_type":  "内伤",
      ]),
//4
  ([ "action": 
HIC"$N身法如鹰府冲而下一式"HIW"‘阳歌天勾’"HIC"以诡异的身法游走$n的四方，趁其不备双
手运勾朝$n的脑门扑击而去。"NOR,
          "dodge":        -60,
          "parry":        -65,
          "force":        100,
          "damage":       450,
          "post_action":          (:sun4:),
          "damage_type":  "瘀伤",
        ]),
//5
  ([ "action": 
HIM"$N使出"HBBLU+HIW"Ψ天三六阳掌Ψ"NOR+HIM"第五式"HIC"‘春阳白雪’"HIW"，$N身形飞舞全身散发寒劲成霜，当场雪
花漫天飞舞，$n完全看不见四周的情形，$N趁机发动攻势偷袭使其受创。"NOR,
           "dodge":        -80,
           "parry":        -80,
           "force":        300,
           "damage":       500,
           "post_action":      (:sun5:),
           "damage_type":  "瘀伤",
        ]),
//6
  ([ "action": 
HIR"$N聚劲双臂运劲成焰，凝聚强大的热量使出"HBBLU+HIW"Ψ天山六阳掌Ψ"NOR+HIR"第六式"HIY"‘骄阳似火’"HIR"，烈焰
掌劲侵入$n全身阵阵如火酷劲有如遭烈焰焚身。"NOR,
           "dodge":       -70,
           "parry":        -70,
           "force":        350,
           "damage":       600,
           "post_action":      (:sun6:),
           "damage_type":  "焚伤",
        ]),
});



int valid_enable(string usage)
{
                return ( usage=="unarmed" || usage=="parry" );   
}



void sun1(object me, object victim, object weapon, int damage)
{
         if(((me->query("combat_exp")+random(2000000)) > (victim->query("combat_exp")+random(2000000)))
         || random(50)>40)
         {
           message_vision(HIR"\n阳关三叠之"HBRED+HIM"【毁山劈天】\n"NOR, me, victim);
           victim->receive_damage("kee",500);
           COMBAT_D->report_status(victim);
           message_vision(HIR"\n阳关三叠之"HBBLU+HIC"【形合破灭】\n"NOR, me, victim);
           victim->receive_wound("kee",500);
           COMBAT_D->report_status(victim);
           message_vision(HIR"\n阳关三叠之"HBGRN+HIG"【虚空无极】\n"NOR, me, victim);
           if((victim->query("force_factor")-2)<0)
             victim->set("force_factor",0);
           else victim->add("force_factor",-2);
           COMBAT_D->report_status(victim);
         }else message_vision(HIW"$n顺势闪过了$N的攻击。\n"NOR, me, victim);          
        
}

void sun2(object me, object victim, object weapon, int damage)
{
	if(((me->query("move")+random(100)) > (victim->query("move")+random(100)))
         || random(50)>40)
        {
	  message_vision(HIR"\n$n一个不小心被$N的烈阳余劲所伤。\n"NOR, me, victim);
	  victim->receive_damage("kee",200);
	  victim->apply_condition("burn",random(10)+1);
	  COMBAT_D->report_status(victim);
	}
}


void sun3(object me, object victim, object  weapon, int damage)
{
       if(((me->query("force")+random(50000)) > (victim->query("force")+random(50000)))
         || random(50)>30)
       {
         message_vision(HIC"\n$n受不了忽冷忽热的煎熬受了严重的内伤。\n"NOR, me, victim);
         victim->receive_damage("kee",200);
         victim->apply_condition("star-stial",random(10)+1);
         COMBAT_D->report_status(victim);
       }
}

void sun4(object me, object victim, object weapon, int damage)
{
       if(((me->query("dodge")+random(100)) > (victim->query("dodge")+random(100)))
         || random(50)>45)
       {
         message_vision(HIY"\n$n闪躲不击惨招$N凌厉攻势所伤。\n"NOR, me, victim);
         victim->receive_wound("kee",500);
         victim->apply_condition("bleeding",random(10)+1);
         COMBAT_D->report_status(victim);
       }
}

void sun5(object me, object victim, object weapon, int damage)
{
       if(((me->query("parry")+random(100)) > (victim->query("parry")+random(100)))
         || random(50)>40)
       {
         message_vision(HIW"\n$N使出天山六阳掌之变招‘天山折梅手’，$n被此招牵制无法使力。\n"NOR, me, victim);
         victim->receive_damage("kee",200);
         victim->apply_condition("power-down",random(10)+1);
         COMBAT_D->report_status(victim);
       }
}

void sun6(object me, object victim, object weapon, int damage)
{
       if(((me->query("combat_exp")+random(2000000)) > (victim->query("combat_exp")+random(2000000)))
         || random(50)>45)
       {
         message_vision(HIG"\n$N骄阳似火一出，$n运劲丹田竟感觉空空荡荡毫无内劲。\n"NOR, me, victim);
         victim->apply_condition("no_power_e",random(10)+1);
         COMBAT_D->report_status(victim);
       }
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}


string perform_action_file(string action)
{
        return CLASS_D("tensan")+"/sunstrike/"+action;
}
