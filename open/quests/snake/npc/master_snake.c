inherit NPC;
inherit SSERVER;
#include <ansi.h>

void create()
{
        set_name("蛇郎君",({"master snake","snake"}));
        set("age",32);
        set("title",HIR"炼狱蛇王"NOR);
        set("nickname",HIW"人面蛇心"NOR);
        set("attitude","aggressive");
        set("gender","男性");
        set("long","
蛇寨寨主，生性残暴，是非不分，占据蛇寨为王，四处奸淫掳掠
，无恶不作。\n");
        set("max_gin",20000);
        set("max_kee",20000);
        set("max_sen",20000);
        set("max_force",50000);
        set("force",50000);
        set("force_factor",20);
        set("combat_exp",800000);
        set_skill("whip",120);
        set_skill("snake-whiper",120);
        set_skill("parry",120);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("black-steps",120);
        set_skill("force",200);
        set_skill("snowforce",200);
        map_skill("whip","snake-whiper");
        map_skill("parry","snake-whiper");
        map_skill("dodge","black-steps");
        map_skill("move","black-steps");
        map_skill("force","snowforce");
        setup();
        carry_object(__DIR__"obj/un_whip")->wield();
        carry_object(__DIR__"obj/helmet")->wear();
        carry_object(__DIR__"obj/snake_gem")->wear();
        carry_object(__DIR__"obj/un_cloth")->wear();
	carry_object("/open/magic-manor/obj/master_snake_head");
}

void heart_beat()
{
object ob,env,target;
int i,j,kee,eff,max;

        ob = this_object();
        env = environment(ob);
        target = offensive_target(ob);

        if( !target )
                return ::heart_beat(1);

        max = (int)ob->query("max_kee");
        eff = (int)ob->query("eff_kee");
        kee = (int)ob->query("kee");

        if( ob->query_busy() && random(100) < 80 )
        {
                message_vision(HIW+"$N大喝一声～破～!!$N的奇经六脉回覆了正常!!\n"NOR,ob);
                ob->delete_busy();
        }

        if( random(100) < 80 )
        {
                if( eff < max || kee < eff )
                {
                        message_vision(HIY"$N点穴疗伤，将体内的瘀伤给逼出，气色回覆了许多～\n"NOR,ob);
                        ob->receive_curing("kee",800);
                        ob->receive_heal("kee",800);
                        COMBAT_D->report_status(ob,1);
                }
        }

        if( env == environment(target) )
        {
                i = (int)ob->query_skill("dodge");
                j = (int)target->query_skill("dodge");
                
                if( random(i) > random(j) && (int)target->query_busy() < 3 )
                {
                        message_vision(HIY"$N使出自创步法"+HIW+"‵"+HIG+"蛇行步"+HIW+"‵"+HIY+"～

        左右晃动，似有若无的规律性，不断的尾随于$n的身后～

                $N看准时机，猛然握着鞭柄往$n的各路穴道打去～\n"NOR,ob,target);
                        target->start_busy(1);
                }

                if( random(i) > random(j) )
                {
                        message_vision(HIY"
$N领略到"+NOR+YEL+"〔"+MAG+"邪灵"+WHT+"。"+CYN+"蛇鞭"+YEL+"〕"+HIY+"之奥义

                        "+HIW+"～　"+HIC+"万　鞭　归　一　"+HIW+"～"+HIY+"

鞭法幻化成无数多条，以左右夹击之势，攻向$n。\n"NOR,ob,target);
                        message_vision(HIY"$N闪避不及，只好正面抵挡$n的攻势～\n"NOR,target,ob);
                        target->receive_wound("kee",800);
                        COMBAT_D->report_status(target,1);
                }
        }
set_heart_beat(1);
::heart_beat();
}

void die()
{
	object obj;
	string arg;
	object ob = this_object();
	object me = query_temp("last_damage_from");
	string name = me->query("name");

        if( me->query("family/family_name")==0 )
                arg = "无知平民";
        else
                arg = me->query("family/family_name");

//        if( !me->query("family/title") )
//               arg = arg+"平民";
//        else
//                arg = arg+me->query("family/family_name");

        tell_object(users(),HIC"
天空突然一阵雷雨交加～

        "HIG+ob->name(1)+"大怒道：该死的 "HIC+arg+HIG" 啊～

                        邪灵主派我来人间界进行的杀戮计划尽然被 "HIC+me->name(1)+HIG" 给毁坏了～\n"+NOR);
        if( !present("snake amulet",me) )
        {
	  if( random(9) == 7 )
	  {
	    if( me->query_temp("quests/magic-manor-02") == 6 )
	    {
	    me->set_temp("quests/kill-snake",1);
	    message_vision(HIY"$N在临死之前掉了一件护身符在$n的身上。\n"NOR,ob,me);
	    log_file("open-area/get_amulet", sprintf("%s(%s) 得到青蛇护符于 %s\n",name,me->query("id"), ctime(time()) ));
	    obj = new("/data/autoload/open-area/snake_amulet");
	    obj->move(me);
	    }else{
	    message_vision(HIY"$N在临死之前掉了一件护身符在$n的身上。\n"NOR,ob,me);
	    log_file("open-area/get_amulet", sprintf("%s(%s) 得到青蛇护符于 %s\n",name,me->query("id"), ctime(time()) ));
	    obj = new("/data/autoload/open-area/snake_amulet");
	    obj->move(me);
	    }
	  }else{
	    if( me->query_temp("quests/magic-manor-02") == 6 )
	    {
	    me->set_temp("quests/kill-snake",1);
	    }
	  }
        }else{
	  if( me->query_temp("quests/magic-manor-02") == 6 )
	  {
	  me->set_temp("quests/kill-snake",1);
	  }
	}
        ::die();
}
