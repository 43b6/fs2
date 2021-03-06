//惊天十式
// by dhk 2000.5.5
#include <combat.h>
#include <ansi.h>
inherit SSERVER;
inherit SKILL;
void hurt(object me, object victim, object weapon, int damage);
void block(object me, object victim, object weapon, int damage);
void conti(object me, object victim, object weapon, int damage);
void sp1(object me, object victim, object weapon, int damage);
void sp2(object me, object victim, object weapon, int damage);
void sp3(object me, object victim, object weapon, int damage);
void kee(object me, object victim, object weapon, int damage);

mapping *action = ({

//天地双卦....(1)
([ "action":
         "$N双足一跨，体内真气流转，立即摆\出"BLINK+HIW"‘惊天十式’"NOR"中的"HIY"‘天地双卦’"NOR"，其招式中蕴含天地万化的神奇卦象\n"
      NOR"，霸道的向$n$l直逼而去，颇有石破天惊、飞沙走石之势。 \n"
      NOR"                                                                     \n"
BLINK+HIY"                                          ‘  天  地  双  卦  ’"NOR"\n"
      NOR"                                                                     ",
        "dodge": 50,
        "parry": 50,
        "damage": 2000,
        "force":  5000,
        "damage_type":  "震伤",
        "weapon": "左足右掌",
        "post_action": (: hurt :),
]),

//穿山指....(2-1)
([ "action":
         "$N劲透指尖，使出一招"BLINK+HIW"‘惊天十式’"NOR"中的绝招"HIR"‘穿山指’"NOR"，一道雄浑指气直进$n$l，其破空之势中夹带孅\n"
      NOR"柔飘朔之劲，威力足以震破名山巨岳。\n"
      NOR"                                                                   \n"
BLINK+HIR"                                            ‘  穿  山  破  ’"NOR"\n"
      NOR"                                                                   ",
        "dodge": 200,
        "parry": 200,
        "damage": 600,
        "force":  1000,
        "damage_type":  "刺伤",
        "weapon": "互镶中指",
]),

//倒行沌波....(3)
([ "action":
NOR"$N缓缓运气上肩，双手高举、双眼望天，不一会$N深深的吸一口气，然四周忽然\n"
NOR"旋起强烈的气涡。正是"BLINK+HIW"‘惊天十式’"NOR"中的绝招"HIM"‘倒行沌波’"NOR"，行招之时四周大气逆行\n\n"

BLINK+HIM"                         ‘  倒  行  沌  波  ’"NOR"\n\n"

HIM"$n被倒行沌波强劲的气压影响下，身受真气逆行的痛苦"NOR"。\n",
        "dodge": 70,
        "parry": 70,
        "damage": 840,
        "force": 7000,
        "damage_type": "滞伤",
        "weapon": "掌气",
        "post_action": (: hurt :),
]),

//吸星诀....(4)
([ "action":
NOR"$N身形斗转并深深的吐出一口真气、抬头仰天大喝一声\n"
NOR"，一招"HIG"‘"HIY" 吸"HIC" 星"HIM" 诀"HIG" ’"NOR"使周围时空幻化出无数$N的身影，顿时日月失色独天星闪耀。\n"
NOR"待一切回归平静之时，只见$N身泛金色光芒，内息充盈、不吐不快。\n",
        "dodge": 100,
        "parry": 100,
        "damage": 100,
        "force": 2000,
        "damage_type": "迫伤",
        "weapon": "星光魄气",
        "post_action": (: kee :),
]),

//日月并行....(5-1)
([ "action":
"$N双目缓闭气运双眼，忽然睁开左眼使出"HIB"‘日月并行’"NOR"中的"HIM"‘昊日剧升’"NOR"，一道光彩夺目的红光脱眼而出\n"
"、电光走石般霸道地朝向$n$l而去。\n",
        "dodge": 60,
        "parry": 60,
        "damage": 1500,
        "force": 1000,
        "damage_type": "创伤",
        "weapon": "左眼真气",
        "post_action": (: hurt :),
]),

//急吹风....(6)
([ "action":
   "$N凝气定神，突然随手一晃，便即使出"BLINK+HIW"‘惊天十式’"NOR"中的"BLU"‘急吹风’"NOR"，莫名的产生一股强劲无匹的狂风，风转急速。"NOR"\n",
        "dodge": 20,
        "parry": 20,
        "damage": 100,
        "force": 1000,
        "damage_type": "镇伤",
        "weapon": "强大气压",
        "post_action": (: block :),
]),

//日月并行....(5-2)
([ "action":
"$N双目缓闭气运双眼，忽然睁开右眼使出"HIB"‘日月并行’"NOR"中的"HIC"‘玉兔奔天’"NOR"，一道光彩夺目的白光脱眼而出\n"
"、以凤舞九天之势地朝向$n$l而去。\n",
        "dodge": 60,
        "parry": 60,
        "damage": 1500,
        "force": 1000,
        "damage_type": "创伤",
        "weapon": "右眼真气",
        "post_action": (: hurt :),
]),

//强力-穿山指....(2-2)
([ "action":
HIR"$N心如止水，不动如山，内力急剧上升。忽然$N以迅雷之速，快速欺向$n"HIR"而\n"
HIR"去。此时$N"HIR"已经在右手中指凝聚强大满盈的真气、力量，当来到$n"HIR"身旁之时"NOR"\n"
HIY"使出"BLINK+HIW"‘惊天十式’"NOR+HIY"中的绝招\n"
NOR"\n"
BLINK+HIC"                               ‘  "HIR"穿  山  指 "HIC" ’"NOR"\n"
NOR"\n"
HIG"劲力一吐，有如山崩地裂、破山、穿山之势直刺$n而来。\n"
HIR"$n被穿山指击中，内腑受创甚深，已气如游丝"NOR"。\n",
        "dodge": 10,
        "parry": 10,
        "damage": 4000,
        "force": 2400,
        "damage_type": "刺伤",
        "weapon": "互镶中指",
]),

//怒式天芒刺....(7)
([ "action":
HIW"$N杀念一动，脸色骤变。右手一出立即摆\出"BLINK+HIW"‘惊天十式’"NOR"中的"HIC"‘怒式天芒刺’"NOR"的起手式。只见$N怒气上升，右手渐渐凝出青颜色剑芒，霎时光芒亮如白昼。\n"
"$n的眼睛被光芒所伤，闪避不及，身体已被天芒刺剑气所重创。\n",
        "dodge": 10,
        "parry": 10,
        "damage": 1400,
        "force": 1000,
        "damage_type": "刺伤",
        "weapon": "无形剑气",
        "post_action": (: conti :),
]),

//奥义(一)....(8)
([ "action":
HIY"\n$N眼中精光大盛，大喝:\n\n"
HIW"             ‘\n"
HIY"                  天皇"HIW"天式"HIC"～"HIM"覆天"HIR"三阳"NOR"\n"
"                                       ’\n"
"$N突然急运‘"HIY"御天皇气"NOR"’，气劲满盈，一个箭步，向$n纵身飞去\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 7000,
        "force": 7000,
        "damage_type": "创伤",
        "post_action": (: sp1 :),
]),

//奥义(二)....(9)
([ "action":
HIW"只见$N真气一提，霎那天际发生奇妙的变化，顿时漫天寒雪，气温剧降。\n\n"
HIY"\n$N大喝一声:\n\n"NOR
   "
                      "GRN"‘      "HIC"急冻"HIM"梅花"HIY"～"NOR+WHT"雪里不凋"NOR"      "GRN" ’"NOR"\n\n"
HIW"$N双掌凝聚深厚的寒劲，奋力推出掌劲所到之处，一触即冻。一道强力梅花形冰柱真气直扑$n而去。\n\n"NOR
"                         ～ "HIW" 漫天"HIW" 寒雪"HIC"．"HIM"梅花"HIW" 不"RED"凋 "HIW" ～\n\n
                                          ▁▂▃
                                      ／￣￣▌￣╲
                                     │     ▏  ▕
                                  ▃ ｜         ▕
       "HIC"｜"NOR"                       ／▋╲╲        ／／￣╲
       "HIC"｜"NOR"                     ／  ▍  ﹀        ﹀      ╲
     "HIC"－"HIY"⊙"HIC"－"NOR"                  ｜   ▏       "HIY"。"NOR"            ｜
       "HIC"｜"NOR"                    ｜          "HIM"╲｜／"NOR"           ▌
       "HIC"｜"NOR"                     ╲       "HIY"。"HIM"─"HIC"●"HIM"─"HIY"。"NOR"       ／▎
                                ￣＞     "HIM"／｜╲"NOR"     ＜￣  ▏
          ◣                  ▁／         "HIY"。"NOR"         ╲
        ▕ ｜ ▃▄▂        ／￣︳                     ｜        "HIC"｜"NOR"
        ／  ￣￣￣￣╲▃▂╱╱￣╲        ╱╲        ╱         "HIC"｜"NOR"
      ／╱￣▉◤￣￣╲￣￣  ╲    ╲▂＿╱    ╲＿＿╱         "HIC"－"HIY"⊙"HIC"－"NOR"
    ╱╱    ▌        ￣￣￣╲▍    ▍            ▉             "HIC"｜"NOR"
            ▏                ▎    ▏             ▍            "HIC"｜"NOR"
                              ▏                   ▏



"HIC"$n受到这一掌掌气所伤，体温骤降、真气凝滞，受伤沉重。\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 6600,
        "force": 5600,
        "damage_type": "冻伤",
        "post_action": (: sp2 :),

]),

//奥义(三)....(10)
([ "action":
HIY"\n$N收身回步长吟道:\n\n"NOR
   "                   "YEL"‘ "HIC"右开天 "NOR+GRN"左辟地 "HIB"开天辟地"HIR"一贯长虹"NOR" "YEL"’"NOR"\n\n"
HIC"只见$N首先向天际与大地各击出一掌，将身上剩余的真气宣泄而出，身于空荡之状态。"NOR"\n"
GRN"然后紧接着又见$N双足运劲，紧紧的吸在地面上。双手平摆\纳天地之气于一身。随后双\n"
HIB"脚如神箭离弦，脱足长跃。于高空之中大喝：                                \n\n"
NOR"                           ～"HIM" 一"HIY" 贯"HIC" 天"HIG" 长"HIR" 虹"HIW" ～\n\n"NOR""
HIR"双掌相合直劈而下，凡划破的空间泛出七彩般的光华，势如落雷"NOR"。\n",
        "dodge": 80,
        "parry": 50,
        "damage": 8500,
        "force": 8500,
        "damage_type": "刺伤",
        "post_action": (: sp3 :),
]),
});

void hurt(object me, object victim, object weapon, int damage)
{
        int force;
        if( me->query("force_factor") > 10 )
        if( random(500) < me->query_skill("force")+me->query_skill("surprise-ten",1))
        {
          force = me->query_skill("sunforce");
          victim->receive_damage("kee", 7*me->query("force_factor")+2*force );
          message_vision(sprintf(""HIB"$N使出惊天十式中磅礴的气劲镇摄"HIB"$n的四周，"HIB"$n被此强大的气势所引动，看来已受到深重的内伤。\n"NOR),me,victim);
          if(damage <=0 )
          COMBAT_D->report_status(victim);
          me->add("force",-force);
        }
}
void block(object me, object victim, object weapon, int damage)
{
        int force;
        if(damage > 700)
        {
          force = (int)(me->query_skill("sunforce"));
          force = random(force/3);
          victim->apply_condition("blockade",
          random( me->query_skill("sunforce")+me->query_skill("surprise-ten") )/20 );

          message_vision(sprintf(""HIY"$n受到惊天十式之"HIB"急吹风"HIY"的狂袭$n"HIY"身不由己的随风四摆\，动弹不得。\n"NOR),me,victim);
          victim->start_busy(6);
          COMBAT_D->report_status(victim);
        }
}
void conti(object me, object victim, object weapon, int damage)
{
        int i,time = random(3);
        if( me->query("force_factor") >= 10 )//&& me->query("family/family_name") == "段家")
        {
          if( me->query_temp("conti") == 0 )
          {
            me->set_temp("conti",1);
      message_vision(sprintf("\n[1;36m$N忽然顿悟惊天十式[1;5;33m气冲百汇[0m、[1;5;33m剑落天池[0m[1;36m的要诀，剑气自然而然的随剑而出，密如落雨!![0m\n"),me);
              for(i=0;i<=time;i++)
              COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
            me->delete_temp("conti");
          }
        }
}

//吸星诀--大量回复气与内力
void kee(object me, object victim, object weapon, int damage)
{
        int force;
        if( me->query("force_factor") > 10 )
        {
          message_vision(sprintf(""HIY"$N身泛金色光芒，身上的伤痕渐渐消失，内息充盈、不吐不快"NOR"。\n"),me);
          me->add("kee",2000);
          me->add("force",4000);
          me->start_busy(1);
        }
}

void sp1(object me, object victim, object weapon, int damage)
{
int i,vic_kee;
vic_kee = victim->query("kee")/500; //kee为比例计算
if(me->query("force") > 2000 && me->query("force_factor"))
{
  for(i=1;i<=9;i++)
  {
    switch(i)
    {
     case 1:
message_vision(sprintf("$N会意了"HIW"‘天皇天式’中"HIR"‘旭日东升，覆天极阳’"NOR"的真意，向$n当头斩下!\n"),me,victim);
     break;
     case 2:
message_vision(sprintf("\n$N会意了"HIW"‘天皇天式’中"HIG"‘双日煜林，震天极阳’"NOR"的真意，对$n四肢砍落!\n"),me,victim);
     break;
     case 3:
message_vision(sprintf("\n$N会意了"HIW"‘天皇天式’中"HIC"‘三日破星，破天极阳’"NOR"的真意，往$n胸前疾刺!\n"),me,victim);
     break;
     case 4:
message_vision(sprintf("\n$N会意了"HIW"‘天皇天式’中"HIM"‘四阳转命，覆天元阳’"NOR"的真意，鹜然命行四转砍向$n!\n"),me,victim);
     break;
     case 5:
message_vision(sprintf("\n$N会意了"HIW"‘天皇天式’中"HIY"‘乾坤五阳，震天元阳’"NOR"的真意，乾坤刀影包围住$n!\n"),me,victim);
     break;
     case 6:
message_vision(sprintf("\n$N会意了"HIW"‘天皇天式’中"NOR""WHT"‘阳六合明，破天元阳’"NOR"的真意，六道刀劲疾射向$n!\n"),me,victim);
     break;
     case 7:
message_vision(sprintf("\n$N会意了"HIW"‘天皇天式’中"NOR""BLU"‘七炩拱日，覆天真阳’"NOR"的真意，横刀狂舞运化七烬攻向$n!\n"),me,victim);
     break;
     case 8:
message_vision(sprintf("\n$N会意了"HIW"‘天皇天式’中"NOR""CYN"‘阳格八鸣，震天真阳’"NOR"的真意，刀影朝八方点落包围住$n!\n"),me,victim);
     break;
     case 9:
message_vision(sprintf("\n$N会意了"HIW"‘天皇天式’中"NOR""MAG"‘九九玄阳，破天真阳’"NOR"的真意，刀气疾走九宫集中射向$n!\n"),me,victim);
     break;
     }
if(me->query_skill("sunforce")+me->query_skill("surprise-ten") > random(180))
     {
message_vision(sprintf(HIR"$N确实命中$n要害，$n顿时血流满地。\n"NOR),me,victim);
          victim->receive_wound("kee",vic_kee);
          victim->apply_condition("burn",random(45)+((int)me->query_skill("sunforce", 1)/10));//灼伤
          COMBAT_D->report_status(victim);
          me->add("force",-1000);
      }
       else
      {
message_vision(sprintf("结果$n迅速地避开这招。\n"),me,victim);
      }
   }
  }
}
void sp2(object me, object victim, object weapon, int damage)
{
        int ten, force;
        ten = me->query_skill("surprise-ten");
        force = me->query_skill("sunforce");
        if( random( force ) > random( ten ) )
        {
          message_vision(sprintf(""HIC"$N轻摆\衣袖，真气混元归一，婆娑潇洒的身法、冰冷的拳劲与$n"HIC"交错而过!!!\n"NOR),me,victim);
          victim->receive_damage("kee",ten*9/2);
          victim->apply_condition("cold",random(45)+((int)me->query_skill("sunforce", 1)/10));//冻伤
          COMBAT_D->report_status(victim);
        }
}

void sp3(object me, object victim, object weapon, int damage)
{
        int force;
        force = me->query_skill("sunforce");
        if( me->query("force_factor") >= 10 && victim->query_condition("blockade"))
        {
          message_vision(sprintf(""HIC"$n抵挡不敌，被$N连劲劈中，身形巨震。$n内力突然破体宣泄而出，苦不堪言!!\n"NOR),me,victim);
          victim->receive_damage("kee",force*6/5);
          victim->apply_condition("hart",random(45)+((int)me->query_skill("sunforce",1)/10));//内伤
          victim->start_busy(random(3));
          COMBAT_D->report_status(victim);
        }
}


mapping query_action(object me, object weapon)
{
        int level=(int)(me->query_skill("surprise-ten",1));

        if ( level < 10 )
           return action [random(3)];
        else if ( level < 30 )
           return action [random(6)];
        else if ( level < 60 )
           return action [random(7)];
        else if ( level < 80 )
           return action [random(8)];
        else if ( level < 90 )
           return action [random(9)];
        else if ( level < 95 )
           return action [random(9)+1];
        else if ( level < 100 && me->query_temp("super",1))
           return action [random(9)+2];
        else if ( level >= 100 && me->query("marks/six_sp") ==3)
           return action [random(9)+3];
        else
           return action [random(9)];
}

int valid_learn(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("练惊天十式是要空手吧....\n");
        if(me->query_skill("force")*3<=me->query_skill("surprise-ten",1))
          return notify_fail("你的基本内力技能不足, 无法练惊天十式。\n");
        if(me->query_skill("literate")*3<=me->query_skill("surprise-ten",1))
          return notify_fail("你的知识不足，无法体会惊天十式真切的要理，全身经脉真气运行之道的精妙变化。\n");
        return 1;
}

int valid_enable(string usage)
{
      if(this_player()->query_skill("surprise-ten",1) >= 70)
         {
            return (usage=="unarmed")||(usage=="parry");
         }
          return (usage=="unarmed");
}

int practice_skill(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("练惊天十式是要空手吧....\n");
        if( (int)me->query("gin") < 5 )
          return notify_fail("你的精不够，无法练习。\n");
        if( (int)me->query("kee") < 30 )
          return notify_fail("体力不够啰,休息一下再继续练吧.\n");
        if( (int)me->query("force") < 1 )
          return notify_fail("目前内力不足,休息一会儿再练吧.\n");
        me->receive_damage("gin", 5);
        me->receive_damage("kee", 30);
        me->add("force", -1);
        return 1;
}
string perform_action_file(string action)
{
        return "/daemon/class/scholar/"+action;
}

