//firedragon2 by casey

#include <combat.h>
#include <ansi.h>
#include <mudlib.h>
inherit NPC;

void create()
{
set_name(HIC"风龙"NOR, ({ "wind dragon","dragon" }) );
set("long","原本是炎龙谷的守护者 ,但现在被你收服了\n似乎还能骑上去唷(ride)");
set("no_give", 1);
set("no_drop", 1);
set("no_auc", 1);
set("no_sell", 1);
set("unit","只");
set("value","10000000");
set("race", "野兽");
  set("gender","雄性");
  set("combat_exp",1900000);
  set("age",2471);
  set("cor",40);
  set("str",20);
  set("kee",10000);
  set("max_kee",10000);
  set("sen",7000);
  set("max_sen",7000);
  set("gin",4500);
  set("max_gin",4500);
  set("force",3200);
  set("max_force",3200);
  set("bellicosity",1000);
  set("attitude","peaceful");
  set("chat_chance_combat", 25);
  set_temp("apply/armor",100);
  set_temp("apply/damage",80);
set("limbs", ({ "龙首", "龙爪", "龙身" , "龙腿" , "龙尾" }) );
  set("force_factor",25);
     set_skill("dodge",700);
     set_skill("parry",400);
     set_skill("unarmed",500);
 
  setup();


}


void init()
{

add_action("do_ascend","ride");
add_action("do_descend","dismount");
}

int do_ascend()
{
        object me;

        me=this_player();
        if ( me->query_temp("marks/ascend") )
               return notify_fail("你无法同时骑在两头龙身上呀。\n");

        message_vision("$N跳到"+this_object()->name()+"的背上。\n",me);
        me->set_temp("marks/ascend",1);
this_object()->set_leader(me);
        me->add_temp("apply/name",({ me->name()+ HIW"(正骑着"NOR+this_object()->name()+HIW")"NOR}));
        move(me);
        me->set_heart_beat(1);
        return 1;
}

int do_descend()
{
        object me;
        string *name;

        me=this_player();
        if ( !me->query_temp("marks/ascend") )
                return notify_fail("你没在龙上耶。\n");
message_vision("$N从"+this_object()->name()+"的背上跳了下来。\n",me);
        me->delete_temp("marks/ascend");   
        me->delete_temp("apply/name",name);
        move(environment(me));
 me->set_heart_beat(0);

        return 1;
}

int heal_up()
{
  object *enemy,who,user;
  int i,dodge;
        user = query_leader();
  if( user->is_fighting() )
  {
    if( random(10) > 2 )
    {
     enemy=user->query_enemy();

    i=random(sizeof(enemy));
     dodge = enemy[i]->query_skill("dodge", 1);
  
  if(random(dodge) < 60)

{
      message_vision(HIC+"猛烈的狂风自风龙口中疾吐而出 ,正朝着$N迅速狂卷而去!!\n"+NOR,enemy[i]);
      message_vision(HIY+"$N闪躲不及 ,被锐利的真空漩涡割的皮开肉绽。\n"+NOR,enemy[i]);
     COMBAT_D->report_status(enemy[i], 1);
     enemy[i]->receive_damage("kee", 140);     
      enemy[i]->start_busy(1);
  COMBAT_D->report_status(enemy[i], 1);
 
}else{
      message_vision(HIC+"猛烈的狂风自风龙口中疾吐而出 ,正朝着$N迅速狂卷而去!!\n"+NOR,enemy[i]);
     message_vision(HIW+"只见$N飞身侧闪 ,轻轻避开风龙的攻击...\n"+NOR,enemy[i]);

     }
    }
  }
        return ::heal_up() + 1;
}
void die() 
{
        object me;
        string *name;

        me=this_player();
       
        me->delete_temp("marks/ascend");   
        me->delete_temp("apply/name",name);
        move(environment(me));
 me->set_heart_beat(0);

        return;
}
int accept_fight(object me) {
        return notify_fail("这是别人的财产, 你杀不得!\n");
}

int accept_kill(object me) {
        return notify_fail("这是别人的财产, 你杀不得!\n");
}




