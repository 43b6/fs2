
#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void sp_attack1(object me, object victim, object  weapon, int damage);
void sp_attack2(object me, object victim, object  weapon, int damage);
void sp_attack3(object me, object victim, object  weapon, int damage);
void sp_attack4(object me, object victim, object  weapon, int damage);
void sp_attack5(object me, object victim, object  weapon, int damage);
void sp_attack6(object me, object victim, object  weapon, int damage);
void sp_attack7(object me, object victim, object  weapon, int damage);
void sp_attack8(object me, object victim, object  weapon, int damage);
void sp_attack9(object me, object victim, object  weapon, int damage);
void sp_attack10(object me, object victim, object  weapon, int damage);

int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int white=this_player()->query("/functions/white/level",1);
int nine=this_player()->query("/functions/nine/level",1);
int gen=this_player()->query("/functions/gen/level",1);
int ice=this_player()->query("/functions/ice/level",1);
int purple=this_player()->query("/functions/purple/level",1);
int black=this_player()->query("/functions/black/level",1);
int bluesea=this_player()->query("/functions/bluesea/level",1);
int goldsun=this_player()->query("/functions/goldsun/level",1);
int blood=this_player()->query("/functions/blood/level",1);
int green=this_player()->query("/functions/green/level",1);

int sp_value;

string *unarmed_parry_msg = ({
"\n$n暗运"HIG"玄宇宙心法"NOR"中之"HIG"‘化劫’"NOR"，只见$n身边浮现出绿色气罩将$N攻势档开！\n"NOR,
"\n$n暗运"HIW"白云烟心法"NOR"中之"HIC"‘云烟袅袅’"NOR"，只见$n周身笼罩无限云烟让$N无法捉摸\n",
"\n$n暗运"MAG"紫星河心法"NOR"中之"MAG"‘星河气旋’"NOR"，$N身形被一道紫色气流所牵引\n",
        });




mapping *action = ({
//1
        ([      
                "action"     :               HIW"$N将体内真气缓运周身，使出了浑天宝鉴第一式‘白云烟’，瞬时$N真气化做袅袅云烟笼罩住$n"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack1 :),
                "damage_type":               "内伤"
        ]),
//2
        ([     
                "action"     :               HIW"$N凝聚真气于双掌，使出浑天宝鉴第二式"HIM"‘玫荡霞’"HIW"，掌中真气化成一道霞光迅速的逼向$n"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack2 :),
                "damage_type":               "内伤"
        ]),
//3
        ([   
                "action"     :               HIW"$N将内劲化成一股柔劲暗运于地上，使出了浑天宝鉴第三式"HIY"‘土昆仑’"HIW"，暗劲猛然由地底爆发将$n笼罩其中 "NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack3 :),
                "damage_type":               "内伤"
        ]),
//4
        ([  
                "action"     :               HIW"$N凝聚体内阴寒内劲，使出了浑天宝鉴第四式"HIC"‘碧雪冰’"HIW"，周遭水气化成数道寒冰如刃向$n疾射而去"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack4 :),
                "damage_type":               "创伤"
        ]),
//5
        ([ 
                "action"     :               HIW"$N双掌朝天暗运浑天心法，使出了浑天宝鉴第五式"MAG"‘紫星河’"HIW"，只见天上落下紫色星辰缠绕在$n周遭"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack5 :),
                "damage_type":               "内伤"
        ]),
//6
        ([
                "action"     :               HIW"$N体内的真气有如盘古开天地一般，真气乱窜，使出浑天宝鉴第六式"WHT"‘玄混沌’"HIW"，瞬时$n周遭只见一片黑暗，无法掌握$N之攻势"NOR,
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack6 :),
                "damage_type":               "内伤"
        ]),
//7
         ([     "action"     :               HIW"$N周遭澎湃的气劲如海啸般翻腾，使出浑天宝鉴第七式"HIB"‘靛沧海’"HIW"，气劲如浪般一波一波的袭向$n"NOR,
                "parry"      :                -100,
                "dodge"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack7 :),
                "damage_type":                "内伤",
           ]),
//8
         ([     "action"     :               HIW"$N突然金光闪闪，光华夺目，金色的真气在身旁旋绕，使出浑天宝鉴第八式"HIY"‘金晨曦’"HIW"，$n瞬时被光华所惑，一时不知所措"NOR,
                "parry"      :                -100,
                "dodge"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack8 :),
                "damage_type":                "内伤",
           ]),
//9
         ([     "action"     :               HIW"$N$N凝聚穹苍血劲，周遭化成一片血红，使出浑天宝鉴第九式"HIR"‘血穹苍’"HIW"，$n自觉仿佛陷入了修罗地狱般呆立着"NOR,
                "parry"      :                -100,
                "dodge"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack9 :),
                "damage_type":                "内伤",
           ]),
//10
         ([     "action"     :               HIW"$N暗运浑天心法，使出浑天宝鉴最终式"HIG"‘玄宇宙’"HIW"，瞬时天空昏暗，万星繁动，全身各条经脉均充满了星晨所付予的气劲，将气劲化成一道无形气团朝$n袭去"NOR,
                "parry"      :                -100,
                "dodge"      :                -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack10 :),
                "damage_type":                "内伤",
           ]),
});

int valid_learn(object me)
{
       if(!me->query("quest/super-unarmed",1)){
        tell_object(me,"你还不够资格练浑天宝鉴。\n");
        return 0;
                                               }

        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") ) {
        tell_object(me,"练浑天宝鉴必须要空手唷。\n");
        return 0;
                                               }
        if(me->query_skill("superforce",1)<200) {
                write("你的浑天心法等级不够，不能练浑天宝鉴。\n");
                return 0;
        }
	   
	   if( me->query("class") != "prayer"){
       tell_object(me,"你不是圣火徒。\n");
       return 0;                              }
       
	   if( (me->query("potential") - me->query("learned_points")) < 15 ) {
        tell_object(me, "你的潜能不到十五点，无法练浑天宝鉴。\n");
        return 0;
                                                                         }
        me->add("potential", -15);
        return 1;
}

int valid_enable(string usage)
{
        return ( usage=="unarmed" || usage=="parry" );
}


mapping query_action(object me, object *weapon)
{

 int skill_level,limit,i;

 skill_level = (int)(me->query_skill("super-unarmed",1));
 limit= skill_level;
if(me->query("family/family_name")!="圣火教")
return action[1];
        if (limit < 10)
                return action[random(1)];
        else if (limit < 20)
                return action[random(2)];
        else if (limit < 30)
                return action[random(3)];
        else if (limit < 40)
                return action[random(4)];
        else if (limit < 50)
                return action[random(5)];
		else if (limit < 60)
                return action[random(6)];
		else if (limit < 70)
                return action[random(7)];
		else if (limit < 80)
                return action[random(8)];
        else if (limit < 90)
                return action[random(9)];
        else       
          return action[random(10)]; 
}




string perform_action_file(string action)
{
          return CLASS_D("prayer")+"/super-unarmed/"+action;
}   
        
void sp_attack1(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIW"瞬间只见袅袅云烟笼罩着$n，$n突然动弹不得\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIC"
天晶配合着浑天心法中的"HIW"‘白云烟’"HIC"，水晶仿佛与心法互相应和
$N周遭袅袅云烟瞬时已笼罩在方圆十里，$n自觉自己身处在一片云海之中
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(sp_value/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(sp_value/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack2(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =(nine+spi);   
    message_vision(HIM"$n只见一片霞光朝自己迎面而来\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIC"
天晶配合着浑天心法中的"HIM"‘玫荡霞’"HIC"，水晶仿佛与心法互相应和
一道道霞光从天晶向$n狂袭而去，只见$n心神不宁
\n"NOR,me,victim);
    victim->receive_wound("kee",nine*10,me);
    victim->add("gin",-(sp_value*5));
    victim->add("sen",-(sp_value*5));
	COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",nine*5,me);
    victim->add("gin",-(sp_value*2));
    victim->add("sen",-(sp_value*2));
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack3(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"瞬间只见袅袅云烟笼罩着$n，$n突然动弹不得\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
天晶配合着浑天心法中的‘白云烟’，水晶仿佛与心法互相应和
$N周遭袅袅云烟瞬时已笼罩在方圆十里，$n自觉自己身处在一片云海之中
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack4(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"瞬间只见袅袅云烟笼罩着$n，$n突然动弹不得\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
天晶配合着浑天心法中的‘白云烟’，水晶仿佛与心法互相应和
$N周遭袅袅云烟瞬时已笼罩在方圆十里，$n自觉自己身处在一片云海之中
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack5(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"瞬间只见袅袅云烟笼罩着$n，$n突然动弹不得\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
天晶配合着浑天心法中的‘白云烟’，水晶仿佛与心法互相应和
$N周遭袅袅云烟瞬时已笼罩在方圆十里，$n自觉自己身处在一片云海之中
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack6(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"瞬间只见袅袅云烟笼罩着$n，$n突然动弹不得\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
天晶配合着浑天心法中的‘白云烟’，水晶仿佛与心法互相应和
$N周遭袅袅云烟瞬时已笼罩在方圆十里，$n自觉自己身处在一片云海之中
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack7(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"瞬间只见袅袅云烟笼罩着$n，$n突然动弹不得\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
天晶配合着浑天心法中的‘白云烟’，水晶仿佛与心法互相应和
$N周遭袅袅云烟瞬时已笼罩在方圆十里，$n自觉自己身处在一片云海之中
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack8(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"瞬间只见袅袅云烟笼罩着$n，$n突然动弹不得\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
天晶配合着浑天心法中的‘白云烟’，水晶仿佛与心法互相应和
$N周遭袅袅云烟瞬时已笼罩在方圆十里，$n自觉自己身处在一片云海之中
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack9(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"瞬间只见袅袅云烟笼罩着$n，$n突然动弹不得\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
天晶配合着浑天心法中的‘白云烟’，水晶仿佛与心法互相应和
$N周遭袅袅云烟瞬时已笼罩在方圆十里，$n自觉自己身处在一片云海之中
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
        
void sp_attack10(object me, object victim, object  weapon, int damage)
{
    int i;
  sp_value =((ice/50)+(spi/5));   
    message_vision(HIY"瞬间只见袅袅云烟笼罩着$n，$n突然动弹不得\n"NOR,me,victim);
   if( weapon->query("id")=="green-crystal"){
    message_vision(HIY"
天晶配合着浑天心法中的‘白云烟’，水晶仿佛与心法互相应和
$N周遭袅袅云烟瞬时已笼罩在方圆十里，$n自觉自己身处在一片云海之中
\n"NOR,me,victim);
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/2);
    COMBAT_D->report_status(victim);
                                             }
   else{
    victim->receive_wound("kee",ice*5,me);
    victim->start_busy(ice/4);
    COMBAT_D->report_status(victim);
       }
}
