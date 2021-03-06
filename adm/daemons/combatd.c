// 全新改版 by swy
// 再次整合审查 npc 会暴强问题 by swy
#include <ansi.h>
#include <skill.h>
#include <weapon.h>
#include <combat.h>
#include <login.h>
inherit F_DBASE;
inherit SSERVER;
// skills 里的 force 值
mapping force_div = ([
"fighter"   :500,
"bandit"    :400,
"swordsman" :400,
"blademan"  :400,
"scholar"   :300,
"bonze"     :300,
"officer"   :300,
"prayer"    :300,
"beggar"    :300,
"marksman"  :300,
"dancer"    :200,
"poisoner"  :100,
"killer"    :100,
"taoist"    :100,
"doctor"    :100,
]);
// skills 里的 damage 值
mapping damage_div = ([
"fighter"   :500,
"bandit"    :400,
"swordsman" :400,
"blademan"  :400,
"scholar"   :300,
"bonze"     :300,
"officer"   :300,
"prayer"    :300,
"beggar"    :300,
"marksman"  :300,
"dancer"    :200,
"poisoner"  :100,
"killer"    :100,
"taoist"    :100,
"doctor"    :100,
]);
// class 基本命中率
mapping hurt_div = ([
"fighter"   :500,
"bandit"    :600,
"swordsman" :600,
"blademan"  :600,
"scholar"   :700,
"bonze"     :700,
"officer"   :700,
"prayer"    :700,
"beggar"    :700,
"killer"    :700,
"marksman"  :700,
"dancer"    :800,
"poisoner"  :800,
"taoist"    :800,
"doctor"    :800,
]);
// class 招架调整值
mapping parry_div = ([
"dancer"    :       9,
"poisoner"  :       9,
"doctor"    :       8,
"taoist"    :       8,
"killer"    :       8,
"marksman"  :       7,
"scholar"   :       7,
"bandit"    :       7,
"prayer"    :       6,
"officer"   :       6,
"fighter"   :       6,
"bonze"     :       5,
"beggar"    :       5,
"blademan"  :       4,
"swordsman" :       4,
]);

string *guard_msg = ({
        CYN "$N注视着$n的行动，企图寻找机会出手。\n" NOR,
        CYN "$N正盯着$n的一举一动，随时准备发动攻势。\n" NOR,
        CYN "$N缓缓地移动脚步，想要找出$n的破绽。\n" NOR,
        CYN "$N目不转睛地盯着$n的动作，寻找进攻的最佳时机。\n" NOR,
        CYN "$N不停的在$n身旁游移着，专心的寻找$n的破绽。\n" NOR,
        CYN "$N慢慢地移动着脚步，伺机出手。\n" NOR,
        CYN "$N眼观四路，耳听八方，集中精神与$n缠斗着。\n" NOR,
        CYN "$N步步为营，双眼直视着$n，想找出$n的防守漏洞。\n" NOR,
});

string *catch_hunt_msg = ({
        YEL "$N和$n仇人相见分外眼红，立刻打了起来！\n" NOR,
        YEL "$N对着$n大喝：「可恶，又是你！”\n" NOR,
        YEL "$N和$n一碰面，二话不说就打了起来！\n" NOR,
        YEL "$N一见到$n，冷冷的道：「我俩还真是有缘呀！去死吧！”\n" NOR,
        YEL "$N一眼瞥见$n，「哼”的一声冲了过来！\n" NOR,
        YEL "$N一见到$n，愣了一愣，大叫：「我宰了你！”\n" NOR,
        YEL "$N对着$n冷冷的哼了一声，想致$n于死地！\n" NOR,
        YEL "$N与$n擦肩而过，立刻转过身来，大叫：「小王八蛋哪里跑！”\n" NOR,
});

int death_effect(object victim);
string dodge_skill, parry_skill,skill_map,class1,class2,class3,my_skill_message2,k_class;
string rstrone,rstrtwo;
int ap, dp, op, pp,fap,fdp, damage, damage_bonus, i,my_skill=0,choose_skill;
int wounded=0,ppp,divv,div1_2,div1,div2,c1,c2,cmexp,my_skill_power=0,power_dam;
int bssone=0;
int pod;
int dodge_ratio;

void create()
{
        seteuid(getuid());
        set("name", "死神");
        set("id", "deadgod");
}

string damage_msg(int damage, string type)
{

	string str;
	object me = this_player();
	object victim;
	if(!me) me=previous_object();
	if(!me) return "";
	victim=offensive_target(me);
	if(!victim) return "";
	if( damage == 0 )
		return "结果没有造成任何伤害。\n";
	//这部份会照成玩家的因扰,所以我先Disable by Chan 2002/08/11
	/*
	if( damage > victim->query("max_kee")*2 ) {
		if( !userp(victim) )
			victim->set( "corpse_gone", 1 );
		str = HIR"结果听见「轰”地一声惊天巨响, 极度惊恐的$n瞬间化成齎粉, 灰飞湮灭。"NOR;
		if( wizardp(me) )
			str += "(" + damage + ")";
		return str + "\n";
	}
	*/
	if( wizardp(me) || wizardp(victim) )
		return "造成 "HIR + damage + NOR" 点" + type + "。\n";
        switch( type ) {
        case "斲伤":
        case "割伤":
                if( damage < 100 ) return "结果只是轻轻地划破$p的皮肉。\n";
                else if( damage < 300 ) return "结果在$p$l划出一道细长的血痕。\n";
                else if( damage < 500 ) return "结果「嗤”地一声划出一道伤口！\n";
                else if( damage < 700 ) return "结果「嗤”地一声划出一道血淋淋的伤口！\n";
                else if( damage < 900 ) return "结果「嗤”地一声划出一道又长又深的伤口，溅得$N满脸鲜血！\n";
                else return "结果只听见$n一声惨嚎，$w已在$p$l划出一道深及见骨的可怕伤口！！\n";
                break;
        case "刺伤":
                if( damage < 100 ) return "结果只是轻轻地刺破$p的皮肉。\n";
                else if( damage < 300 ) return "结果在$p$l刺出一个创口。\n";
                else if( damage < 500 ) return "结果「噗”地一声刺入了$n$l寸许！\n";
                else if( damage < 700 ) return "结果「噗”地一声刺进$n的$l，使$p不由自主地退了几步！\n";
                else if( damage < 900 ) return "结果「噗嗤”地一声，$w已在$p$l刺出一个血肉糢糊的血窟窿！\n";
                else return "结果只听见$n一声惨嚎，$w已在$p的$l对穿而出，鲜血溅得满地！！\n";
                break;
        case "瘀伤":
                if( damage < 500 ) return "结果只是轻轻地碰到，比拍苍蝇稍微重了点。\n";
                else if( damage < 1000 ) return "结果在$p的$l造成一处瘀青。\n";
                else if( damage < 1500 ) return "结果一击命中，$n的$l登时肿了一块老高！\n";
                else if( damage < 2000 ) return "结果一击命中，$n闷哼了一声显然吃了不小的亏！\n";
                else if( damage < 2500 ) return "结果「砰”地一声，$n退了两步！\n";
                else if( damage < 3500 ) return "结果这一下「砰”地一声打得$n连退了好几步，差一点摔倒！\n";
                else if( damage < 4500 ) return "结果重重地击中，$n「哇”地一声吐出一口鲜血！\n";
                else if( damage < 5500 ) return "结果这毁天灭地「轰”地一击使得$n血流满地！\n";
                else return "结果只听见「砰”地一声巨响，$n像一捆稻草般飞了出去！！\n";
                break;
        case "鞭伤":
                if( damage < 100 ) return "结果只是从$l表面轻轻擦过。\n";
                else if( damage < 300 ) return "结果啪的一声在$p$l打了一条殷红的鞭痕。\n";
                else if( damage < 500 ) return "结果刷的一声在$p$l抽了一道又长又深的可怖血痕！\n";
                else if( damage < 700 ) return "结果$n一声哀嚎，身上已多了条深及见骨的可怕伤口！\n";
                else if( damage < 900 ) return "结果只听见$n一声惨叫，$n$l已被抽的皮开肉绽,鲜血直流！\n";
                else return "结果一鞭命中,只听见咯啦一声,，n哀号倒地$l筋断骨裂,鲜血狂涌不止！！\n";
                break;
        default:
                if( !type ) type = "伤害";
                if( damage < 100 ) str =  "结果只是勉强造成一处轻微";
                else if( damage < 300 ) str = "结果造成轻微的";
                else if( damage < 500 ) str = "结果造成一处";
                else if( damage < 700 ) str = "结果造成一处严重";
                else if( damage < 900 ) str = "结果造成颇为严重的";
                else if( damage < 1100 ) str = "结果造成相当严重的";
                else if( damage < 1300 ) str = "结果造成十分严重的";
                else if( damage < 1500 ) str = "结果造成极其严重的";
                else str =  "结果造成非常可怕的严重";
                return str + type + "！\n";
        }
}

string eff_status_msg(int ratio)
{
        if( ratio==100 ) return HIW "看起来气血充盈，并没有受伤。" NOR;
        if( ratio > 95 ) return HIG "似乎受了点轻伤，不过光从外表看不大出来。" NOR;
        if( ratio > 90 ) return HIG "看起来可能受了点轻伤。" NOR;
        if( ratio > 80 ) return GRN "受了几处伤，不过似乎并不碍事。" NOR;
        if( ratio > 60 ) return HIY "受伤不轻，看起来状况并不太好。" NOR;
        if( ratio > 40 ) return YEL "气息粗重，动作开始散乱，看来所受的伤着实不轻。" NOR;
        if( ratio > 30 ) return HIR "已经伤痕累累，正在勉力支撑着不倒下去。" NOR;
        if( ratio > 20 ) return HIR "受了相当重的伤，只怕会有生命危险。" NOR;
        if( ratio > 10 ) return RED "伤重之下已经难以支撑，眼看就要倒在地上。" NOR;
        if( ratio > 5  ) return RED "受伤过重，已经奄奄一息，命在旦夕了。" NOR;
        return                  RED "受伤过重，已经有如风中残烛，随时都可能断气。" NOR;
}

string status_msg(int ratio)
{
        if( ratio==100 ) return HIW "看起来充满活力，一点也不累。" NOR;
        if( ratio > 95 ) return HIG "似乎有些疲惫，但是仍然十分有活力。" NOR;
        if( ratio > 90 ) return HIG "看起来可能有些累了。" NOR;
        if( ratio > 80 ) return GRN "动作似乎开始有点不太灵光，但是仍然有条不紊。" NOR;
        if( ratio > 60 ) return HIY "气喘嘘嘘，看起来状况并不太好。" NOR;
        if( ratio > 40 ) return YEL "似乎十分疲惫，看来需要好好休息了。" NOR;
        if( ratio > 30 ) return HIR "已经一副头重脚轻的模样，正在勉力支撑着不倒下去。" NOR;
        if( ratio > 20 ) return HIR "看起来已经力不从心了。" NOR;
        if( ratio > 10 ) return RED "摇头晃脑、歪歪斜斜地站都站不稳，眼看就要倒在地上。" NOR;
        return                  RED "已经陷入半昏迷状态，随时都可能摔倒晕去。" NOR;
}

varargs void report_status(object ob, int effective)
{
  if(!ob) return ;
  if(ob->query("max_kee") <1) return ;
        if( effective )
            message_vision( "( $N" + eff_status_msg(
                   (int)ob->query("eff_kee") * 100 / (int)ob->query("max_kee") )
                   + " )\n", ob);
        else
            message_vision( "( $N" + status_msg(
                   (int)ob->query("kee") * 100 / (int)ob->query("max_kee") )
                   + " )\n", ob);
}

// by ACKY
varargs void report_kee( object me )
{
	tell_object( me, sprintf( "\t[ %s精力: %d"NOR" %s气血: %d"NOR" %s神瞑: %d"NOR" ]\n",
		STATUS("gin"), me->query("gin"), STATUS("kee"), me->query("kee"), STATUS("sen"), me->query("sen") ) );
}

varargs int skill_power(object ob, string skill, int usage)
{
        int level, power, app1, app2,mpower;
        if(!ob) return 0;
        if( !living(ob) ) return 0;
        level = ob->query_skill(skill);
        switch(usage) {
                case SKILL_USAGE_ATTACK:
                        app1 = ob->query_temp("apply/attack");
                        if(userp(ob)) {
                        if(app1>100) app1=100;
                        } else { if(app1>80) app1=80; }
                        level += app1;
                        break;
                case SKILL_USAGE_DEFENSE:
                        app1 = ob->query_temp("apply/defense");
                        if(userp(ob)) {
                        if(app1>100) app1=100;
                        } else { if(app1>80) app1=80; }
                        app2 = ob->query_temp("apply/armor");
                        if(userp(ob)) {
                        if(app2>100) app2=100;
                        } else { if(app2>80) app2=80; }
                        level += (app1+app2);
                        break;
                case SKILL_USAGE_OTHER:
                        app1 = ob->query_temp("apply/dodge");
                        if(userp(ob)) {
                        if(app1>100) app1=100;
                        } else { if(app1>80) app1=80; }
                        app2 = ob->query_temp("apply/parry");
                        if(userp(ob)) {
                        if(app2>100) app2=100;
                        } else { if(app2>80) app2=80; }
                        level += (app1+app2);
                        break;
        }
        if( !level ) return (int)ob->query("combat_exp")/2000;
//mpower,这个就是temp的了,doctor and wiz专用,by bss
        if(ob->query_temp("mpower")==1
          && (ob->query("class")=="doctor" || wizardp(ob))) {
          power = (level*level)*2; }
//mpower,是set的喔,不是temp的,npc and wiz专用, by swy and bss
        else if(wizardp(ob) || !userp(ob)) {
            mpower=ob->query("mpower")+1; 
        if(!mpower) mpower=1;
        power = (level*level)*mpower; 
       }
          else {
            mpower=1;
          power = (level*level)*mpower;        
          }
        return power + (int)ob->query("combat_exp")/2000;
}

varargs int do_attack(object me, object victim, object weapon, int attack_type)
{
        object *t;
        mapping my,your, action;
        string limb, *limbs, result, attack_skill,arrow_path,my_skill_message,skill_number;
        rstrone="";
        rstrtwo="";
        my = me->query_entire_dbase();
        your = victim->query_entire_dbase();
        // ================================================================
        // (1) 找出打架讯息, 根据武器种类而定
        // 修正 by Chan为了让玩家使用出自己的招式在这里修正!!!!目前只有设计出攻击的招式!!!
        // 主要是分成二部份
        action = me->query("actions");

        if( !mapp(action) ) {
            me->reset_action();
            action = me->query("actions");
        }
        if( !mapp(action) ) {
            CHANNEL_D->do_channel( this_object(), "sys",
                sprintf("%s(%s): bad action = %O",
                        me->name(1), me->query("id"), me->query("actions", 1)));
            return 0;
        }
// 自创招式部分  by swy
     if(me->query("env/my_skill") && (sizeof(me->query("hero")) > 2) && (random(100) < 30))
     {
         choose_skill=sizeof(me->query("hero"));
        if(me->query("combat_exp") > 8000000 && random(100) < 6)
         {
          choose_skill=choose_skill-1;
          for(i=1;i<choose_skill;i++)
           {
            skill_number=sprintf("%d",i);
            my_skill_message2=me->query("hero/action"+skill_number);
            my_skill_message=my_skill_message+"\n"+my_skill_message2+"\n";
            my_skill_message=my_skill_message+HIW+"$N心神进入剑心通明的境界,连绵不绝般使出自创之招式"+NOR;
           }
         }
        else{
         choose_skill=choose_skill-1;
         choose_skill=random(choose_skill); //取乱数的方式来找出适合的!!!!
         if(!choose_skill) choose_skill=1;
         skill_number=sprintf("%d",choose_skill);
         if(!me->query("hero/action"+skill_number))
           my_skill_message="$N招式还没有设计好!!你招式有问题有问题!!!!\n";
         else
           my_skill_message=me->query("hero/action"+skill_number);
        }
        result = "\n" + my_skill_message + "\n";
        my_skill_power=choose_skill-1;
       }
      else {
        result = "\n" + action["action"] + "\n";
       }
// 计算出攻方攻击力,防方防御力,防方额外防御力 by swy
        if( objectp(weapon) )   attack_skill = weapon->query("skill_type");
        else attack_skill = "unarmed";
        limbs = victim->query("limbs");
        limb = limbs[random(sizeof(limbs))];
        ap = skill_power(me, attack_skill, SKILL_USAGE_ATTACK);   // 攻方攻击力
        if( !ap ) ap = 1;
        dp = skill_power(victim, "dodge", SKILL_USAGE_DEFENSE);   // 防方防御力
        if( !dp ) dp = 1;
        op = skill_power(victim, "dodge", SKILL_USAGE_OTHER);     // 防方额外防御力
        if( !op ) op = 1;
        if( objectp(weapon) )  {
        damage = (int) me->query_temp("apply/damage");
        if( damage > 500 ) damage = 500;
        } else damage = 0;
// 以 skill 作为主要的伤害力 by swy
        skill_map = me->query_skill_mapped(attack_skill);
        me->set_temp("level_1", me->query_skill(attack_skill, 1));
        me->set_temp("level_2", me->query_skill(skill_map, 1));
        me->set_temp("level_3", me->query_skill("force", 1));
// npc 伤害力会比 ppl 小一些 by swy        
        damage += (int)(me->query_temp("level_1")*2+me->query_temp("level_3"));
                if(userp(me)) {
        if( me->query_temp("level_2") >= 1 )
        damage += me->query_temp("level_2")*3;
        else damage = damage; } else {
        if( me->query_temp("level_2") >= 1 )
        damage += me->query_temp("level_2")*2;
        else damage = damage; }
        me->delete_temp("level_1");
        me->delete_temp("level_2");
        me->delete_temp("level_3");
// 额外伤害力先加上臂力影响 by swy
// 加上 skills 里 damage 的值
// 我把 skills 里 damage 设定在 combatd.c 里面
// 一方面我可以不用改 skills 的 damage
// 另一方面可以防止有人动档案 by swy
// 没有 class npc 的 skills damage 以最高 700 来计算 by swy
// 没有 class ppl 的 skills damage 以最高 50 来计算 by swy
        damage_bonus = my["str"];
        class1=my["class"];
        divv=damage_div[class1];
        if(!divv && !userp(me) && action["damage"]) {
        divv=action["damage"];
                if(!divv) divv=100;
        if(divv>700) divv=700; }
        else if(!divv && !userp(me)) {
        divv=100; } else {
        if(!divv && userp(me)) divv=50;
        }
if(find_player("swy") && find_player("swy")->query("env/divv"))
tell_object(find_player("swy"),sprintf("damage=%d\n",divv));
        damage += divv;
// 敌人 busy 时防御力降 20% by swy
        if( victim->is_busy() ) dp=dp*4/5;

        //加入测试，action中设定dodge对于命中率的影响
        //dodge的范围是-100~100，设定-100的话就是这招必中无疑，躲都躲不掉
        //0的话就是此招中与不中完全由之前的公式决定，
        //正值则会增加敌人多躲掉这招的可能
        //方法先用类似上面自创招时dp的计算来决定 by bss
        //因为是测试，所以指定对像
        if(me->query("class")=="lancer" || wizardp(me))
        if(action["dodge"]){
          dodge_ratio=action["dodge"];
          if(dodge_ratio >0){
            while(dodge_ratio >100)//设定超过100的话就是设定错误
              dodge_ratio/=100; //所以先除100再说
            dp=dp+(dp*dodge_ratio)/100;
          }
          else{
            while(dodge_ratio < -100)//设定超过了-100就是设定错误
              dodge_ratio/=100; //所以先除100再说
            dodge_ratio=100-(100+dodge_ratio);
            dp=(dp*dodge_ratio)/100; //提高ratio的比率
            if(!dp) dp=1; //如果dodge设定是-100的话，给dp一个基本值1
          }
        }
// 命中率应该由 class 命中率 + 实战经验来判定 by swy
// 如果攻击方是 npc 又没有 class 设定为 500 by swy
// 如果防御方是 npc 又没有 class 设定为 500 by swy
class2=my["class"];
div1=hurt_div[class2];
if(userp(me) && !div1) div1=400;
if(!userp(me) && !div1) div1=500;
c1=(int)my["combat_exp"];
c2=(int)your["combat_exp"];
if(c1-c2<0) { div2=0; }
else if(c1-c2>=4000000) { div2=400; }
else if(c1-c2>=3000000) { div2=300; }
else if(c1-c2>=2000000) { div2=200; }
else if(c1-c2>=1000000) { div2=100; }
else { div2=50; }
div1_2=div1+div2;
if(div1_2>900) div1_2=900;
// 射手系统 part 1 by swy
// 射中左眼或右眼命中率减半  双眼都射重失明  命中率 = 0
// 当然合理    也是 doctor 才能医治
if(me->query_temp("over/r-eyes")==1&&me->query_temp("over/l-eyes")==1) {
div1_2=100;
tell_object(me,HIY"你双眼失明毫无中命率可言!\n"NOR);
} else if(me->query_temp("over/r-eyes")==1||me->query_temp("over/l-eyes")==1) {
div1_2 /= 2;
tell_object(me,HIG"你眼睛受伤命中率骤减一半!\n"NOR);
}
if(find_player("swy") && find_player("swy")->query("env/divv"))
tell_object(find_player("swy"),sprintf("hurt=%d\n",div1_2));
if(find_player("cgy") && find_player("cgy")->query("env/divv"))
tell_object(find_player("cgy"),sprintf("hurt=%d\n",div1_2));
            if(div1_2<random(1000)) {
            dodge_skill = victim->query_skill_mapped("dodge");
            if( !dodge_skill ) dodge_skill = "dodge";
            if (SKILL_D(dodge_skill)->query_dodge_msg(limb))
              result += SKILL_D(dodge_skill)->query_dodge_msg(limb);
            if( dp < ap && (!userp(victim) || !userp(me))
               && random(your["gin"]*100/your["max_gin"] + your["int"]) > 50 ) {
                    your["combat_exp"] += 1;
                    victim->improve_skill("dodge", 1);
            }
            damage = RESULT_DODGE;
        }
        else {
// 是否被招架开 by swy
            if( victim->query_temp("weapon") ) {
                    pp = skill_power(victim, "parry", SKILL_USAGE_OTHER);
                    pp = pp * 1.2;
            }
            else {
                    pp = skill_power(victim, "parry", SKILL_USAGE_OTHER);
            }
            class1=your["class"];
            if(!class1) divv=10;
            else
            divv=parry_div[class1];
            if(!divv) divv=10;
if(find_player("bss") && find_player("bss")->query("env/check_combat"))
tell_object(find_player("bss"),sprintf("divv=%d\n",divv));
if(find_player("swy") && find_player("swy")->query("env/divv"))
tell_object(find_player("swy"),sprintf("parry=%d\n",divv));
if(find_player("cgy") && find_player("cgy")->query("env/divv"))
tell_object(find_player("cgy"),sprintf("parry=%d\n",divv));
            if( victim->is_busy() )
            pp=pp/divv;
            else {
            ppp = (pp*10)/divv;
            pp=(pp+ppp)/2;
            }
            if( pp < 1 || !pp ) pp = 1;
// 增加parry message by Roger && Chan
// 说明:只有当我方手中有兵器或敌我都没兵器时才能招架
// 换句话说如果对方有兵器自己没拿就无法招架了
// 有武器时的parry_msg，但武者不管手中有无武器parry_msg 都一样 By Roger

            if( random(ap + pp) < pp ) {

                if( dp < ap && (!userp(victim) || !userp(me))
                   && random(your["gin"]*100/your["max_gin"] +
                      your["int"]) > 50 ) {
                         your["combat_exp"] += 1;
                         victim->improve_skill("parry", 1);
                }
            if( victim->query_temp("weapon") || your["class"]=="fighter" )
                {
                parry_skill = victim->query_skill_mapped("parry");
                if( !parry_skill )
                result += SKILL_D("parry")->query_parry_msg(weapon);
                else if (SKILL_D(parry_skill)->query_parry_msg(limb))
                result += SKILL_D(parry_skill)->query_parry_msg(limb);
                else result += SKILL_D("parry")->query_parry_msg(weapon);
// 反击架构 by swy
if((victim->query("class")=="bonze"||victim->query("class")=="bandit"||victim->query("id")=="swy")
&& victim->query_skill("counter",1)>random(200) && attack_type!=TYPE_QUICK) {
    victim->set_temp("can_contour",1); }
                } else if(!me->query_temp("weapon")&&!victim->query_temp("weapon")) {
                result += SKILL_D("parry")->query_parry_msg();
// 反击架构 by swy
if((victim->query("class")=="bonze"||victim->query("class")=="bandit"||victim->query("id")=="swy")
&& victim->query_skill("counter",1)>random(200) && attack_type!=TYPE_QUICK) {
    victim->set_temp("can_contour",1); }
                } else {
result += HIR+"$n没有"+HIW+"兵器"+HIR+"卸开敌人"+HIC+"武器"+HIR+"，因此中招受伤了。\n"+NOR;
victim->set_temp("no_weapon_parry",1); }
damage = RESULT_PARRY;
            } else {
// 打到敌人内力的影响 by swy
        if( my["force_factor"]>0 && my["force"]>=my["force_factor"]) {
                    my["force"] -= my["force_factor"];
                    fap = skill_power(me, "force");
                    fdp = skill_power(victim, "force");
// 有内力影响,被挡开
                    if( your["force_factor"] > 0 &&
                        random(fap + fdp) < fdp ) {
                            damage_bonus = 0;
                            result += "但是$N招式所含的内劲被$n的护身气劲所化解，";
                            if( fdp < random(fap) && userp(me) )
                                    victim->improve_skill("force", 1);
                    }
// 有内力影响, 打到了
                    else {
// 没有 class ppl 的 skills force 以最高 50 来计算 by swy
// 没有 class npc 的 skills force 以最高 700 来计算 by swy
class1=my["class"];
divv=force_div[class1];
if(!divv && !userp(me) && action["force"]) {
divv=action["force"];
if(!divv) divv=100;
if(divv>700) divv=700;
} else if(!divv && !userp(me)) {
divv=100;
} else { if(!divv && userp(me)) divv=50; }
if(find_player("swy") && find_player("swy")->query("env/divv"))
tell_object(find_player("swy"),sprintf("force=%d\n",divv));
damage_bonus+=(int)(my["force_factor"]*divv*0.15);
}
}

                if( damage_bonus > 0
                   && your["force_factor"] > 0
                   && your["force"] >= your["force_factor"] ) {
                      if( living(victim) ) result += "$N的内劲击溃了$n身上的护身真气，";
                      else                 result += "$n身上的真气自然地生出一股抗拒的气劲，";
                      power_dam = your["max_force"];
                      damage_bonus -= (power_dam / 10);
                      your["force"] -= your["force_factor"];
                    }

                damage_bonus -= (int)victim->query_temp("apply/armor_vs_force");
                damage_bonus -= (int)(dp/150);
                // =============================================================
                //    (6) Apply the damage bonus to the damage we'll inflict.
                //        把伤害值加上去
                //

                if( damage_bonus > 0 )
                damage += (int)damage_bonus;
                else damage = damage;

                if( attack_type == TYPE_QUICK )
                        damage += 100;

                // 优惠新玩家一天

                if( userp(me) )
                    if( me->query("mud_age") < 10800 ) {
                        damage += (int) my["str"];
                        message_vision(HIY "只见$N身旁环绕着一圈红光, "+
                                "$N的力量增强了!。\n" NOR, me);
                    }
                    else if( me->query("mud_age") < 11400 )
                        message_vision(HIY "$N身旁的红光渐渐暗淡下来, "+
                                "趋近于平淡。\n" NOR, me);
// 把伤害力加上攻击力,在减调防御力为新伤害力 by swy
damage += (ap/100);
damage -= (op/100);
if(userp(me)) {
damage=(int)damage;
} else { damage=(int)damage*0.85; }
if(damage<=0) damage=100;
if( victim->query_temp("losehurt")==1 )
{ damage=(int)(damage/2); }
                if (victim->query_temp("unsuck")==1)
                {
message_vision(HIY"\n‘金钟罩’十成功力，果然厉害，竟把$N加诸在$n的攻击全数反震回去。\n"NOR,me,victim);
                    me->add("kee",-(damage));
                    me->add("eff_kee",-(damage));
                    report_status(me);
                    if(damage > 0) damage=0;
                       victim->delete_temp("unsuck");
                }
                if (victim->query_temp("goldheal")==1)
                {
message_vision(HIY"\n只听见ㄎ_ㄧ_ㄤ一声，$N的攻势尽被$n的‘金钟罩’化去。\n"NOR,me,victim);
                  if(damage > 30) damage=30;
                     victim->delete_temp("goldheal");
                }
           if (me->query_temp("powerup")==1 ) {
                    damage += 250;
                }
                    if (me->query_temp("keeup")==1 ) {
                    damage = damage*3/4;
                }
// 修正增加机率 by swy
c1=(int)my["combat_exp"];
c2=(int)your["combat_exp"];
if(c1-c2<0) { div2=0; }
else if(c1-c2>=4000000) { div2=40; }
else if(c1-c2>=3000000) { div2=30; }
else if(c1-c2>=2000000) { div2=20; }
else if(c1-c2>=1000000) { div2=10; }
else { div2=5; }
div1_2=90-div2;
if(div1_2<50) div1_2=50;
if(div1_2>random(100)) {
if ( victim->query_temp("ref_shield")==1)
{
message_vision(HIC"\n玄冰结界"HIM"将$N的攻击完全的反弹回去!!\n"NOR,me,victim);
                me->receive_damage("kee",(damage),victim);
                me->receive_wound("kee",(damage),victim);
                if(damage > 0) damage=0;
                report_status(me,1);
                }
}
// dancer manashield 叙述
if ( victim->query_temp("mana_shield")==1)//dancer
{
message_vision(HIW"\n幻梦之翼隐约而现，柔若棉絮，轻轻地将$N攻击化归于无形!!\n"NOR,me,victim);
                if(damage > 0) damage=damage/2;
				report_status(victim,1);
                }
if ( victim->query_temp("mana_shield2")==1)//non dancer
{
message_vision(HIY"\n幻梦之翼隐约而现，柔若棉絮，轻轻地将$N攻击减弱不少!!\n"NOR,me,victim);
                if(damage > 0) damage=damage*2;
				report_status(victim,1);
                }
if ( victim->query_temp("mana_shield3")==1)//fighter,prayer
{
message_vision(HIY"\n幻梦之翼隐约而现，柔若棉絮，轻轻地将$N攻击减弱不少!!\n"NOR,me,victim);
                if(damage > 0) damage=damage*4;
                report_status(victim,1);
                }
if ( victim->query_temp("mana_shield4")==1)//mblade
{
message_vision(HIY"\n幻梦之翼隐约而现，柔若棉絮，轻轻地将$N攻击减弱不少!!\n"NOR,me,victim);
                if(damage > 0) damage=damage*8;
                report_status(victim,1);
                }

                        //power_down......by cgy....
if (me->query_temp("power-down")>=1)
{
 pod=me->query_temp("power-down");
 if (pod>16) {damage=damage/10;}
 if (pod>14&&pod<17) {damage=damage/5;}
 if (pod>12&&pod<15) {damage=damage*3/10;}
 if (pod>10&&pod<13) {damage=damage*4/10;}
 if (pod>8&&pod<11) {damage=damage*5/10;}
 if (pod>6&&pod<9) {damage=damage*6/10;}
 if (pod>4&&pod<7) {damage=damage*7/10;}
 if (pod>2&&pod<5) {damage=damage*8/10;}
 if (pod>0&&pod<3) {damage=damage*9/10;}
 }
 if (victim->query_temp("rainbow-steps")==1 && random((int)victim->query("functions/rainbow-steps/level",1))>60)
 {
  message_vision(HIY"\n$n"NOR"使出月影微步终极舞步"HIW"～"HIM"七彩幻梦"NOR",手中七彩缎带幻成一道彩虹射向"HIB"$N！\n"NOR,me,victim);
  message_vision(HIY"                $n"HIR"其本身如"HIG"灵蛇欺敌般的躲过"HIY"$N"HIR"的凌厉攻击。。\n"NOR,me,victim);
  if(damage > 0) damage=0;
 }
 if (victim->query_temp("snake-steps")==1 && random((int)victim->query("functions/snake-steps/level",1))>70)
 {
  message_vision(HIC"\n$n"HIR"身影幻化万千向四方流窜,形影迷离令"HIY"$N"HIR"的攻势狂击残影。！\n"NOR,me,victim);
  message_vision(HIG"  结果「嗤”地一声，七彩光芒从"HIB"$N"HIG"的身上穿透而出, 令"HIB"$N"HIG"迷失景象。\n"NOR,me,victim);
  message_vision(HIY"                $n"HIC"趁机闪过"HIB"$N"HIC"凶猛的攻击。\n"NOR,me,victim);
  if(damage > 0) damage=0;
 }
 if (victim->query_temp("adv-dodge")==1)
 {
  message_vision(HIY"\n$n使出"HIG"☆侠影步☆"HIY"以迅捷无比的速度闪过$N的攻击并赞上一击将$N重创。\n"NOR,me,victim);
  me->add("kee",-(damage));
  report_status(me);
  if(damage > 0) damage=0;
 }
       if(me->query_temp("kang-power")==1) {
message_vision(HIW"$N的‘烈焰浩气’聚气于力，使$N的威力增加不少。\n"NOR,me);
 damage += 350;
}
                if (victim->query_temp("hardshell") ) {
                  if( damage > 10 ) damage = 10;
                }
                if(victim->query_temp("hwa_je")){
                  if(damage >0) damage=0;
                }
                if (me->query_temp("addpower")==1)
                {
                  damage += 1500;
                  me->delete_temp("addpower");
                }
                if (me->query("mpower")) {
                  damage += 300;
                }
// 发现一个 bug 自创招式对 fighter 没用反而减低 damage
// 但是对其他门派却有天壤之别 如果一般 class damage 有 1000
// 那 1000 * my_skill_power 会很可怕   因为 my_skill_power 最高可以 8
// 那 1000 * 8 = 8000 不就等于叫 fighter 去死吗
// 不过为了奖励加个 100 就好了     by swy
                if(me->query("env/my_skill")) {
                  damage=damage+100;
                 } else {
                 if(userp(me) && userp(victim)) { damage = damage; }
                 else { damage=(int)damage*0.85; } }
// 射手系统 part 2  by swy
// 射中右或左手 damage 减半  射中左右手 damage = 0
// 左右手都受伤当然没威力  很合理   要把伤治愈打算给 doctor 此功能
if(me->query_temp("over/right")==1&&me->query_temp("over/left")==1) {
damage=30;
tell_object(me,HIC"你双手受伤毫无伤害力可言!\n"NOR);
} else if(me->query_temp("over/right")==1||me->query_temp("over/left")==1) {
damage /= 2;
tell_object(me,HIR"你手受伤伤害力骤减一半!\n"NOR);
}
if(find_player("swy") && find_player("swy")->query("env/divv"))
tell_object(find_player("swy"),sprintf("all=%d\n",damage));
if(find_player("cgy") && find_player("cgy")->query("env/divv"))
tell_object(find_player("cgy"),sprintf("all=%d\n",damage));
                victim->set_temp("no_armor_effect",1);
                result += damage_msg(damage, action["damage_type"]);
//2001.11.1 下面的部分 杀手的第四阶段进阶 幻之忍杀的专属技巧 分影术的动作
//	    发动机率是写在dodge那边，发动之后就会有%让damage变0
//2002.04.04 修正逻辑上的错误
 if (victim->query_temp("shadowfun") > 0)
 {
      switch ( victim->query("dark-steps/shadow/lv") )
      {
      	case 0..10 : //50%
      		if (random (100) > 50)
      		{
  message_vision(HIW"\n$n 按照五行八卦的步法，在整个空间中幻化出无限的身影,"HIY"$N"HIW"根本无从攻击起。！\n"NOR,me,victim);
      		  damage = 0;      		
      		}
      		break;
      	case 11..40 : //60%
      		if (random (100) > 40)
      		{
  message_vision(HIW"\n$n 按照五行八卦的步法，在整个空间中幻化出无限的身影,"HIY"$N"HIW"根本无从攻击起。！\n"NOR,me,victim);
  message_vision(HIW"$N 疯狂的往幻影攻击而去,$n丝毫有受到一点伤害。\n"NOR,me,victim);
  			me->receive_damage("gin", 150 , victim );
      			damage = 0;
      		}
      		break;
      	case 41..70 :
      		if (random (100) > 30)
      		{
  message_vision(HIW"\n$n 按照五行八卦的步法，在整个空间中幻化出无限的身影,"HIY"$N"HIW"根本无从攻击起。！\n"NOR,me,victim);
  message_vision(HIW"$N 疯狂的往幻影攻击而去,$n丝毫没有受到一点伤害。\n"NOR,me,victim);
  			me->receive_damage("gin", random(150)+150 , victim );
      			damage = 0;
      		}
      		break;
      	case 71..100:
      		if (random (100) > 20)
      		{
  message_vision(HIW"\n$n 按照五行八卦的步法，在整个空间中幻化出无限的身影,"HIY"$N"HIW"根本无从攻击起。！\n"NOR,me,victim);
  message_vision(HIW"光影不断的在"HIG"$N"HIW"的身边环绕, 令"HIG"$N"HIW"感到无限的恐惧\n"NOR,me,victim);
  message_vision(HIR"$n"HIW"所使出的分影术，让"HIG"$N"HIW"根本不知道如何发动攻势。\n"NOR,me,victim);
  			me->receive_damage("gin", random(250)+150 , victim );
  			me->start_busy(1);
      			damage = 0;
      		}
      		break;
      	case 101..150: //专家级，只有特殊奖励，才可以升到此级
      		if (random (100) > 10)
      		{
  message_vision(HIW"\n$n 按照五行八卦的步法，在整个空间中幻化出无限的身影,"HIY"$N"HIW"根本无从攻击起。！\n"NOR,me,victim);
  message_vision(HIW"光影不断的在"HIG"$N"HIW"的身边环绕, 令"HIG"$N"HIW"感到无限的恐惧\n"NOR,me,victim);
  message_vision(HIR"$n"HIW"所使出的分影术，让"HIG"$N"HIW"根本不知道如何发动攻势。\n"NOR,me,victim);
  message_vision(HIW"$N 疯狂的往幻影攻击而去,$n丝毫没有受到一点伤害。\n"NOR,me,victim);
  			me->receive_damage("gin", random(400)+150 , victim );
  			me->start_busy(1);
      			damage = 0;
      		}
      		break;
      	default: //巫师才有可能这一级
      		me->receive_damage("gin", random(1999)+600 , victim );
  		me->start_busy(2);
      		damage =0;
      }
      //不管有没有发动成功，都要扣掉
      victim->add_temp("shadowfun",-1);
 }


// 我觉得照 class 特色 swordsman and blademan 可以伤最大值
// 所以我调整 swordsman and blademan 素招就能伤害最大值 by swy
if(me->query("class")=="swordsman" || me->query("class")=="blademan") {
                damage = victim->receive_wound("kee",damage,me); } else {
                damage = victim->receive_damage("kee", damage, me ); }

                if( weapon ) weapon->hit_ob(victim, damage);
                else me->hit_ob(victim, damage);

                // Gain combat_exp.

                if( ap < dp && (!userp(me) || !userp(victim))
                   && random(my["gin"]*100/my["max_gin"] + my["int"]) > 30 ) {
                      my["combat_exp"] += 1;
                      my["potential"] += 1;
                      me->improve_skill(attack_skill, 1);
                }

                if( (!userp(me) || !userp(victim))
                   && random(your["max_kee"] + your["kee"]) < damage ) {
                      your["combat_exp"] += 1;
                      your["potential"] += 1;
                }
                }
                }
        result = replace_string( result, "$l", limb );

        if( objectp(weapon) ) {
                result = replace_string( result, "$w", weapon->name() );
                if( weapon->query("can_hold") )
                        arrow_path = weapon->query("arrow/path");
                if( stringp(arrow_path) )
                        result= replace_string( result, "$c",arrow_path->name() );
        }
        else if( stringp(action["weapon"]) )
                result = replace_string( result, "$w", action["weapon"] );




        bssone=sizeof(result);
        if(bssone >=8192)
        {
                rstrtwo=result[8000..(bssone-1)];
                rstrone=result[0..7999];
                message_vision(rstrone,me,victim);
                message_vision(rstrtwo,me,victim);
        }

        else {
        message_vision(result, me, victim );
        }
        if( damage > 0 ) report_status(victim);
        if( damage > 0 ) report_kee(victim);
// 武者自动冲封穴系统 by swy 请 wiz 别把条件说出去 thx
if(!userp(me)) cmexp=(int)me->query("combat_exp")/2;
else cmexp=(int)me->query("combat_exp")*4/5;
// 1.先检查是否为 ppl
if(userp(victim)
// 2.再检查 exp
&& random(cmexp)<random(victim->query("combat_exp"))
// 3.检查是否 busy
&& victim->is_busy()
// 4.再检查内功等级高低
&& me->query_skill("force")<victim->query_skill("force")
// 5.再检查要冲穴所需的真气值(因为真气可 bet 所以设高一点)
&& victim->query("force")>5000
// 6.再检查机率
&& random(100)>50
// 7.检查会冲穴的 exp 限制
&& victim->query("combat_exp")>3000000
// 8.多加一个想用再用的条件
&& victim->query("env/冲穴")=="YES"
// 9.最后检查要 fighter
&& victim->query("class")=="fighter") {
message_vision(HIW"\n只见$N暴起所有"HIY"真气内劲"HIW"，$N全身陇罩在一股"HIC"绽蓝气劲"HIW"中，赫然已解开身上被封的穴道。\n"NOR,victim);
message_vision(HIW"$N惊愕之时，$n聚集所有"HIY"真气内劲"HIW"，把$N陇罩在一股"HIC"绽蓝气劲"HIW"中，$N受到强大气劲压迫行动受阻。\n"NOR,me,victim);
victim->delete_busy();
me->start_busy(1);
if(victim->query("force")>5000) { victim->add("force",-5000); }
else { victim->set("force",0); }
}
if(victim->query_temp("no_weapon_parry")==1&&victim->query("kee")>0) {
victim->receive_damage("kee",250,me);
victim->delete_temp("no_weapon_parry"); }
if( victim->query_temp("can_contour")==1 ) {
message_vision(HIW"\n$N使出"HIR"霸王卸甲"HIW"藉由招架$n攻击之时，全神贯注趁机发动反击！\n"NOR,victim,me);
do_attack(victim, me, victim->query_temp("weapon"));
victim->delete_temp("can_contour");
}
      if(!me->query("env/my_skill")) {    //修正使用自己的招式时..不出现原有招式的特功!!!!
   if(me->query("force") > 1) {
        if( functionp(action["post_action"]) )
               evaluate( action["post_action"], me, victim, weapon, damage);

        action = me->query("force_actions");

        if( mapp(action) )
            if( functionp(action["post_action"]) )
                   evaluate( action["post_action"], me, victim, weapon, damage);
} else tell_object(me,"[1;36m你的内力不足以驱动武学附加攻击![0m");
     }//以上
        action = me->query("weapon_actions");  //武器的部份!!!!

        if( mapp(action) )
            if( functionp(action["post_action"]) )
                   evaluate( action["post_action"], me, victim, weapon, damage);


        // Add By Oda 96/7/11
        // 如果玩家组 team 打 mob 的时候, 人际关系会增加
        if( pointerp(t=me->query_team()) ) {
                if( me->is_team_leader() ) {
                        for( i=1; i<sizeof(t); i++ )
                             if(t[i])
                                me->add("人际关系/"+t[i]->query("id"),1);
                } else
                         if(t[0])
                        me->add("人际关系/"+t[0]->query("id"),1);
        }

        // See if the victim can make a riposte.

        if( attack_type==TYPE_REGULAR
           && damage < 1
           && victim->query_temp("guarding") ) {
                 victim->set_temp("guarding", 0);
                 if( random(my["cps"]) < 10 ) {
                     message_vision("$N一击不中，露出了破绽！\n", me);
                     do_attack(victim, me, victim->query_temp("weapon"), TYPE_QUICK);
                  }
                  else {
                     message_vision("$N见$n攻击失误，趁机发动攻击！\n", victim, me);
                     do_attack(victim, me, victim->query_temp("weapon"), TYPE_RIPOSTE);
                  }
        }
}

//      fight()
//
//      This is called in the attack() defined in F_ATTACK, which handles fighting
//      in the heart_beat() of all livings. Be sure to optimize it carefully.
//
void fight(object me, object victim)
{
        object ob;
        int i;
        if( !living(me) ) return;
        if (!me->visible(victim)
        && (random(100 + (int)me->query_skill("perception")) < 100) )
                return;
        // If victim is busy or unconcious, always take the chance to
        //   make an attack.
        if( victim->is_busy() || !living(victim) ) {
            me->set_temp("guarding", 0);
            do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
        } else if(me->query("class")=="swordsman"&&victim->query("class")!="swordsman"
                  && !me->query_temp("delay_fight"))
        {
          me->set_temp("guarding", 0);
          me->set_temp("delay_fight",1);
          do_attack(me, victim, me->query_temp("weapon"));
        } else if(me->query("class")!="swordsman"&&victim->query("class")=="swordsman"
                  && !victim->query_temp("delay_fight"))
        {
          me->set_temp("guarding", 0);
          victim->set_temp("delay_fight",1);
          do_attack(victim, me, victim->query_temp("weapon"));
        } else if( random( (int)victim->query("cps") * 3 ) <
          ((int)me->query("cor") + (int)me->query("bellicosity") / 50) )
        {
                me->set_temp("guarding", 0);
                do_attack(me, victim, me->query_temp("weapon"), TYPE_REGULAR);
        // Else, we just start guarding.
        } else if( me->query_temp("guarding")==0 ) {
                me->set_temp("guarding", 1);
                message_vision( guard_msg[random(sizeof(guard_msg))], me, victim);
                return;
        } else return;

        // Make sure the victim had noticed the attack.
        if( !victim->is_fighting(me) ) victim->fight_ob(me);
}

//      auto_fight()
//      This function is to start an automatically fight. Currently this is
//      used in "aggressive", "vendetta", "hatred", "berserk" fight.
void auto_fight( object me, object obj, string type )
{
        // Don't let NPC autofight NPC.
        if( !userp(me) && !userp(obj) ) return;

        // Because most of the cases that we cannot start a fight cannot be checked
        // before we really call the kill_ob(), so we just make sure we have no
        // aggressive callout wating here.
        if( me->query_temp("looking_for_trouble") ) return;
        me->set_temp("looking_for_trouble", 1);

        // This call_out gives victim a chance to slip trough the fierce guys.

if( me->query("id") == "konni" )
tell_object(find_player("konni"), me->query("id") +" "+ type+"\n");
        call_out( "start_" + type, 0, me, obj);
}

void start_berserk(object me, object obj)
{
        int bellicosity;

        if( !me ) return;                               // Are we still exist( not becoming a corpse )?

        me->delete_temp("looking_for_trouble");
        if( !obj ) return;

        if(     me->is_fighting(obj)                            // Are we busy fighting?
        ||      !living(me)                                                     // Are we capable for a fight?
        ||      environment(me)!=environment(obj)       // Are we still in the same room?
        ||      environment(me)->query("no_fight")      // Are we in a peace room?
)       return;

        bellicosity = (int)me->query("bellicosity");
        if(!wizardp(me)) {
                message_vision("$N用一种异样的眼神扫视着在场的每一个人。\n", me);
        }

        if( (int)me->query("force") > (random(bellicosity) + bellicosity)/2 )
                return;

        // 修改一下为不会砍马  但其他的mob照砍  By Swy
        if( bellicosity > (int)obj->query("score") && !wizardp(obj) && living(obj) ) {
                message_vision( "$N对着$n喝道：" + RANK_D->query_self_rude(me)
                        + "看你实在很不顺眼，去死吧。\n", me, obj);
                me->kill_ob(obj);
        }
        else {
                message_vision( "$n的正义之气散发全身, 使$N不敢侵犯伤害$n。\n", me, obj );
        }
}

void start_hatred(object me, object obj)
{
        if( !me ) return;                               // Are we still exist( not becoming a corpse )?

        me->delete_temp("looking_for_trouble");
        if( !obj ) return;

        if(     me->is_fighting(obj)                            // Are we busy fighting?
        ||      !living(me)                                                     // Are we capable for a fight?
        ||      environment(me)!=environment(obj)       // Are we still in the same room?
        ||      environment(me)->query("no_fight")      // Are we in a peace room?
        )       return;

        // We found our hatred! Charge!
        message_vision( catch_hunt_msg[random(sizeof(catch_hunt_msg))], me, obj);
        me->kill_ob(obj);
}

void start_vendetta(object me, object obj)
{
        if( !me ) return;                               // Are we still exist( not becoming a corpse )?

        me->delete_temp("looking_for_trouble");
        if( !obj ) return;

        if(     me->is_fighting(obj)                            // Are we busy fighting?
        ||      !living(me)                                                     // Are we capable for a fight?
        ||      environment(me)!=environment(obj)       // Are we still in the same room?
        ||      environment(me)->query("no_fight")      // Are we in a peace room?
        )       return;

        // We found our vendetta opponent! Charge!
        me->kill_ob(obj);
}

void start_aggressive(object me, object obj)
{
        if( !me ) return;                               // Are we still exist( not becoming a corpse )?

        me->delete_temp("looking_for_trouble");
        if( !obj ) return;

        if(     me->is_fighting(obj)                            // Are we busy fighting?
        ||      !living(me)                                                     // Are we capable for a fight?
        ||      environment(me)!=environment(obj)       // Are we still in the same room?
        ||      environment(me)->query("no_fight")      // Are we in a peace room?
        )       return;

        // We got a nice victim! Kill him/her/it!!!
        me->kill_ob(obj);
}

// This function is to announce the special events of the combat.
// This should be moved to another daemon in the future.
void announce(object ob, string event)
{
  // 可以在 npc 身上设 set_temp("die","xxxxxxx");
  // 或 set_temp("die",(: die_msg :) );
  // 这样在 npc 死后会显示该讯息。
  // 不过，也 可以透过物件的 void init() 来设定。
  // added by wade 87/9/9
  mixed die_msg;

	switch(event) {
	case "dead" :
		if( !undefinedp( die_msg = ob->query_temp("die") ) ) {
			if( stringp(die_msg) )
				message( "sound", die_msg, environment (ob) );
			else if( functionp(die_msg) )
				evaluate(die_msg);
		}
		else
  // 到这行前都是增加进来的
			message_vision("\n$N死了。\n\n", ob);
      break;
    case "unconcious":
      message_vision("$N脚下一个不稳，跌在地上一动也不动了。\n\n", ob);
      break;
    case "revive":
      message_vision("\n$N慢慢睁开眼睛，清醒了过来。\n\n", ob);
      break;
  }
}

void killing (object who)
{
  object        where, cop_head;

  where = environment (who);

  if (!cop_head=find_living("cop head"))
    if (cop_head = new(COP_HEAD))
      cop_head->move(where);
  else
    if (!cop_head->is_fighting()) cop_head->move(where);
}

void winner_reward(object killer, object victim)
{
        killer->defeated_enemy(victim);
}

void killer_reward(object killer, object victim)
{
//PK的部份重新改写 by Chan 9/18/98
        int bls,pktime,pkmoney;
        string vmark,pktitle,death_str;

        // Call the mudlib killer apply.
        if (victim)
          killer->killed_enemy(victim);
        else
          killer->killed_enemy(killer);

        if( userp(victim) ) { //死的人是player的话.....以下做
         if(userp(killer)) //killer是玩家才执行下面的
          {
           if((!victim->query("pker"))&&(!victim->query("ckill")))
           { //杀死的人是pker或ckill的话就不算pk
             if(killer->query("id")!=victim->query("id"))
             {//自己杀死自己不算pk
               // pk设定的部份 by Chan
               pktime = 1800; //设定三十分钟不能离线 by chan
               pktime += time();//算出系统时间+三十分钟 by chan
               killer->set("PKTIME",pktime);  //把时间设为永久储存的by bss
               if(!killer->query("pker"))
               { //如此设法是怕第二次pk..把好的title给盖了 by chan 11/24
                 pktitle=killer->query("title");
                 killer->set("PKNAME",pktitle);
               }
                killer->set("title",HIR"杀人凶手"NOR);
                tell_room(killer,HIR"你杀了线上玩家,成了杀人凶手了。\n"NOR);
                killer->set("pker",1);
             }
             killer->add("PKS", 1);
             // by ACKY
             if( victim->query("combat_exp")>=3000000 )
             killer->add("HKS", 1);
           }
           else{
            pkmoney=victim->query("combat_exp");//根据pker的exp给予kill
            pkmoney=pkmoney*10;//如果是exp一百万就是1000 gold
            killer->add("coin",pkmoney);//pker的人钱
            tell_room(killer,HIW"你为民除害,杀了杀人凶手,得到了一笔酬金。\n"NOR);
            }//pker死后就不算pker及解除追缉状态
          }
                // modify by oda, pk 玩家不加杀气
                // bls = 10;
                bls = 0;

	switch( random(5) ) { // by ACKY
	case 1:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "狂笑说:「可怜的%s, 回家向你的母亲哭诉吧。”", victim->name(1) ) );
		break;
	case 2:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "耻笑着:「无能的%s, 你还有胆来一次吗?”", victim->name(1) ) );
		break;
	case 3:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "高喊着:「哇哈哈, 有谁愿意帮%s收尸啊!”", victim->name(1) ) );
		break;
	case 4:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "大笑着:「天底下居然还有像%s这么自不量力的人!”", victim->name(1) ) );
		break;
	case 5:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "狂笑说:「看着%s鲜血乱喷, 真是一种无上的享受!”", victim->name(1) ) );
		break;
	case 6:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "大喊着:「%s, 我还可以再杀你一次, 只要你敢来的话!”", victim->name(1) ) );
		break;
	default:
		CHANNEL_D->do_channel( killer, "dead",
			sprintf( "狂笑着:「哇哈哈, 我随随便便就把%s杀掉了！”", victim->name(1) ) );
	}

	death_str="";
    death_str=victim->query("id")+victim->name(1)+"被"+killer->query("id")+killer->name(1)+"所杀在"+ctime(time())+sprintf("有%d个替身!!\n",victim->query("standby"));
                 write_file("/open/death/death_record",death_str);
        }
        else {
                killer->add( "MKS", 1 );
                if( victim->query("combat_exp")>=10000000 )
                        killer->add( "HKS", 1 );
                bls = 1;
        }

        killer->add("bellicosity", bls );

        if( stringp(vmark = victim->query("vendetta_mark")) )
                killer->add("vendetta/" + vmark, 1);
}

//因为有起死回生之术了，所以人死扣值必需是在黑白无常送人回人间时扣
//我把扣值的部份写在这 by bss
int death_effect(object victim)
{
    string pktitle;
   if(!victim) return 0;
    if(victim->query("pker")) //死的人是杀人犯，pker的exp扣二次....
    {
      pktitle=victim->query("PKNAME"); //把title给送回来...
      victim->set("title",pktitle);
      victim->skill_death_penalty();
      victim->add("combat_exp", -(int)victim->query("combat_exp") / 10);
    }
    victim->set("pker",0);
    victim->delete("ckill");
    victim->delete("ckill_id"); //取消ckill所设的....by chan
    victim->set("PKTIME",0);
    //killer不是char的部份做以上的事情...
    //死的人是player也是上面在处理.....
    victim->clear_condition();
    victim->set_temp("snow-powerup",0);
    // Give the death penalty to the dying user.
    victim->set("bellicosity", 0);
    victim->add("combat_exp", -(int)victim->query("combat_exp") / 10);
    victim->delete("vendetta");
    if( (int)victim->query("potential") > (int)victim->query("learned_points"))
             victim->add("potential",
                    ((int)victim->query("learned_points") - (int)victim->query("potential"))/10 );
    victim->skill_death_penalty();
    return 1;
}



//
// 用来写auto_size 的mob 之用
// modified by konn
//
int auto_size(object mob, object mob_2)
{
        object weapon = mob_2->query_temp("weapon");
        string skill, m_skill;
        int exp, gin, kee, sen, force, mana, atman, f_fac, m_fac, a_fac;
        int lv_1, lv_2, apply;

/*
        if( weapon ) skill = weapon->query("skill_type");
        else skill = "unarmed";

        lv_1 = mob_2->query_skill(skill, 1);
        m_skill = mob_2->query_skill_mapped(skill);
        if( m_skill )
            lv_2 = mob_2->query_skill(m_skill, 1);

        lv_1 = (int) lv_1;
        lv_2 = (int) lv_2;
        mob->set_skill("unarmed", lv_1);
        mob->set_skill("hell-evil", lv_2);

        lv_1 = mob_2->query("dodge", 1);
        lv_1 = (int) lv_1;
        mob->set_skill("dodge", lv_1);

        lv_1 = mob_2->query("parry", 1);
        lv_1 = (int) lv_1;
        mob->set_skill("parry", lv_1);

        apply = mob_2->query_temp("apply/damage");
        mob->set_temp("apply/damage", apply);
        apply = mob_2->query_temp("apply/armor");
        mob->set_temp("apply/armor", apply);

        exp = (int) 1.5 * mob_2->query("combat_exp");
        gin = 2 * mob_2->query("max_gin");
        kee = 2 * mob_2->query("max_kee");
        sen = 2 * mob_2->query("max_sen");
        force = 2 * mob_2->query("max_force");
        mana = 2 * mob_2->query("max_mana");
        atman = 2 * mob_2->query("max_atman");
        f_fac = (int) mob_2->query("force_factor");
        m_fac = (int) mob_2->query("mana_factor");
        a_fac = (int) mob_2->query("atman_factor");

        mob->set("combat_exp", exp);
        mob->set("gin", gin);
        mob->set("max_gin", gin);
        mob->set("kee", kee);
        mob->set("max_kee", kee);
        mob->set("sen", sen);
        mob->set("max_sen", sen);
        mob->set("force", force);
        mob->set("max_force", force);
        mob->set("mana", mana);
        mob->set("max_mana", mana);
        mob->set("atman", atman);
        mob->set("max_atman", atman);
        mob->set("force_factor", f_fac);
        mob->set("mana_factor", m_fac);
        mob->set("atman_factor", a_fac);

        mob->delete("auto_size");

        if( mob_2->is_character()     &&
            !wizardp(mob_2)           &&
            !mob_2->query("evil_mob")    ) {
            mob->kill_ob(mob_2);
            mob_2->kill_ob(mob);
        }

        mob->setup();
*/
        return 1;
}
