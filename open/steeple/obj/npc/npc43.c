#include <ansi.h>
inherit NPC;
void create() {
        
        set_name("碧衣魔将",({"seven-dark"}));
        set("long",
   "\n绿玉碧衣, 深沉而无语, 无法判断他下一步的行动是什么.\n");

        set("age",3121);
        set("str",35);
        set("title",HIW"～幻影～"NOR);
        set("cor",35);
        set("race","人类");
        set("gender","雄性");
        set("attitude","aggressive");
        set("class","fighter");
        set("bellicosity",7500);
        set("max_gin",9000);
        set("max_kee",50000);
        set("max_sen",9000);
        set("max_force",500000);
        set("force",500000);
        set("force_factor",65);
        set("combat_exp",13000000);
        set("clan_kill",1);
        set_skill("unarmed",100);
        set_skill("dodge",100);
        set_skill("mogi-steps",100);
        set_skill("move",80);
        set_skill("parry",100);
        set_skill("literate",130);
        set_skill("mogi-strike2",100);
        set_skill("force",120);
        set_skill("badforce",90);
        map_skill("unarmed", "mogi-strike2");
        map_skill("dodge","mogi-steps");
        map_skill("parry","badstrike");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        set("limbs",({"头部","胸部","背部","腰部"}));
        setup();
 }

void heart_beat()
{
 object env,mob,*enemy,target;
 int i;

 mob = this_object(); 
 env = environment(mob);  

 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 15)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"\n                        ～幻～影～心～诀～

"HIB"\n
$N指圆为心，方圆百里的妖邪魂魄瞬间飞奔群聚于此，鬼哭兽吼直
窜脑中轰然欲裂
随$N迅雷一指，一式"MAG"‘千首积尸  天惩无视’"HIB"的噬血尸气活若阎罗
直奔逼窜$n的七孔之中
\n"NOR,mob,target);
	mob->add("kee",2000);
      target->receive_damage("kee",2000);
      COMBAT_D->report_status(target, 1);
    }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}
int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"系统：战斗停止，$N回收中，。\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\n系统：由于你没携带晶片，所以无法记录战绩。\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\n系统：由于你没有正式登记，资料无法传输。\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 44)
       {
        message_vision(HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第四十三层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第四十四层试炼□塔"HIG"’"HIW"。
	"NOR,me);
	me->set("quest/start_game",44);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}