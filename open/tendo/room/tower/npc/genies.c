#include <ansi.h>
#include <combat.h>
inherit NPC;
#define bell_big 400
#define bell_small 200
#define SPELLLVL 100
#define MANACOST 150
#define INVCOST 18
int special_att ();
object room2;
void create()
{
        set("title","冥殿殿士");
        set_name("小妖",({"genies"}));
        set("max_gin",1000);
        set("gin",1000);
        set("race","野兽");
        set("age",510);
        set("str", 55);
        set("max_kee", 1000);
        set("kee", 1000);
        set("limbs", ({ "头部", "身体", "前脚" , "后脚" , "尾巴" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",250000);
        set("attitude","aggressive");
        set_temp("apply/armor",50);
        set_temp("apply/attack", 50);
        set("force_factor",10);
        set("bellicosity",1000);
        set("max_sen",1000);
        set("sen",1000);
        set("max_atman",1000);
        set("atman",1000);
        set("max_mana",1000);
        set("mana",1000);
        set("max_force",1500);
        set("force",1500);
        set("cor", 40);
        set("cps", 25);

        set("chat_chance_combat",25);
        set ("chat_msg_combat", ({(: special_att :)}));

        command("wield all");
        command("wear all");
        set_skill("hell-evil",70);
        map_skill("parry","hell-evil");
        set("unarmed",70);
        map_skill("unarmed","hell-evil");
        set_skill("dodge",70);
        set_skill("fly-steps", 60);
        map_skill("dodge","fly-steps");
        set_skill("parry",70);
setup();
    add_money("gold",5);
}
int spell ()
{
  return SPELLLVL;
}

int manacost ()
{
  return MANACOST;
}

int invcost ()
{
  return INVCOST;
}

int special_att ()
{
  object me = this_object ();
  object *enemy = query_enemy (), victim;
  int i = sizeof (enemy), damage;
  victim = enemy[random(i)];
message_vision(HIB+
"          －－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  一  式 －－"NOR"
                  "HIB"～‘  "HIY"妖 魔 聚 鼎"HIB"  ’～"NOR"
          "HIW"冥殿小妖身形倏而腾飞三丈,凌空劈出一"NOR"
    "HIW"股掌劲,绵绵掌影,如江河缺堤似,暴泻而下,掌风如激流"NOR"
                  "HIW"般地向你隔空劈来!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  二  式 －－"NOR"
                  "HIB"～‘  "HIR"魔 性 狂 发"HIB"  ’～"NOR"
          "HIW"冥殿小妖满头银发迎风如涛,双目吐光如炬,"NOR"
    "HIW"忽然双臂抖舞,幻化成千百条手臂,每一条手臂扑出一般浑"NOR"
             "HIW"雄的掌风,慢天的掌影向你卷劈而来!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  三  式 －－"NOR"
                  "HIB"～‘  "HIW"鬼 气 贯 脑"HIB"  ’～"NOR"
          "HIW"冥殿小妖双手暴长，脸部青丝暴露，浓烈的恶"NOR"
    "HIW"臭从双掌透出，只见冥殿小妖双手不停疾舞，劲气中夹带着"NOR"
  "HIW"令人闻之欲呕的毒气,使得你受到毒气的影响，受到不轻的伤害!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  四  式 －－"NOR"
                  "HIB"～‘  "HIC"魑 魅 魍 魉"HIB"  ’～"NOR"
          "HIW"冥殿小妖一声龙吟般的长啸,挫身飞腾,身形荡"NOR"
    "HIW"空回舞,一连串动作在同一石火电光之间完成,自不同的方向,"NOR"
  "HIW"不同的角度,那宛如似厉鬼魔爪般的掌影,向你诡异奇绝的飞劈而至!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  五  式 －－"NOR"
                  "HIB"～‘  "MAG"鬼 魅 拜 月"HIB"  ’～"NOR"
          "HIW"只见冥殿小妖身形一躬，双掌前劈，一道半月"NOR"
    "HIW"形的劲气猛然向前涌去，雄浑的劲气，刮得地面如飞沙走石般"NOR"
                       "HIW"地向你狂袭而去!!\n"+NOR,me);
  
  if (random (2) >= 1)
    {
      damage = 30+(victim->query ("max_kee") / 8);
   if (damage < 40)
        damage = 40;
      if (damage > 250)
        damage = 250;
message_vision(HIR"$N不幸被掌风劈中 , 顿时全身血如泉涌.\n"NOR,victim);
      victim->apply_condition ("bleeding", random (i * i));
      victim->receive_damage ("kee", damage, me);
      COMBAT_D->report_status (victim, 0);
    }
  else
    {
message_vision(HIW"只可惜离$N差了一点, 劈到地上, 轰的一声巨响, 地皮顿时裂了开来.\n"NOR,victim);
    }
  start_busy (1);
  return 1;
}



