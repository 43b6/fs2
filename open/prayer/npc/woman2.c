//woman
#include <command.h>
#include <ansi.h>

inherit NPC;

string ask_metal()
{
    object who=this_player();
    if( who->query_temp("metal/where") >= 3 )
    { 
    who->set_temp("metal/where",4);
    return("[36m还不是那天跟李嫂聊天的时候提到的!!她当家的呀, 就曾挖了块铁回来给她瞧瞧呢!!\n
    听说是在某座山上挖到的!![0m\n");
    }
    else
    {
    return("[35m来来来, 我们一起去找李嫂聊聊去!![0m\n");
    }
}

void create()
{
    set_name("西域妇女",({"westarea woman","woman"}));
    set("gender", "女性");
    set("age",42);
    set("attitude","friendly");
    set("long",@LONG

	西域妇女!!闲着没事到朋友家去{开讲}, 这种长舌的人
	知道的名堂应该很多才对.....

LONG);
 
    set("combat_exp",70);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"妇女说: 走啰!!今天呀没有什么事做, 去找人聊聊天儿!!\n"+NOR,
    }) );
    set("inquiry",([
    "金属":(: ask_metal :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
