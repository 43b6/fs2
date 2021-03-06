// 灵刀 by swy
// 做了一些bug的修正，在攻击的action中，常常会抓不到对方
// 而让刀失去了心跳，所以修正了一下，若还有其他情形，则会
// 再持续观察修正，因为刀失去心跳，npc也会跟着失去心跳，而
// 且蛮严重的，所以先做了修正，加注于此。 by Neverend 2001/10/14
#include <weapon.h>
#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;
inherit BLADE;
object ob=this_object();
object me=this_player();
object wname;
object wna;
int mkfun;
void create()
{
        set_name("阴灵刀",({"mk-blade"}));
        set_weight(100);
        if( clonep() )
        set_default_object(__FILE__);
        else 
        {
        set("unit","把");
        set("long","一把由内劲与邪气与阴灵所制成的刀。\n");
        set("value", 0 );
        set("material","crimsonsteel");
        set("wield_msg","$N聚气凝神内劲一放，顿时阴灵聚集，手中多了一把刀身透明的$n。\n");
        set("unwield_msg","$N内劲一收，顿时阴灵飞散，手中的$n也消失无踪。\n");
        set("no_sell",1);
        set("no_give",1);
	set("no_save",1);
        set("no_get",1);
        set("no_put",1);
        set("no_auc",1);
        }
        init_blade(1,SECONDARY);
        setup();
}       
void init()
{
object wa=present("mk-blade",me);
if( wa ) {
// 第一层 加刀型
add_action("do_blade","addblade");
// 第二层 伤害型
add_action("do_hurt","hurtkee");
// 第三层 busy型
add_action("do_busy","busy");
// 第四层 heal型
add_action("do_heal","healup");
// 第五层 enfo型
add_action("do_enforce","enfup");
// 第六层 攻防型
add_action("do_power","powerup");
// 第七层 属性型
add_action("do_basic","addbasic");
// 第八层 伤减型
add_action("do_lose","losehurt");
// 第九层 毁器型
add_action("do_bad","badup");
// 第十层 必杀型
add_action("do_die","dieup");
}
}

int do_blade()
{
        int fun = me->query("functions/addblade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("请把武器装备上。\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("此刀要装备在副武器才有功效。\n");
        if( me->query("force") < 600 )
        return notify_fail("你的内力不够。\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("你的杀气不够。\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("你的潜能不足以用刀。\n");
        if( me->is_fighting() )
        return notify_fail("战斗中不能使用。\n");
        if( me->query_temp("addblade") == 1 )
        return notify_fail("刀之血气还在你身上游走。\n");
message_vision(HIY"$N手握"+wname->name()+HIY"，突然一股无穷的力量流入体内。\n"NOR,me);
message_vision(HIY"$N觉的刀法提升了不少。\n"NOR,me);
        me->add_temp("apply/blade",fun+20);
        me->set_temp("addblade",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delblade",fun+10,me);
        return 1;
}

int delblade()
{
        int fun = me->query("functions/addblade/level");
        if(me) {
        me->delete_temp("addblade");
        me->add_temp("apply/blade",-(fun+20));
        message_vision(HIW"$N觉的刀的血气消失了。\n"NOR,me);
        if(fun<100) { function_improved("addblade",random(700)); }
        }
        return 1;
}

int do_hurt()
{
        object *enemy;
        int i,j,fun;
        fun = me->query("functions/hurtkee/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("请把武器装备上。\n");
        if( mkfun <= 10 )
        return notify_fail("你的邪灵制刀术还没到能使用这功效的等级。\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("此刀要装备在副武器才有功效。\n");
        if( me->query("force") < 600 )
        return notify_fail("你的内力不够。\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("你的杀气不够。\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("你的潜能不足以用刀。\n");
        if( !me->is_fighting() )
        return notify_fail("要战斗中才能使用。\n");
        enemy=me->query_enemy();
        i=sizeof(enemy);
        if(!enemy)
        return notify_fail("没有敌人可以杀。\n");
        if( me->query_temp("hurtkee") == 1 )
        return notify_fail("你的刀还没吸满血气，再等一下吧。\n");
message_vision(HIR"就在$N手持"+wname->name()+HIR"奋力杀敌时，手中刀身突然地颤抖。\n"NOR,me);
        for(j=0;j<i;j++) {
        if(!enemy[j]) continue;
        if( (fun*2)+20 > random(250) ) {
message_vision(HIR"此刀竟汇集血气形成血龙，往$N身上啃嗜而去。\n"NOR,enemy[j]);
        enemy[j]->add("kee",-((fun*12)+350));
        enemy[j]->apply_condition("bleeding",15);
        COMBAT_D->report_status(enemy[j]);
        } else message_vision(HIW"只见$N起身一跳，惊险的闪避血龙。\n"NOR,enemy[j]);
        }
        me->set_temp("hurtkee",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delhurt",7,me);
        return 1;
}

int delhurt()
{
        int fun = me->query("functions/hurtkee/level");
        if(me) {
        me->delete_temp("hurtkee");
        if(fun<100) { function_improved("hurtkee",random(700)); }
        }
        return 1;
}

int do_busy()
{
        object *enemy;
        int i,j,fun,k;
        fun = me->query("functions/busy/level");
        mkfun = me->query("functions/mk-blade/level");

	if( fun <= 35 )
		k = 1;
	else if( fun >= 36 && fun <= 70 )
		k = 2;
	else if( fun >= 71 )
		k = 3;

        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("请把武器装备上。\n");
        if( mkfun <= 20 )
        return notify_fail("你的邪灵制刀术还没到能使用这功效的等级。\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("此刀要装备在副武器才有功效。\n");
        if( me->query("force") < 600 )
        return notify_fail("你的内力不够。\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("你的杀气不够。\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("你的潜能不足以用刀。\n");
        if( !me->is_fighting() )
        return notify_fail("要战斗中才能使用。\n");
        enemy=me->query_enemy();
        i=sizeof(enemy);
        if(!enemy)
        return notify_fail("没有敌人可以杀。\n");
      if( me->query_temp("addbusy") == 1 )
        return notify_fail("你的刀还没吸满血气，再等一下吧。\n");
message_vision(HIR"就在$N手持"+wname->name()+HIR"奋力杀敌时，手中刀身突然地颤抖。\n"NOR,me);
        for(j=0;j<i;j++) {
        if(!enemy[j]) continue;
        if( (fun*2)+20 > random(250) ) {
        if( !enemy[j]->is_busy() ) {
message_vision(HIR"此刀竟吸收敌人血气形成血网，封闭了$N的行动。\n"NOR,enemy[j]);
        enemy[j]->start_busy(k);
        COMBAT_D->report_status(enemy[j]);
        } else message_vision(HIW"只见$N怒吼一声发劲抵挡，血网顿时被毁坏殆尽。\n"NOR,enemy[j]);
        } else message_vision(HIW"只见$N怒吼一声发劲抵挡，血网顿时被毁坏殆尽。\n"NOR,enemy[j]);
        }
        me->set_temp("addbusy",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delbusy",7,me);
        return 1;
}

int delbusy()
{
        int fun = me->query("functions/busy/level");
        if(me) {
        me->delete_temp("addbusy");
        if(fun<100) { function_improved("busy",random(700)); }
        }
        return 1;
}

int do_heal()
{
	int fun, n;

        fun = me->query("functions/healup/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("请把武器装备上。\n");
        if( mkfun <= 30 )
        return notify_fail("你的邪灵制刀术还没到能使用这功效的等级。\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("此刀要装备在副武器才有功效。\n");
        if( me->query("force") < 600 )
        return notify_fail("你的内力不够。\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("你的杀气不够。\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("你的潜能不足以用刀。\n");
        if( me->is_fighting() )
        return notify_fail("战斗中不能使用。\n");
        if( me->query_temp("heal") == 1 )
        return notify_fail("你的刀还没吸满血气，再等一下吧。\n");
message_vision(HIR"$N赫然吸取手中"+wname->name()+HIR"的血气，此景像异常骇人。\n"NOR,me);
message_vision(HIR"$N吸收完血气，觉的浑身舒畅无比，筋骨活络了起来。\n"NOR,me);
	n = fun*15 + 200;
	me->receive_curing( "gin", n );
        me->receive_heal( "gin", n );
        me->receive_curing("kee",n );
        me->receive_heal("kee",n);
        me->receive_curing("sen",n);
        me->receive_heal("sen",n);
        if( fun >= 95) { 
if(me->query_condition("bleeding")) { me->clear_condition("bleeding"); }
if(me->query_condition("burn")) { me->clear_condition("burn"); }
if(me->query_condition("blade")) { me->clear_condition("blade"); }
if(me->query_condition("u-stial")) { me->clear_condition("u-stial"); }
if(me->query_condition("cold")) { me->clear_condition("cold"); }
if(me->query_condition("hart")) { me->clear_condition("hart"); }
if(me->query_condition("star-stial")) { me->clear_condition("star-stial"); }
if(me->query_condition("blockade")) { me->clear_condition("blockade"); }
if(me->query_condition("skyfire")) { me->clear_condition("skyfire"); }
if(me->query_condition("tsunami")) { me->clear_condition("tsunami"); }
        }
        me->set_temp("heal",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delheal",7,me);
        return 1;
}
int delheal()
{
        int fun = me->query("functions/healup/level");
        if(me) {
        me->delete_temp("heal");
        if(fun<100) { function_improved("healup",random(700)); }
        }
        return 1;
}

int do_enforce()
{
        int fun,k;
        fun = me->query("functions/enforceup/level");
        mkfun = me->query("functions/mk-blade/level");
        k = fun/10 + 1;
        if( k > 10 )
        	k = 10;
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("请把武器装备上。\n");
        if( mkfun <= 40 )
        return notify_fail("你的邪灵制刀术还没到能使用这功效的等级。\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("此刀要装备在副武器才有功效。\n");
        if( me->query("force") < 600 )
        return notify_fail("你的内力不够。\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("你的杀气不够。\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("你的潜能不足以用刀。\n");
        if( me->is_fighting() )
        return notify_fail("战斗中不能使用。\n");
        if( me->query_temp("addenforce") == 1 )
        return notify_fail("刀之血气还在你身上游走。\n");
message_vision(HIG"$N赫然吸取手中"+wname->name()+HIG"的血气，此景像异常骇人。\n"NOR,me);
message_vision(HIG"$N吸收完血气，运起自修内功把血气凝成血劲，提升自身威力。\n"NOR,me);
        me->set_temp("oldenforce",me->query("force_factor"));
        me->set_temp("addenforce",1);
        me->set("force_factor",10+k);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delenforce",fun+10,me);
        return 1;
}

int delenforce()
{
        int fun = me->query("functions/enforceup/level");
        if(me) {
        me->delete_temp("addenforce");
        me->set("force_factor",me->query_temp("oldenforce"));
        me->delete_temp("oldenforce");
        message_vision(HIW"$N觉的刀的血气消失了。\n"NOR,me);
        if(fun<100) { function_improved("enforceup",random(700)); }
        }
        return 1;
}

int do_power()
{
      int k;
        int fun = me->query("functions/powerup/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
      k=(int)(fun/10);
        if( k < 1 ) k=1;
        if( ob->query("equipped") != "wielded" )
        return notify_fail("请把武器装备上。\n");
        if( mkfun <= 50 )
        return notify_fail("你的邪灵制刀术还没到能使用这功效的等级。\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("此刀要装备在副武器才有功效。\n");
        if( me->query("force") < 600 )
        return notify_fail("你的内力不够。\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("你的杀气不够。\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("你的潜能不足以用刀。\n");
        if( me->is_fighting() )
        return notify_fail("战斗中不能使用。\n");
        if( me->query_temp("addbasic") == 1 && me->query("id")!="swy" )
        return notify_fail("你已经使用增强术了。\n");
        if( me->query_temp("powerup") == 1 )
        return notify_fail("刀之血气还在你身上游走。\n");
        message_vision(HIG"$N吸收手中"+wname->name()+HIG"的血气，此景像异常骇人。\n"NOR,me);
        message_vision(HIG"$N吸收完血气，眼睛发红，整个人狂暴起来。\n"NOR,me);
        ob->set("nodrop",1);
        me->apply_condition("mkpowerup",k);
        me->add_temp("apply/dodge",-20);
        me->add_temp("apply/move",-20);
        me->add_temp("apply/parry",-20);
        me->add_temp("apply/attack",((fun*2)+30));
        me->set_temp("powerup",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        return 1;
}

int do_basic()
{
        int fun,k,g;
        fun = me->query("functions/addbasic/level");
        mkfun = me->query("functions/mk-blade/level");
        k=(int)(fun/5);
        if( k < 1 ) k=1;
        g=(int)(fun/10);
        if( g < 1 ) g=1;
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("请把武器装备上。\n");
        if( mkfun <= 60 )
        return notify_fail("你的邪灵制刀术还没到能使用这功效的等级。\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("此刀要装备在副武器才有功效。\n");
        if( me->query("force") < 600 )
        return notify_fail("你的内力不够。\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("你的杀气不够。\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("你的潜能不足以用刀。\n");
        if( me->is_fighting() )
        return notify_fail("战斗中不能使用。\n");
        if( me->query_temp("powerup") == 1 && me->query("id")!="swy" )
        return notify_fail("你已经使用狂暴术了。\n");
        if( me->query_temp("addbasic") == 1 )
        return notify_fail("刀之血气还在你身上游走。\n");
      if( me->query("setgift-mk")==1 )
      return notify_fail("你身上还留着刀之血气。\n");
        message_vision(HIG"$N吸收手中"+wname->name()+HIG"的血气，此景像异常骇人。\n"NOR,me);
        message_vision(HIG"$N吸收完血气，血气游走全身，使得$N筋骨一阵爆响。\n"NOR,me);
me->set("setgift-mk",1);
me->set("setgift/str",me->query("str"));
me->set("setgift/cps",me->query("cps"));
me->set("setgift/cor",me->query("cor"));
me->set("setgift/int",me->query("int"));
me->set("setgift/spi",me->query("spi"));
me->set("setgift/kar",me->query("kar"));
        ob->set("nodrop",1);
        me->add("str",k);
        me->add("cps",k);
        me->add("cor",k);
        me->add("int",k);
        me->add("spi",k);
        me->add("kar",k);
        me->apply_condition("giftout",g);
        me->set_temp("addbasic",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        return 1;
}

int do_lose()
{
        int fun;
        fun = me->query("functions/losehurt/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("请把武器装备上。\n");
        if( mkfun <= 70 )
        return notify_fail("你的邪灵制刀术还没到能使用这功效的等级。\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("此刀要装备在副武器才有功效。\n");
        if( me->query("force") < 600 )
        return notify_fail("你的内力不够。\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("你的杀气不够。\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("你的潜能不足以用刀。\n");
        if( me->is_fighting() )
        return notify_fail("战斗中不能使用。\n");
        if( me->query_temp("losehurt") == 1 )
        return notify_fail("刀之血气还在你身上游走。\n");
message_vision(HIG"$N赫然吸取手中"+wname->name()+HIG"的血气，此景像异常骇人。\n"NOR,me);
message_vision(HIG"$N吸收完血气，运功加劲一吐，其血气依附$N的身形形成一件‘"HIR"血气斗铠"HIG"’。\n"NOR,me);
        me->set_temp("losehurt",1);
        me->apply_condition("bloodcloth",10);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("dellose",fun+10,me);
        return 1;
}

int dellose()
{
        int fun = me->query("functions/losehurt/level");
        if(me) {
        me->apply_condition("bloodcloth",0);
        me->delete_temp("losehurt");
        message_vision(HIW"$N觉的刀的血气消失了。\n"NOR,me);
        if(fun<100) { function_improved("losehurt",random(700)); }
        }
        return 1;
}

int do_bad()
{
        object target,obt;
        int fun,k;
        fun = me->query("functions/badup/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("请把武器装备上。\n");
        if( mkfun <= 80 )
        return notify_fail("你的邪灵制刀术还没到能使用这功效的等级。\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("此刀要装备在副武器才有功效。\n");
        if( !target ) target = offensive_target(me);
        if( !target ) return notify_fail("没有敌人可以使用。\n");
      if( !me->is_fighting(target) )
        return notify_fail("只能在战斗中使用。\n");
        obt=target->query_temp("weapon");
        if( !obt )
        return notify_fail("敌人没武器。\n");
        if( me->query("force") < 600 )
        return notify_fail("你的内力不够。\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("你的杀气不够。\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("你的潜能不足以用刀。\n");
        if( me->query_temp("badup") == 1 )
        return notify_fail("你的刀还没吸满血气，再等一下吧。\n");
message_vision(HIY"就在$N手持"+wname->name()+HIY"奋力杀敌时，手中刀身突然地颤抖。\n"NOR,me);
message_vision(HIY"只见$N的兵器与$n的兵器相碰在一起发出ㄎ_ㄧ_ㄤ的一声。\n"NOR,me,target);
        if( environment(me) == environment(target) ) {
        k=random(fun)+15;
//加上两个条件下，武器可以免于被损毁，拥有sharp值8以上的武器一定都有特别设计过的
//所以一般原来设计的所有狂想weapon都无法满足这条件，因为修改过倚天剑和屠龙刀，让
//这两把刀剑无法损毁于此特攻下，另外新的我所写的新区域的mob身上的新武器也有sharp
//值，做了一点点小更动，特别加注于此。  by Neverend 2001/10/14
        if( k > 80 && obt->query("sharp") < 8 && (obt->query("material") != "blacksteel" || obt->query("material") != "crimsonsteel") )
        {
        obt->unequip();
message_vision(HIR"只见$N的刀散发出浓稠的血气，霎然$n的"+obt->query("name")+HIR"已被溶成二段。\n"NOR,me,target);
        if( !obt->query("bad"))
        {
        obt->set("name", "("HIR"溶毁"NOR")"+obt->query("name"));
        obt->set("bad",1);
        }
        obt->set("value",1);
        obt->set("weapon_prop/damage",0);
        obt->move(environment(target));
        target->rest_action();
        } else if( obt->query("sharp") < 8 && (obt->query("material") != "blacksteel" || obt->query("material") != "crimsonsteel") ) {
        obt->unequip();
message_vision(HIR"只见$N的刀散发出浓绸的血气，霎然$n的"+obt->query("name")+HIR"已被血气侵蚀。\n"NOR,me,target);
        if( !obt->query("bad"))
        {
        obt->set("name", "("HIR"损坏"NOR")"+obt->query("name"));
        obt->set("bad",1);
        }
        if( obt->query("weapon_prop/damage") >= 15 )
        {
        obt->add("weapon_prop/damage",-15);
        obt->wield();
        } else {
        obt->set("value",1);
        obt->set("weapon_prop/damage",0);
        obt->move(environment(target));
        target->rest_action();
        }
        } else message_vision(HIW"只见$N与$n的兵器相互碰撞冒出火花。\n"NOR,me,target);
        }
        me->set_temp("badup",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delbadup",7,me);
        return 1;
}

int delbadup()
{
        int fun = me->query("functions/badup/level");
        if(me) {
        me->delete_temp("badup");
        if(fun<100) { function_improved("badup",random(700)); }
        }
        return 1;
}

int do_die()
{
        object target;
        int fun;
        fun = me->query("functions/dieup/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("请把武器装备上。\n");
        if( mkfun != 100 )
        return notify_fail("你的邪灵制刀术还没到能使用这功效的等级。\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("此刀要装备在副武器才有功效。\n");
        if( !target ) target = offensive_target(me);
        if( !target ) return notify_fail("没有敌人可以使用。\n");
      if( !me->is_fighting(target) )
        return notify_fail("只能在战斗中使用。\n");
        if( userp(target) )
        return notify_fail("不能对玩者使用。\n");
        if( target->query_temp("todie") == 2 )
        return notify_fail("同一敌人只能用二次。\n");
        if( target->query_temp("no_die_soon") == 1 )
        return notify_fail("你的必杀一击对他无效。\n");
        if( me->query("force") < 600 )
        return notify_fail("你的内力不够。\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("你的杀气不够。\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("你的潜能不足以用刀。\n");
        if( me->query_temp("dieup") == 1 )
        return notify_fail("你正在使用。\n");
message_vision(HIR"$N赫然吸取手中"+wname->name()+HIR"的血气，此景像异常骇人。\n\n"NOR,me);
message_vision(HIG"$N吸收完血气，把所有血气与内劲溶合，吐纳丹田，似乎要给$n致命一击。\n\n"NOR,me,target);
        me->set_temp("dieup",1);
        call_out("deldie",7,me,target);
        return 1;
}

int deldie( object me, object target )
{
	int fun = me->query("functions/dieup/level");
	me->delete_temp("dieup");
	if( !me || !target ) return 1;
	if( environment(me) != environment(target) ) return 1;
	if( !me->is_fighting(target) ) return 1;
	message_vision( HIY"\n$N目露凶光大喝道: 看我的‘"HIB"无亟魔道"HIY"’。\n\n", me );
	message_vision( HIR"只见$N聚集非常强大的血气劲往$n要害直攻过去。\n\n", me, target );

	if( fun+15 > random(380) ) {
		message_vision( HIM"$N被强大的血气劲爆体而过, 当场惨死。\n\n"NOR, target );
		target->set_temp( "last_damage_from", me );
		target->die();
	}
	else {
		message_vision( HIC"$N见机运起最强气劲, 试图把血气劲给反击回去。\n\n", target );
		message_vision( HIB"不料血气劲被$N反弹回来, 击中到$n身上, 顿时, 严重受伤失去六分之五的血气。\n\n"NOR, target, me );
		target->add_temp( "todie", 1 );
		me->start_busy(2);
		me->add( "kee", -(me->query("kee")*5/6) );
	}

	me->add( "force", -500 );
	me->add( "bellicosity", -5 );
	me->add( "potential", -10 );
	if( fun<100 )
		function_improved( "dieup", random(700) );
        return 1;
}
