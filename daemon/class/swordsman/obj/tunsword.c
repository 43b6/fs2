//tunsword 迅雷剑 by roger
//需学过迅雷剑法才可施展 ( set("quest/tunder_sword",1) )
//需解谜,解谜过程中魔王exp 300万,so 强点亦无妨
//需 en sword none so 攻防将大幅下降,所以攻击力调高
// weapon上限为80因为特殊武器特准为115
// QC by Anmy 3/3/98
#include <weapon.h>
#include <ansi.h>

inherit SWORD;


string *parry_msg=({
        HIC"$n以快制快,敌快$n更快,瞬间织成一道剑网将敌招尽数荡开!\n"NOR,
        
        HIC"$n且战且走,一连串的兵器撞击声后,$n已将$N的快招全部化解!\n"NOR,
        });

mapping *action = ({
([ "action" : HIW"$N使出迅雷剑法第一式"HIB"‘风卷残云’"HIW",手中的$w"HIW"快速舞动着,挟着阵阵风雷袭向四周,一时间剑气纵横"NOR,
        "dodge":   -20,
        "parry":   -20,
        "damage":   80,
        "force":    50,
        "damage_type" : "刺伤",
]),

([ "action" : HIW"$N手中$w"HIW"突然嗡嗡巨响,使出迅雷剑法第二式"HIB"‘空谷雷鸣’"HIW",手中$w"HIW"发出霹雳巨响刺向四周的敌人 "NOR,
        "dodge":    40,
        "parry":    80,
        "damage":   80,
        "force":    50,
        "damage_type" : "刺伤",
]),

([ "action" :HIW"$N手中$w"HIW"急速颤动,瞬间满天剑花闪闪,正是迅雷剑法第三式"HIB"‘落英缤纷’"HIW",招如其名,只见敌人的血如落花般飞溅..."NOR,
        "dodge":    40,
        "parry":    80,
        "damage":   80,
        "force":    50,
        "damage_type" : "刺伤",
]),

([ "action" : HIW"$N身形急旋,使出迅雷剑法第四式"HIB"‘秋风扫叶式’"HIW",只见四周卷起滚滚尘沙,令人摸不清$N在何方..."NOR,
        "dodge":     40,
        "parry":    80,
        "damage":   80,
        "force":    50,
        "damage_type" : "砍伤",
]),

([ "action" : HIW"$N手捏剑诀,忽然手中的$w"HIW"往天空飞去,瞬时间数道剑气往下激射,正是迅雷剑法第五式"HIB"‘白虹弪天’"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "割伤",
]),

([ "action" : HIW"$N使出迅雷剑法第六式"HIB"‘升龙旋’"HIW"身形犹如一条灰龙急旋而上,且散发出凛冽的气息袭向四周,好像要一举吞没敌人似的"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "割伤",
]),

([ "action" : HIW"$N大喝一声,使出迅雷剑法第七式"HIB"‘点落七星’"HIW",一瞬间已向四周刺出了七七四十九剑!"NOR,
        "dodge":   45,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "刺伤",
]),

([ "action" : HIW"$N手中的$w"HIW"忽劈忽刺,一招迅雷剑法第八式"HIB"‘雷电交作’"HIW"使将出来,四周响起了隆\隆\巨\响\!"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "砍伤",
]),

([ "action" : HIW"$N手中的$w"HIW"剑芒忽然一长,使出迅雷剑法第九式"HIB"‘疾风暴雨’"HIW",只见剑芒不停的吞吐闪烁,令人眼花撩乱间$w"HIW"已穿体而出..."NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "穿体之伤",
]),

([ "action" : HIW"$N使出绝顶轻功,一招迅雷剑法第十式"HIB"‘雷厉风行’"HIW"使将出来,周围敌人纷纷不住地倒退..."NOR,
        "dodge":   80,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "砍伤",
]),

([ "action" : HIW"$N身形一晃,手中$w"HIW"不绝的向敌人追随而去,正是迅雷剑法第十一式"HIB"‘如影随形’"HIW"令敌人避无可避"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "刺伤",
]),

([ "action" : HIW"$N手中的$w"HIW"忽然变成软软绵绵,剑招去势诡异莫测,正是迅雷剑法第十二式"HIB"‘绕指柔剑’"HIW"令敌人无从招架起"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "割伤",
]),

([ "action" : HIW"$N手中的$w"HIW"飞射而出,使出迅雷剑法第十三式"HIB"‘御剑成风’"HIW"只见$w"HIW"在$N双手真气的控制下以极高的速度刺向周围的敌人。"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "刺伤",
]),

([ "action" : HIW"$N使出迅雷剑法第十四式"HIB"‘幻剑式’"HIW",手中的$w"HIW"忽然飞快的舞动,形成一道道幻影刺向周围的敌人。"NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   80,
        "force":    50,
        "damage_type" : "刺伤",
]),

([ "action" : HIW"$N手中的$w"HIW"往外一分,忽然化成成千上万的幻影笼罩着四周的敌人,正是迅雷剑法第十五式"HIB"‘无影式’"HIW",周围敌人纷纷退却..."NOR,
        "dodge":   40,
        "parry":   80,
        "damage":   120,
        "force":    70,
        "damage_type" : "割伤",
]),

([ "action" : HIW"$N将手中的$w舞得更急,使出迅雷剑法第十六式"HIB"‘无踪式’"HIW",剑法快的连剑的踪影都看不到只听一声惨号$n已被刺伤!。"NOR,
        "dodge":    40,
        "parry":   80,
        "damage":   130,
        "force":    80,
        "damage_type" : "刺伤",
]), 

([ "action" : HIW"$N使出迅雷剑法之最"HIB"‘由幻返真’"HIW",剑法之快,招式之辣,实已令人匪夷所思,所刺出的每一招皆令敌人受到重创"NOR,
        "dodge":    40,
        "parry":   80,
        "damage":   150,
        "force":    80,
        "damage_type" : HIB"迅雷剑伤"NOR,
]),

});

void create()
{
   seteuid(getuid());
   set_name(HIB"迅"HIW"．"HIB"雷"HIW"．"HIB"剑"NOR,({"thunder_sword"}));
   set_weight(100);
   init_sword(115);
   if( clonep() )
      set_default_object(__FILE__);
   else
   {
      set("unit", "把");
    //set("wield_as", ({ "sword", "secondhand sword" }));
      set("long","
迅雷剑,剑身呈蓝色,其重量和材质皆恰到好处,宛若当年风清扬赖以成名的迅雷
剑再现。若非其恰到好处的重量和铸法,便难以发挥迅雷剑法之精奥,也难以承受
迅雷剑法的威力。
");
      set("value",200000);
      set("no_auc",1);
      set("no_give",1);
      set("no_sell",1);
      set("no_drop",1);
      set("material", "crimsonsteel");
   }
   set("actions", (: __FILE__, "query_action" :) );
   //set("default_actions", (: call_other, __FILE__,"query_action" :));
   setup();
}

void init()
{
     add_action("doo_wield","wield");
     add_action("doo_unwield","unwield");
}

int doo_wield(string str)
{
    object me;
    me=this_player();
    if(str=="all")
    return 1;

    else if(str!="thunder_sword")
    return 1;

    else if(!me->query("quest/tunder_sword",1)) {
    tell_object(me,"你没有学会迅雷剑法，无法驾驭此剑。\n");
    return 1;
                                           }
    else if(me->query("class")!="swordsman")    { 
    tell_object(me,"你的职业不是剑士，干嘛拿剑?\n");
    return 1;
                                           }
    else if(me->query_skill("sword",1) < 95)    {
    tell_object(me,"你的基础剑术不够，无法驾驭此剑。\n");
    return 1;
                                           }
    else {
    message_vision("$N手中一闪,已将绕在腰间的"HIB"迅"HIW"．"HIB"雷"HIW"．"HIB"剑"NOR"威风凛凛的拿在手中。\n",me);
    tell_object(me,"迅雷剑法可和后三式并成迅雷十七式 !!\n而除了融入仙剑剑术外, 则亦可自成一套快绝的惊世剑法\n"); 
    me->set("get_sha_sp",0);
    return 0; 
         }   
}

int doo_unwield(string str)
{
    object me;
    me=this_player();
    if(str == "tunder_sword" || str=="sword" || str=="all")
    message_vision("$N一运内力,手中的"HIB"迅"HIW"．"HIB"雷"HIW"．"HIB"剑"NOR"刹时变成一把绵剑,$N顺势把它缠回腰间。\n",me);
    me->set("get_sha_sp",1);    
    me->unwield_tunder_sword();
}                       

string query_parry_msg(string limb)
{
   return parry_msg[ random( sizeof( parry_msg))];
}


mapping query_action(object me, object weapon)
{
        mapping do_action;
        string arg;
        mixed all;
        object *enemy,who,room,weaponn,obj;
        string actionn;
        int i, j, k, gin, kee,sen,force,turn,l;
        force=me->query("force");
        gin=me->query("gin");
        sen=me->query("sen");
        turn=(force/100)+(gin/30)+(sen/30);
        if(turn >20) turn =20;
        if( random(4) == 0 && me->query("sen") > 40 && me->query("gin") > 40 && me->query("force") > 300) {
            enemy = me->query_enemy();
              for(i=0; i<sizeof(enemy); i++) {
                for(j=0; j<turn; j++) {
                    
                    do_action = action[random(sizeof(action))];
                    actionn = "\n";
                    actionn += do_action["action"];
		    if( weaponn=me->query_temp("weapon") )
                        actionn = replace_string(actionn, "$w", weaponn->name());
                    message_vision(actionn, me, enemy[i]);
                    if( random(me->query("combat_exp")) >
                        random(enemy[i]->query("combat_exp"))/5 ) {
                        message_vision("\n$N闪躲不及, 被这一剑刺中了要害。\n" , enemy[i]);
                        enemy[i]->receive_damage("kee",80,me);
                        enemy[i]->add("eff_kee",-30);
                        me->add("force",-12);
                        COMBAT_D->report_status(enemy[i]);
                                                                   }
                    else message_vision("\n$N人比剑快, 惊险地闪过了这一招。\n" , enemy[i]);
                                        }
                                              }
            if( random(me->query("cps")) < 4 ) {
                me->add("sen", -30);
                me->add("gin",-30);
                me->add("force",-200);
                tell_object(me,HIW"\n你使出一十七招迅雷剑后,由于定力不够,内力紊乱,大损精神。\n\n"NOR);
                me->start_busy(1);
                                                }
                  
           else if (random(100) > 1 && me->query("quest/tunder_sword_18")==1 ){
message_vision(HIR"\n\n$N一连使出一十七招迅雷剑法后，结合了天时地利人和之气
仰天发出长啸～～

"HIB"忽然间天地一片昏暗，乌云密布的上空雷电交作，$N的迅雷剑与$N
合为一体不断地闪着耀眼的白光，正是一切都将毁灭的前兆!!

"HIR"蓦然听到$N一声大喝：大开杀戒，我方回避!!啊～～～～～
\n"NOR,me);
        room = environment(me);
        all = all_inventory(room);
        for( l = 0 ; l < sizeof(all) ; l++){
        obj = all[l];
        obj->remove_all_killer();
                                           }
        call_out("attack",5,me);

                                                                               }

           me->add("force",-200);
                                                                                                   }
        return action[random(sizeof(action))];
}
int attack(object me){
 string arg;
 object who,obj,room,*all;
 int i;
 room = environment(me);
 all = me->query_enemy(room);
 message_vision(HIR"\n\n$N蓄足了体内的真气，仰天长啸其势如龙吟，使出了"HIB"迅雷剑法"HIR"最后一招
\n\n                     "HIB"‘霹   "HIW" 雳 "HIB"   摧 "HIW"   河"HIB"    岳’!!!


"HIW"四周一片剑气纵横，$N配合着迅然的猛雷勾动九地九天之气，使大地为之
     动摇，波状的剑气以$N为中心向四周澎湃袭去。一片剑气交错后四周敌人
非死即碎，早已纷纷倒下....\n\n\n",me);
 for( i = 0 ; i < sizeof(all) ; i++){
   obj = all[i];

   if(obj!=me){
   obj->set("kee",6);
   obj->set("gin",6);
   obj->set("sen",6);
   obj->unconcious();
              }
                                    }
   me->set("force",0);
   return 1;
}

int query_autoload()
{
if(this_player()->query("family/family_name")=="仙剑派" && this_player()->query("quest/tunder_sword",1)==1)
return 1;
}

