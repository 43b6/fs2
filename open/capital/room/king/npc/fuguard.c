//御前侍卫「李靖”by bss
#include <ansi.h>
#include <command.h>
#include <combat.h>
#include <skill.h>
inherit NPC;


void create()
{
        set_name("李靖",({"king guard","guard"}));
        set("title","御前侍卫");
        set("gender","男性");
        set("age",30);
        set("attitude", "aggressive");
        set("str",45);
        set("cor",45);
        set("cps",45);
        set("con",45);
        set("kar",45);
        set("clan_kill",1);
        set("del_delay",1);
        set("no_hole",1);
        set("no_plan",1);
        set("long","保护天子的勇猛战士，尽忠职守，不茍言笑。\n");
        set("class","blademan");
        set("combat_exp",12000000);
        set("force",100000);
        set("max_force",90000);
        set("max_kee",15000);
        set("kee",15000);
          set("force_factor",40);

        set_skill("blade",200);
        set_skill("parry",200);
        set_skill("force",200);
        set_skill("dodge",200);
          set_skill("god_blade",200);
        set_skill("bss-steps",200);
        set_skill("fireforce",200);
        set_skill("bss-parry",200);
          map_skill("blade","god_blade");
        map_skill("parry","bss-parry");
        map_skill("dodge","bss-steps");
        map_skill("force","fireforce");

        setup();

        carry_object("/open/capital/obj/blade2")->wield();
        carry_object("/open/gblade/obj/gold-robe")->wear();
        carry_object("/open/gblade/obj/gold-armor")->wear();
        carry_object("/open/gblade/obj/gold-boots")->wear();
        add_money("gold",50);
}

void init()
{
        add_action("do_fight", "fight");
        add_action("do_fight", "kill");
        add_action("do_cmd","cmd");
}

int do_cmd(string str) {
 int force;
 object who=this_player();
 object me=this_object();
 if(str=="askgod king" || str=="askgod guard" || str=="askgod king guard") {
 who->start_busy(2);
 message_vision("$N忽然大喝一声，$n当场被吓得魂飞魄散，内力也因此大打折扣!!\n",me,who);
 force=who->query("force");
 force=force*4/5;
 who->add("force",-force);
          command("wield all");
          command("wear all");
 kill_ob(who);
} else if(str=="bak king" || str=="bak guard" || str=="askgod king guard") {
  who->start_busy(2);
 message_vision("$N忽然大喝一声，$n当场被吓得魂飞魄散，内力也因此大打折扣!!\n",me,who);
 force=who->query("force");
 force=force*4/5;
 who->add("force",-force);
          command("wield all");
          command("wear all");
  kill_ob(who);
} else if(str=="cmd throw king" || str=="cmd throw guard" || str=="cmd throw guard"){
  who->start_busy(2);
message_vision("$N忽然大喝一声，$n当场被吓得魂飞魄散，内力也因此大打折扣!!\n",me,who);
 force=who->query("force");
 force=force*4/5;
 who->add("force",-force);
          command("wield all");
          command("wear all");
  kill_ob(who);
}
 return 1;
}
int do_fight(string arg)
{
        object who;
        who = this_player();

        if( !arg || (arg!="guard" && arg!="king") )
                return notify_fail("你想攻击谁？\n");
        else {
          command("wield all");
          command("wear all");
          kill_ob(who);
        }

        return 1;
}
void heart_beat()
{
        int force,i,j;
        object *target;
        object me=this_object();
     if(me->is_fighting())
     {
        target=me->query_enemy();
          if( 50 > random(100)){
        me->delete_busy();
        message_vision("$N舒展了一下筋骨，瞬间生龙活虎了起来!!!\n",me);
          }
        i=sizeof(target);
          if( 2 > random (100))
        {
  message_vision("$N大喝一声「吸星大法”，开始吸收每个人的功力!!\n",me);
                for(j=0;j<i;j++)
                {
                        force=target[j]->query("force");
                        force=force*4/5;
                        target[j]->add("force",-force);
                        me->add("force",force);
                        message_vision("$N的内力被$n的吸星大法所吸，竟被吸掉了八成之多!!!\n",target[j],me);
                        COMBAT_D->repore_status(target[j]);
                        target[j]->start_busy(1);
                }
                message_vision("$N施展完吸星大法，内力大增!!!\n",me);
        }
     }
        ::heart_beat();
}
void die()
{
   int i,j;
    mixed enemy;
      object room;
        object winner = query_temp("last_damage_from");
   room= environment(this_object());
    enemy = all_inventory(room);
   i=sizeof(enemy);
        tell_object(users(),HIR"\n\n

御前侍卫李靖用尽了最后一丝力气说道:「皇上，微臣无能，无法再保护皇上
                                     ，唯有以死谢罪啦!!!”
\n\n"NOR);
   message("room", HIR"
李靖在临死之前，竟然用了阴葵派禁断秘技「玉石俱焚”，身体爆作满天精血粉碎，
身体奇迹似得无影无踪!!!
\n"NOR,enemy);
  for(j=0;j<i;j++)
  {
     if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j]) && enemy[j]->query("id")!="king" && enemy[j]->query("id")!="king guard"){
        enemy[j]->add("kee",-1000);
        enemy[j]->start_busy(1);
        message_vision("$N闪躲不急，被$n这临死前的一击击中，受了重伤，摇摇欲坠!!!\n",enemy[j],this_object());
         COMBAT_D->report_status(enemy[j]);
  }
    }
  :: die();
}
