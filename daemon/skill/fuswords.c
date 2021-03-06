// fusword.c

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void berserk(object me, object victim, object  weapon, int damage);

string *parry_msg=
    ({
      "$n使出神龙绝学中的神龙剑法，将$N的武器荡了出去。\n",
      "$n手中长剑飞舞，‘当’的一声，将$N的攻势尽数档了下来。\n",
      "$n手腕翻转，一剑平平击出，巧妙的化解了$N的招式。\n",
      "$n一剑击向$N的要穴，逼的$N回身挡剑，正是防御之最高境界\n",
    });
string *array_msg=
    ({
      "[1;33m$N带领着众剑士，脚踩八卦，剑化两仪，将神龙剑法发挥到极致。\n[0m",
      "[1;33m众人愈战愈顺，愈战愈勇，令敌人望之胆怯。\n[0m",
      "[1;33m$N指挥若定，众人剑招一招招递向敌人，配合的天衣无缝。\n[0m",
     }); 
mapping *action = ({
        ([      
                "action"     :               "$N突然领悟了‘剑随心发’的道理，弓身屈腿向前弹出，正是一招‘乳燕穿林’。",
                "dodge"      :               -25,
                "parry"      :                20,
                "damage"     :                250,
                "damage_type":               "刺伤"
        ]),
        ([     
                "action"     :               "$N握剑之手一紧，奋力向前刺出，一招‘雷霆万钧’攻向$n。",
                "dodge"      :               -30,
                "parry"      :                25,
                "damage"     :                300,
                "damage_type":               "刺伤"
        ]),
        ([   
                "action"     :               "$N气如九珠行遍周身大穴，力贯剑尖，仆布横扫，正是一招‘风起云涌’",
                "dodge"      :                -30,
                "parry"      :                30,
                "damage"     :                400,
                "damage_type":               "刺伤"
        ]),
        ([  
                "action"     :               "$N手中之剑，幻化起无数剑圈，霍霍剑光将$n包围其中，正是一招‘运转乾坤’",
                "dodge"      :               -30,
                "parry"      :                30,
                "damage"     :                500,
                "damage_type":               "刺伤"
        ]),
        ([ 
                "action"     :               "$N凝气于剑，手中之剑忽然向前飞去，正是一招‘长虹贯日’，去势之疾使$n不及招架",
                "dodge"      :               -30,
                "parry"      :                20,
                "damage"     :                650,
                "force"      :                130,
                "damage_type":               "割伤"
        ]),
        ([
                "action"     :               "$N忽然跃起丈余，由半空中向$n疾攻而至正是一招‘飞龙在天’",
                "dodge"      :               -20,
                "parry"      :                35,
                "damage"     :                850,
                "force"      :                100,
                "damage_type":               "刺伤"
        ]),
         ([     "action"     :               "$N了悟了剑法上‘连绵不绝’之真义，手中佩剑一荡连使出‘乳燕穿林’‘雷霆万钧’‘风起云涌’，分攻$n周身大穴",
                "dodge"      :                -35,
                "parry"      :                30,
                "damage"     :                1000,
                "force"      :                100,
                "post_action":                (: berserk :),
                "damage_type":                "割伤",
           ]),
          ([    "action"     :               "$N领悟了‘以气御剑’之真义，运气于指控制空中之剑攻向$n。正是传说中的‘御剑术’",
                "dodge"      :                -40,
                "parry"      :                40,
                "damage"     :                1100,
                "force"      :                110,
                "post_action":                (: berserk :),
                "damage_type":                "割伤",
            ]),
            ([  "action"     :                "$N领悟了所谓‘以静制动’，立即心如明镜，看出$n的破绽，一连使出‘乳燕穿林’‘雷霆万钧’‘风起云涌’‘运转乾坤’‘长虹贯日’剑气形成漩涡将$n包围其中",
                "dodge"      :                -30,
                "parry"      :                45,
                "damage"     :                1500,
                "force"      :                120,
                "post_action":                (: berserk :),
                "damage_type":                "割伤",
             ]),
             ([ "action"     :                "$N已得剑法精要，一眼看对穿$n之招式，随手一剑便破解他的招式并将其重创，正是剑法之极至‘无招胜有招’",
                "dodge"      :                -40,
                "parry"      :                45,
                "damage"     :                1700,
                "force"      :                120,
                "post_action":                (: berserk :),
                "damage_type":                "割伤",
             ]),
            ([  "action"     :                "$N面露微笑，仰视苍天，待$n攻势已近，只见空中剑花闪闪，$N从容的收剑回窍，$n却已受到身受重伤",
                "dodge"      :                -45,
                "parry"      :                50,
                "damage"     :                2000,
                "force"      :                130,
                "post_action":               (: berserk :),
                "damage_type":                "割伤",
             ]),            
             
   });
int valid_learn(object me)
{
       if( !me->query_temp("weapon") )
        return   notify_fail("练神龙剑术必需先拿把剑。\n");
        return   1;
}

int valid_enable(string usage)
{
        return ( usage=="sword" || usage=="parry" );
}

string query_parry_msg(string limb)
{
  int parry_pow;
  object me;
  me=this_player();
        parry_pow = (int)( me->query_skill("fuswords", 1)/10);
          if ( parry_pow <= 5)
                return parry_msg[random(2)];
            else

                return parry_msg[random(sizeof(parry_msg))];
}

mapping query_action(object me, object weapon)
{
       int skill_level, limit,i;
	   object victim,*enemy;
		enemy = me->query_enemy();
		i=sizeof(enemy);
        victim = enemy[random(i)];
        skill_level = (int)(me->query_skill("fuswords", 1));
        limit= (int)(skill_level/8);
        if( me->query_temp("use_form",1))
          message_vision( array_msg[random(sizeof(array_msg))],me );
if(me->query_temp("weapon"))
{
 weapon=me->query_temp("weapon");  //扣自己force 200
if((me->query("class")=="dancer")&&(weapon->query("id")=="dragon sword"))
  {
if(me->query("id")==("cgy"))
{
message_vision(HIC"$N使出神龙剑法终极奥义,只见一条火龙朝着$n直扑而去\n"NOR,me,victim);
message_vision(HIR"                                        &.  &.     .\n"NOR,me,victim);
message_vision(HIR"                                        ~ss.&ss. .s'\n"NOR,me,victim);
message_vision(HIR"                                .     .ss&&&&&&&&&&s.\n"NOR,me,victim);
message_vision(HIR"                                &. s&&&&&&&&&&&&&&`&&Ss\n"NOR,me,victim);
message_vision(HIR"                                ~&&&&&&&&&&&&&&&&&&o&&&       .\n"NOR,me,victim);
message_vision(HIR"                               s&&&&&&&&&&&&&&&&&&&&&&&&s.  .s\n"NOR,me,victim);
message_vision(HIR"                              s&&&&&&&&&~&&&&&&~~~~&&&&&&~&&&&&.\n"NOR,me,victim);
message_vision(HIR"                              s&&&&&&&&&&s~~&&&&ssssss~&&&&&&&&~\n"NOR,me,victim);
message_vision(HIR"                             s&&&&&&&&&&'         `~~~ss~&~&s~~\n"NOR,me,victim);
message_vision(HIR"                             s&&&&&&&&&&.              `~~~~~&  .s&&s\n"NOR,me,victim);
message_vision(HIR"                             s&&&&&&&&&&&&s....               `s&&'  `\n"NOR,me,victim);
message_vision(HIR"                         `ssss&&&&&&&&&&&&&&&&&&&&####s.     .&&~&.   . s-\n"NOR,me,victim);
message_vision(HIR"                           `~~~~&&&&&&&&&&&&&&&&&&&&#####&&&&&&~     &.&'\n"NOR,me,victim);
message_vision(HIR"                                 ~&&&&&&&&&&&&&&&&&&&&&####s~~     .&&&|\n"NOR,me,victim);
message_vision(HIR"                                  ~&&&&&&&&&&&&&&&&&&&&&&&&##s    .&&~ &\n"NOR,me,victim);
message_vision(HIR"                                   &&~~&&&&&&&&&&&&&&&&&&&&&&&&&&&&&~   `\n"NOR,me,victim);
message_vision(HIR"                                  &&~  ~&~&&&&&&&&&&&&&&&&&&&&S~~~~'\n"NOR,me,victim);
message_vision(HIR"                             .   .~     '  &&&&&&&&&&&&&&&&####s\n"NOR,me,victim);
message_vision(HIR"                             &.          .s&&&&&&&&&&&&&&&&&####~\n"NOR,me,victim);
message_vision(HIR"                 .           ~&s.   ..ssS&&&&&&&&&&&&&&&&&&&####~\n"NOR,me,victim);
message_vision(HIR"                 &           .&&&S&&&&&&&&&&&&&&&&&&&&&&&&#####~\n"NOR,me,victim);
message_vision(HIR"                 Ss     ..sS&&&&&&&&&&&&&&&&&&&&&&&&&&&######~~\n"NOR,me,victim);
message_vision(HIR"                  ~&&sS&&&&&&&&&&&&&&&&&&&&&&&&&&&########~\n"NOR,me,victim);
message_vision(HIR"           .      s&&&&&&&&&&&&&&&&&&&&&&&&#########~~'\n"NOR,me,victim);
message_vision(HIR"           &    s&&&&&&&&&&&&&&&&&&&&&#######~~'      s'         .\n"NOR,me,victim);
message_vision(HIR"           &&..&&&&&&&&&&&&&&&&&&######~'       .....&&....    .&\n"NOR,me,victim);
message_vision(HIR"            ~&&&&&&&&&&&&&&&######~' .     .sS&&&&&&&&&&&&&&&&s&&\n"NOR,me,victim);
message_vision(HIR"              &&&&&&&&&&&&#####~     &. .s&&&&&&&&&&&&&&&&&&&&&&&&s.\n"NOR,me,victim);
message_vision(HIR"   )          &&&&&&&&&&&#####'      `&&&&&&&&&###########&&&&&&&&&&&.\n"NOR,me,victim);
message_vision(HIR"  ((          &&&&&&&&&&&#####       &&&&&&&&###~       ~####&&&&&&&&&&\n"NOR,me,victim);
message_vision(HIR"  )\\         &&&&&&&&&&&&####.     &&&&&&###~             ~###&&&&&&&&&   s'\n"NOR,me,victim);
message_vision(HIR" (   )        &&&&&&&&&&&&&####.   &&&&&###~                ####&&&&&&&&s&&'\n"NOR,me,victim);
message_vision(HIR" )  ( (       &&~&&&&&&&&&&&#####.&&&&&###'                .###&&&&&&&&&&~\n"NOR,me,victim);
message_vision(HIR" (  )  )   _.&~   &&&&&&&&&&&&######.&&##'                .###&&&&&&&&&&\n"NOR,me,victim);
message_vision(HIR" ) (  ( \\.         ~&&&&&&&&&&&&&#######....          ..####&&&&&&&&&&&~\n"NOR,me,victim);
message_vision(HIR"(   )& )  )        .&&&&&&&&&&&&&&&&&&####################&&&&&&&&&&&~\n"NOR,me,victim);
 message_vision(HIR"(   (&&  ( \\     _sS~  `~&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&S&&.\n"NOR,me,victim);
message_vision(HIR" )  )&&&s ) )  .      .   `&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&~'  `&&\n"NOR,me,victim);
message_vision(HIR"  (   &&&Ss/  .&.    .&..s&&&&&&##S&&&&&&&&&&&&&&&&&&&&&&&&S~~        '\n"NOR,me,victim);
message_vision(HIR"    \\)_&&&&&&&&&&&&&&&&&&&&&&&##~  &&        `&&.        `&&.\n"NOR,me,victim);
message_vision(HIR"        `~S&&&&&&&&&&&&&&&&&#~      &          `&          `&\n"NOR,me,victim);
message_vision(HIR"            `~~~~~~~~~~~~~'         '           '           '\n\n\n"NOR,me,victim);

 
message_vision(HIR"$n被火龙所吞噬,瞬时全身是火痛苦不己。\n"NOR,me,victim);
victim->add("kee",-100000);
victim->apply_condition("burn",random(10));
COMBAT_D->report_status(victim, 1);
  

me->add("force",-200);
}
}
}
        if (limit < 1 )
                return action[random(1)];
        if (limit < 2 )
                return action[random(2)];
        if (limit < 3)
                return action[random(3)];
        if (limit < 4)
                return action[random(4)];
        if (limit <5 )
                return action[random(4)+1];
        if (limit <6 )
                return action[random(4)+2];
        if (limit <7)                        
                return action[random(4)+3];
        if (limit <8)
                return action[random(4)+4];
        if (limit <9)
                return action[random(4)+5];
        if (limit <10)
                return action[random(4)+6];
        else
                return action[random(4)+6];
}

void berserk(object me, object victim, object  weapon, int damage)
{ 
     if( (int)me->query_skill("fuswords",1) > random(60)+35 && me->query("force_factor")>= random(5) && me->query("force")>30)
        { 
         if(!me->query_temp("berserk" ))
          {
             if(me->query("name")=="傅剑寒")
             {
              message_vision( sprintf("[1;33m只见$N剑招一缓，万点剑光倏然消失，化为一道剑虹向着$n的胸前狂奔而去，正是一招‘万流归宗’对$n造成了莫大的伤害。\n [0m"), me ,victim);
              victim->add("kee",-120);
              me->add("force",-10);
              }
                me->set_temp("berserk", 1);
            }
             me->delete_temp("berserk");
          }
      
} 


int practice_skill(object me)
{
        if( (int)me->query("kee") < 40 )
                return notify_fail("你的体力不够了，休息一下再练吧。\n");
        if( (int)me->query("force") < 5 )
                return notify_fail("你的内力不够了，休息一下再练吧。\n");
        me->receive_damage("kee", 40);
        me->add("force", -5);
        return 1;
}
