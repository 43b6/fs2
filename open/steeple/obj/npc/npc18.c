#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
        set_name("陈知衡",({"master chen","chen"}));
        set("long",
        "他是本朝刑部兼吏部高官,主掌大理寺,负责全国司法与官员升等。\n"+ 
        "有关当官的一些指令以及制度等等的说明请(help officer).\n");
        set("gender","男性");
        set("class","officer");
        set("title",HIW"～幻影～"NOR"大理寺正卿");
        set("officer_class","大理寺正卿");
        set("officer_power",150);
        set("max_officer_power",150);
        set("guild_master",1);
        set("office_exp",10000);
        set("nickname","执法如山");
        set("officer_att","good");
        set("combat_exp",7000000);
        set("attitude","heroism");
        set("age",55);
        set("str", 30);
        set("con", 30);
        set("cps", 30);
        set("max_force",70000);
        set("force",70000);
        set("max_kee",7000);
        set("kee",7000);
        set_temp("apply/armor",150);
        set_skill("literate",80);
        set_skill("force",30);
        set_skill("dodge",40);
        set_skill("parry",60);
        set_skill("unarmed",40);
        set_skill("dagger",90);
        set_skill("be-officer",120);
        set_skill("security",120);
        map_skill("be-officer","security");
        set_skill("dragon-dagger",90);
        map_skill("dagger","dragon-dagger");
        set_skill("chen-steps",60);
        map_skill("dodge","chen-steps");
        set_skill("oneforce",40);
        set_skill("chen-steps",60);
        map_skill("force","oneforce");
        map_skill("dodge","chen-steps");
        set("force_factor",10);
        setup();
        create_family("陈知衡",1," ");
        carry_object("/open/capital/obj/chen_dagger")->wield();
}

void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
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
if(me->query("quest/start_game")< 19)
       {
        message_vision(HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第十八层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第十九层试炼□塔"HIG"’"HIW"。
	"NOR,me);
	me->set("quest/start_game",19);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}


