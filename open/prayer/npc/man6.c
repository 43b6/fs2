//man--golden
#include <command.h>
#include <ansi.h>

inherit NPC;

string ask_metal()
{
	object who=this_player();
        if( who->query_temp("metal/where") >=6 )
        {
	who->delete_temp("metal/where");
	who->set_temp("metal/where",7);
        return("[36m哦!!你听老李说过啦!!我们矿工呀, 都是很会找金属矿的啦!!\n
	在南边附近的地方可以找到[金矿]喔!!在洞窟里也可以找到[金矿]喔!![0m\n");
        }
	else
	{
	return("[35m来来来, 愿意跟我们一起喝酒吗??[0m\n");
	}
}   

void create()
{
    set_name("西域男子",({"man"}));
    set("gender", "男性");
    set("age",36);
    set("attitude","friendly");
    set("long",@LONG

	这位老兄现在是官家的矿工, 从事官方金属的开采工作!!

LONG);
 
    set("combat_exp",300);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"男子道: 来来来, 今天喝个不醉不归呀!!\n"+NOR,
    }) );
    set("inquiry",([
    "金属":(: ask_metal :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
