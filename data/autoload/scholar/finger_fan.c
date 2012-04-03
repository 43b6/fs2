//瓢阳指劲的专用武器......

#include <weapon.h>

#include <ansi.h>

inherit STABBER;
int lv_check(object ob);
int do_shoot();
object user=this_player();
void create()
{
        object me=this_player();
        set_name(HBMAG+HIC"飘"HIR"阳"HIW"扇"NOR, ({"finger fan", "fan"}) );
        set_weight(10000);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        set("no_put",1);
        set("no_give",1);
        set("no_sac",1);
        set("no_steal",1);
        set("finger-fan",1);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "柄");
          set("long","
由前代武器大师北胜天所构思，由一种可以百分之百传递内劲的奇异金属所制成，
是北胜天为段家所做的终极兵器，可以在战斗中射出(shoot)事前炼化入飘阳扇的
一阳指气伤害敌人。
cf 可以查查看fan里面还存有几只气劲
当飘阳指劲的等级到达90以上时可以set fan_auto_shoot，会自动射出指劲
否则都要用shoot来射。\n");
          set("value", 10000);
          set("material", "crimsonsteel");
          set("wield_msg", HIY"$N将$n"HIY"拿在手上，感觉全身的内劲好像永不停止般流入$n"HIY"中。\n"NOR);
          set("unwield_msg", HIY"$N将$n"HIY"插回$n"HIY"的专用皮套内，忽然有一种失落感。\n"NOR);
         }
        init_stabber(100);
        setup();
}
void init()
{
     add_action("do_drop","drop");
     add_action("do_auc","auc");
     add_action("do_wield","wield");
     add_action("do_give","give");
     add_action("do_unwield","unwield");
     add_action("do_shoot","shoot");
     add_action("do_check","cf");
}

int do_wield(string str)
{

     if(!query("equipped") )
     {
        user = this_player();
        set_heart_beat(1);
     }
}
int do_drop(string str)
{
   if(str=="finger fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
        set_heart_beat(0);
     }
}
int do_give(string str)
{
   if(str=="finger fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
        set_heart_beat(0);
     }
}
int do_unwield(string str)
{
    if(str=="finger fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
        set_heart_beat(0);
     }
}
int do_auc(string str)
{
    if(str=="finger fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
        set_heart_beat(0);
     }
}

int do_shoot()
{
    object me,*enemy;
    int i,j,fun,damage,k,sk_lv,power;
    me=user;
    if(!me) return notify_fail("无法使用, 建议unwield后再wield试试!!\n");
    enemy=me->query_enemy();
    j=sizeof(enemy);
    fun=me->query("functions/fan-finger/level");
    damage=fun*(random(7)+1);
    if(damage < 100 )
            damage=100;
    if(damage > 700)
            damage=700;


    if(!query("equipped"))
            return 0;

    if(me->is_busy())
            return 0;

    if(!(me->query("family/family_name")=="段家" && me->query("marks/fan-finger") && me->query("marks/six_sp")==3))
    {
    write("你不够资格使用本扇,我将离你而去!!!\n");
    message_vision(HIM"只见一道奇异的紫光由$N"+HIM+"发出,$n定睛一看,却发现$N"+HIM+"正从$n的手上消失不见!!!",this_object(),me);
    if(query_heart_beat())
    set_heart_beat(0);
    destruct(this_object());
    }

    if(!me->query_temp("fan-finger"))
            return notify_fail(HIC"你并没有炼化一阳指气到"HIC"飘"HIY"阳"HIW"扇里!!\n"NOR);

    if(!me->is_fighting())
            return notify_fail(HIY"只有在战斗中才可以使用「飘阳指劲”。\n"NOR);

    if(me->query("force") <= 100)
            return notify_fail(HIR"你的内力已经用尽，再没有内力来发出「飘阳指劲”。\n"NOR);

    if(me->query_temp("finger-rest",1))
            return notify_fail(HIY"你因为使出「飘阳指劲”，使得自身的内息翻滚不定，暂时无法再使出「飘阳指劲”。\n"NOR);

    if(me->query_temp("fan_damage_up")){
      me->delete_temp("fan_damage_up");
      power=me->query("combat_exp")/2000000+1;
      damage=damage*power;
      if(damage > 4000) damage=4000;
      me->add("force",-500);
      message_vision(BLINK+HIY"
$N领悟到指劲挥出时角度的重要性，手中的"+NOR+"$n"+BLINK+HIY+"以一个敌人完全无法闪躲的角度挥了出去!!\n"NOR,me,this_object());
    }
	
    if(wizardp(me))
      tell_object(me,sprintf("damage=%d\n",damage));
    if(fun > 80 && ( me->query("force") > 600 ))
    {
      if(fun>=100 && me->query_temp("fan-finger") >= 5 && (10 > random(100) || wizardp(me)) && me->query("force")>2000 && me->query("env/飘阳扇连击") )
      {
      message_vision(HIM"
      $N"HIM"忽然领悟到了"BLINK+HIR"「飘阳指劲”"NOR+HIM"中"BLINK+HIY"「飘渺虚无，真阳纵横”"NOR+HIM"的真意，口中大喝
      "HBRED+HIY"「飘～阳～指～劲～巧～连～环”"NOR+HIM"，手中$n"HIM"一扬，五道不同颜色的指劲腾空
      而出，如有灵性般的奔向各敌。\n
"NOR,me,this_object());
        i=random(j);
          if(enemy[i]){
                if(((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30)) || me->query("force") >100000 )
                {
message_vision(HIC"$N"HIC"的身体不幸被"BLINK+HIR"「飘阳指劲”"NOR+HIC"中的第一式"HBRED+HIY"「沉阳劲”"NOR+HIC"所穿透，鲜血不断的从伤口流出。\n"NOR,enemy[i]);
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+1);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"展开身法，一个闪身躲开了指劲的袭击。\n"NOR,enemy[i]);
                }
          }
        i=random(j);
          if(enemy[i]){
                if(((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30)) || me->query("force") > 100000 )
                {
message_vision(HIC"$N"HIC"的身体不幸被"BLINK+HIR"「飘阳指劲”"NOR+HIC"中的第二式"HBMAG+HIY"「重阳劲”"NOR+HIC"所穿透，鲜血不断的从伤口流出。\n"NOR,enemy[i]);
                damage=damage+100;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+2);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"展开身法，一个闪身躲开了指劲的袭击。\n"NOR,enemy[i]);
                }
          }
        i=random(j);
          if(enemy[i]){
                if(((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30)) || me->query("force") > 100000 ){
message_vision(HIC"$N"HIC"的身体不幸被"BLINK+HIR"「飘阳指劲”"NOR+HIC"中的第三式"HBGRN+HIW"「绝阳劲”"NOR+HIC"所穿透，鲜血不断的从伤口流出。\n"NOR,enemy[i]);
                damage=damage+200;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+3);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"展开身法，一个闪身躲开了指劲的袭击。\n"NOR,enemy[i]);
                }
          }
        for(i=0;i<j;i++)
        {
          if(!enemy[i]) continue;
                if(((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30)) || me->query("force") >100000 )
                {
message_vision(HIC"$N"HIC"的身体不幸被"BLINK+HIR"「飘阳指劲”"NOR+HIC"中的第四式"HBYEL+HIC"「玄阳劲”"NOR+HIC"所穿透，鲜血不断的从伤口流出。\n"NOR,enemy[i]);
                damage=damage+300;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+4);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"展开身法，一个闪身躲开了指劲的袭击。\n"NOR,enemy[i]);
                }
        }
        for(i=0;i<j;i++)
        {
          if(!enemy[i]) continue;
                if(((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30)) || me->query("force") >100000 )
                {
message_vision(HIC"$N"HIC"的身体不幸被"BLINK+HIR"「飘阳指劲”"NOR+HIC"中的第五式"BLINK+HIC"「灵阳劲”"NOR+HIC"所穿透，鲜血不断的从伤口流出。\n"NOR,enemy[i]);
                damage=damage+400;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+5);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"展开身法，一个闪身躲开了指劲的袭击。\n"NOR,enemy[i]);
                }
        }
        me->add("force",-2000);
        message_vision(HIY"$N因为使出了"BLINK+HIR"「飘阳指劲”"NOR+HIY"的连续招，体内的内息狂泄而出，体内的内力严重的流失了!!!\n"NOR,me);
        me->add_temp("fan-finger",-5);
        me->set_temp("finger-rest",1);
        call_out("rest",7,me);
        return 1;
        }
        message_vision(HIY"
        $N"HIY"将手中$n"HIY"用力一挥，一道气劲由$n"HIY"呼啸而出，正是大理段氏另一个
        绝招"BLINK+HIR"「飘阳指劲”"NOR+HIY"中的第五式"BLINK+HIC"「灵阳劲”"NOR+HIY"，指劲化繁为简，如有灵性
        般的奔向各敌。\n
"NOR,me,this_object());

        for(i=0;i<j;i++)
        {
          if(!enemy[i]) continue;
                if((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30) )
                {
message_vision(HIC"$N"HIC"的身体不幸被"BLINK+HIR"「飘阳指劲”"NOR+HIC"所穿透，鲜血不断的从伤口流出。\n"NOR,enemy[i]);
                damage=damage+400;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+5);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"展开身法，一个闪身躲开了指劲的袭击。\n"NOR,enemy[i]);
                }
        }
        me->add("force",-600);
        me->add_temp("fan-finger",-1);
        me->set_temp("finger-rest",1);
        call_out("rest",6,me);
        return 1;
        }
        if(fun >60 && ( me->query("force") > 400 ))
        {
        message_vision(HIY"
        $N"HIY"将手中$n"HIY"用力一挥，一道气劲由$n"HIY"呼啸而出，正是大理段氏另一个
        绝招"BLINK+HIR"「飘阳指劲”"NOR+HIY"中的第四式"HBYEL+HIC"「玄阳劲”"NOR+HIY"，指劲化为无数条细如针线
        的气劲奔向各敌。\n
"NOR,me,this_object());

        for(i=0;i<j;i++)
        {
          if(!enemy[i]) continue;
                if((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30) )
                {
message_vision(HIC"$N"HIC"的身体不幸被"BLINK+HIR"「飘阳指劲”"NOR+HIC"所穿透，鲜血不断的从伤口流出。\n"NOR,enemy[i]);
                damage=damage+300;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+4);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"展开身法，一个闪身躲开了指劲的袭击。\n"NOR,enemy[i]);
                }
        }
        me->add("force",-400);
        me->add_temp("fan-finger",-1);
        me->set_temp("finger-rest",1);
        call_out("rest",6,me);
        return 1;
        }
        if(fun >40 && ( me->query("force") > 200) )
        {
        message_vision(HIY"
        $N"HIY"将手中$n"HIY"用力一挥，一道气劲由$n"HIY"呼啸而出，正是大理段氏另一个
        绝招"BLINK+HIR"「飘阳指劲”"NOR+HIY"中的第三式"HBGRN+HIW"「绝阳劲”"NOR+HIY"，指劲有如一条巨大的光柱
        般射向周围的敌人。\n
"NOR,me,this_object());

        i=random(j);
          if(!enemy[i]) return notify_fail("没有敌人可以杀。\n");
          if(enemy[i]){
                if((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30) )
                {
message_vision(HIC"$N"HIC"的身体不幸被"BLINK+HIR"「飘阳指劲”"NOR+HIC"所穿透，鲜血不断的从伤口流出。\n"NOR,enemy[i]);
                damage=damage+200;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+3);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"展开身法，一个闪身躲开了指劲的袭击。\n"NOR,enemy[i]);
                }
        me->add("force",-200);
        me->add_temp("fan-finger",-1);
        me->set_temp("finger-rest",1);
        call_out("rest",6,me);
        return 1;
          }
        }
        if( fun >20 && ( me->query("force") > 150 ) )
        {
        message_vision(HIY"
        $N"HIY"将手中$n"HIY"用力一挥，一道气劲由$n"HIY"呼啸而出，正是大理段氏另一个
        绝招"BLINK+HIR"「飘阳指劲”"NOR+HIY"中的第二式"HBMAG+HIY"「重阳劲”"NOR+HIY"，指劲以极快的速度画过周
        遭的空气，极大的声响充斥着整个空间。\n
"NOR,me,this_object());

        i=random(j);
          if(!enemy[i]) return notify_fail("没有敌人可以杀。\n");
          if(enemy[i]){
                if((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30) )
                {
message_vision(HIC"$N"HIC"的身体不幸被"BLINK+HIR"「飘阳指劲”"NOR+HIC"所穿透，鲜血不断的从伤口流出。\n"NOR,enemy[i]);
                damage=damage+100;
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+2);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"展开身法，一个闪身躲开了指劲的袭击。\n"NOR,enemy[i]);
                }
        me->add("force",-150);
        me->add_temp("fan-finger",-1);
        me->set_temp("finger-rest",1);
        call_out("rest",6,me);
        return 1;
          }
        }
        if(me->query("force") > 100)
        {
        message_vision(HIY"
        $N"HIY"将手中$n"HIY"用力一挥，一道气劲由$n"HIY"呼啸而出，正是大理段氏另一个
        绝招"BLINK+HIR"「飘阳指劲”"NOR+HIY"中的第一式"HBRED+HIY"「沉阳劲”"NOR+HIY"，指劲以极快的速度画过周
        遭的空气，极大的声响充斥着整个空间。\n
"NOR,me,this_object());

        i=random(j);
          if(!enemy[i]) return notify_fail("没有敌人可以杀。\n");
          if(enemy[i]){
                if((fun+20+random(30)) > random(lv_check(enemy[i]))+random(30) )
                {
message_vision(HIC"$N"HIC"的身体不幸被"BLINK+HIR"「飘阳指劲”"NOR+HIC"所穿透，鲜血不断的从伤口流出。\n"NOR,enemy[i]);
                enemy[i]->receive_wound("kee",damage,me);
                enemy[i]->apply_condition("bleeding", random(10)+1);
                COMBAT_D->report_status(enemy[i]);
                }
                else
                {
message_vision(HIG"$N"HIG"展开身法，一个闪身躲开了指劲的袭击。\n"NOR,enemy[i]);
                }
        me->add("force",-100);
        me->add_temp("fan-finger",-1);
        me->set_temp("finger-rest",1);
        call_out("rest",6,me);
        return 1;
          }
        }
}
int rest(object me)
{
        if(!me) return 1;
        if(me->query("functions/fan-finger/level")!=120)
        {
        me->add("functions/fan-finger/learned",random(500));
        if(me->query("functions/fan-finger/learned") >= me->query("functions/fan-finger/level")*me->query("functions/fan-finger/level")*10)
        {
                me->add("functions/fan-finger/level",1);
                me->set("functions/fan-finger/learned",0);
                tell_object(me,HIY);
                tell_object(me,"你的飘阳指劲功力更上一层。\n" NOR);
        }
        }
        me->delete_temp("finger-rest");
        return 1;
}
int lv_check(object ob)
{
        if(ob->query_skill("dodge") >=150)
                return 150;
        else
                return ob->query_skill("dodge");
}
int do_check()
{
      object me=this_player();
      int i=me->query_temp("fan-finger");

      printf("飘阳扇中还存有%d支气劲供你使用!!\n",i);
      if(query_heart_beat())
      printf("自动攻击运作中!!\n");
      else if(query("equipped"))
        set_heart_beat(1);
      return 1;
}
void heart_beat()
{
    int ratio;

    if(!user) return ;
    if(!user->query("env/fan_auto_shoot")) return ;
    if(user->query_temp("finger-rest")) return ;
//    if(!userp(this_player(1))) return ;
    if(!user->query_temp("fan-finger")) return ;
    if(user->query("force") <= 100) return ;
    if(!user->is_fighting()) return ;
    if(user->query("functions/fan-finger/level") <90) return ;
    if(user->is_busy()) return ;

    if(wizardp(user)) ratio=95;
    else ratio=50;

    if(ratio >random(100) && !user->query_temp("fan_damage_up"))
      user->set_temp("fan_damage_up",1);

    tell_object(user,sprintf("启动自动攻击!!\n"));
    do_shoot();
    return ;
}


int query_autoload()
{
return 1;
}
