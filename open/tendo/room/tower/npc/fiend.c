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
        set("title",RED"冥殿之尊"NOR);
        set_name("冥殿修罗",({"fiend"}));
        set("max_gin",3000);
        set("gin",3000);
        set("race","野兽");
        set("age",1200);
        set("str", 100);
        set("max_kee", 2400);
        set("kee", 2400);
        set("limbs", ({ "头部", "身体", "前脚" , "后脚" , "尾巴" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",500000);
        set_temp("apply/armor",90);
        set_temp("apply/attack", 90);
        set("force_factor",12);
        set("bellicosity",2000);
        set("max_sen",3000);
        set("sen",3000);
        set("max_atman",2500);
        set("atman",2500);
        set("max_mana",2000);
        set("mana",2000);
        set("max_force",3000);
        set("force",3000);
        set("cor", 40);
        set("cps", 40);

        set("chat_chance_combat",45);
        set ("chat_msg_combat", ({(: special_att :)}));

        command("wield all");
        command("wear all");
        set_skill("hell-evil",90);
        map_skill("parry","hell-evil");
        set("unarmed",90);
        map_skill("unarmed","hell-evil");
        set_skill("dodge",90);
        set_skill("fly-steps", 70);
        map_skill("dodge","fly-steps");
        set_skill("parry",90);
        setup();
        carry_object ("/open/tendo/room/tower/obj/ring")->wield ();
        carry_object ("/open/tendo/room/tower/obj/neck")->wear ();
        add_money("gold",20);
        carry_object("/open/tendo/room/tower/obj/boots")->wear();
        carry_object("/open/tendo/room/tower/obj/cloth")->wear();
        carry_object("/open/tendo/room/tower/obj/hat")->wear();
        carry_object("/open/tendo/room/tower/obj/hands")->wear();
        carry_object("/open/tendo/room/tower/obj/belt")->wear();
        carry_object("/open/tendo/room/tower/obj/wrists")->wear();
        carry_object("/open/tendo/room/tower/obj/shield")->wear();
        carry_object("/open/tendo/room/tower/obj/legging")->wear();
        carry_object("/open/tendo/room/tower/obj/book");

}

int accept_kill(object ob)
{
        int i;
        object ob1,hu_fa;
        string place;
        ob1 = this_object();

        if( !present("hu-fa", environment(ob)) )
        {
        tell_room(environment(ob),HIW"\n突然！冲出两位护法!!\n\n"NOR);
        for(i=0;i<2;i++)
         {
         hu_fa = new("/open/tendo/room/tower/npc/hu_fa");
         hu_fa->move(environment(ob));
         hu_fa->kill_ob(this_player());
         }
        }
        write("[1;32m护法纵身飞扑过来叫道：誓死保护修罗！！[0m\n");
        return 1;
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
          "HIW"冥殿修罗身形倏而腾飞三丈,凌空劈出一"NOR"
    "HIW"股掌劲,绵绵掌影,如江河缺堤似,暴泻而下,掌风如激流"NOR"
                  "HIW"般地向你隔空劈来!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  二  式 －－"NOR"
                  "HIB"～‘  "HIR"魔 性 狂 发"HIB"  ’～"NOR"
          "HIW"冥殿修罗满头银发迎风如涛,双目吐光如炬,"NOR"
    "HIW"忽然双臂抖舞,幻化成千百条手臂,每一条手臂扑出一般浑"NOR"
             "HIW"雄的掌风,慢天的掌影向你卷劈而来!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  三  式 －－"NOR"
                  "HIB"～‘  "HIW"鬼 气 贯 脑"HIB"  ’～"NOR"
          "HIW"冥殿修罗双手暴长，脸部青丝暴露，浓烈的恶"NOR"
    "HIW"臭从双掌透出，只见冥殿修罗双手不停疾舞，劲气中夹带着"NOR"
  "HIW"令人闻之欲呕的毒气,使得你受到毒气的影响，受到不轻的伤害!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  四  式 －－"NOR"
                  "HIB"～‘  "HIC"魑 魅 魍 魉"HIB"  ’～"NOR"
          "HIW"冥殿修罗一声龙吟般的长啸,挫身飞腾,身形荡"NOR"
    "HIW"空回舞,一连串动作在同一石火电光之间完成,自不同的方向,"NOR"
  "HIW"不同的角度,那宛如似厉鬼魔爪般的掌影,向你诡异奇绝的飞劈而至!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  五  式 －－"NOR"
                  "HIB"～‘  "MAG"鬼 魅 拜 月"HIB"  ’～"NOR"
          "HIW"只见冥殿修罗身形一躬，双掌前劈，一道半月"NOR"
    "HIW"形的劲气猛然向前涌去，雄浑的劲气，刮得地面如飞沙走石般"NOR"
                       "HIW"地向你狂袭而去!!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  六  式 －－"NOR"
                  "HIB"～‘  "HIY"掌 不 刃 血"HIB"  ’～"NOR"
          "HIW"冥殿修罗双掌化成千百掌影,掌影又凝成一股惊"NOR"
              "HIW"天动魄的劲气,朝向破风声来处劈去!!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  七  式 －－"NOR"
                  "HIB"～‘  "HIC"妖 鬼 莫 测"HIB"  ’～"NOR"
          "HIW"冥殿修罗屈体弓身，双掌紧贴地面，全身笼罩在"NOR"
    "HIW"一片蓝光中，地面宛如波涛般浮动，随着蓄积的内劲，蓝光不断"NOR"
   "HIW"增加，只见冥殿修罗突然将双掌一合，一道骇人蓝箭向你疾射而去!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  八  式 －－"NOR"
                  "HIB"～‘  "HIR"风 魔 狂 转"HIB"  ’～"NOR"
          "HIW"冥殿修罗以气贯入双爪 ,双爪闪出一阵耀目金光,"NOR"
    "HIW"气提十二成 ,劲注全身 ,蓄势准备使出最强最霸道的一式,霎时"NOR"
  "HIW"狂龙魔气急速旋绕冥殿修罗 ,无俦魔气因此惊动天地之气 ,互抗暴出"NOR"
 "HIW"数道紫电雷光 ,冥殿修罗忽然现身于你前 ,对你使出了石破天惊的一击!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  九  式 －－"NOR"
                  "HIB"～‘  "HIY"鬼 影 重 重"HIB"  ’～"NOR"
          "HIW"无穷无尽的劲力由四周涌入冥殿修罗体内，只见冥"NOR"
    "HIW"殿修罗双掌不停做着细微的变化，仿佛如黑洞般，将万物都吞食"NOR"
                 "HIW"淹灭,忽然双掌击向你的全身!"NOR"
           "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  十  式 －－"NOR"
                  "HIB"～‘  "HIW"鬼 气 无 涛"HIB"  ’～"NOR"
          "HIW"冥殿修罗狂吼一声,上空平身挪后三寸,左手拍地,右"NOR"
    "HIW"手股动内劲,破天而出,掌劲如山,激起无涛的气劲,夹着雷霆万驹"NOR"
                       "HIW"之势朝你而来!!"NOR"
         "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  十  一  式 －－"NOR"
                  "HIB"～‘  "HIC"鬼 焰 凌 厉"HIB"  ’～"NOR"
          "HIW"冥殿修罗左足横移,挫腰沈身,单袖一扬,瞬时狂风拂"NOR"
    "HIW"起, 尘沙飞扬,冥殿修罗趁飞沙走石之际,运起阳刚真气,身形一旋,"NOR"
      "HIW"双掌内拢,催起一股凌厉的气焰,朝你的天灵盖连续拍出数掌!"NOR"
         "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"第  十  二  式 －－"NOR"
                  "HIB"～‘  "HIR"群 魔 乱 舞"HIB"  ’～"NOR"
          "HIW"冥殿修罗闪身反掌击出，一道青色光芒从掌中发出，"NOR"
    "HIW"使你分不清身在何方，只见冥殿修罗身形一展，幻化成千万身影,"NOR"
 "HIW"身影中夹带着沉重的掌劲向你罩下,你正在迟疑之际已被无数掌影所击中!"NOR"
        "HIB"－－ "HIW"冥  殿  "HIR"绝  "HIY"学  "HIB"之  "HIC"终  "RED"极  "MAG"秘  "HIW"技 "HIB"－－"NOR"
                  "HIB"～‘  "MAG"千  魂  灭  散"HIB"  ’～"NOR"
          "HIW"冥殿修罗重重的掌,连叠的拳,万钧之力,浑雄之气,煞"NOR"
    "HIW"时天空仿佛突然黑暗下来,妖魔仿佛都从墓地爬了起来,推山倒海,"NOR"
 "HIW"大地翻滚,纵横上下空间,为掌风与掌影所布,有如绵绵飞际的利刃击向你!!\n"+NOR,me);

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
void unconcious()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),
HIB"\n冥殿修罗唉道:
     "HIW"‘百 年 世 事 空 华 里，一 片 身 心 水 月 间 ;\n                        
                      "HIY" \独\ 许 万 山 深 密 处，昼 长 趺 坐 掩 松 关 。’\n
"HIC"没想到我冥殿修罗被困五百年之后，得以重见天日!!今日却败于"HIW""+winner->query("name")+""HIC"之手！！\n"NOR);
        :: unconcious();
}
void die()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),HIB"\n\n只见天空乌云消散，又恢复了一片祥和。\n\n"NOR);

        :: die();
}

      


