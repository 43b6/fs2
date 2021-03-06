#include <ansi.h>
inherit NPC;

string ice_spell();
string find_hole();

void create()
{
    set_name("蝶魂",({"die soul","soul","die"}));
    set("long","她是陆清风当年的爱人－上官蝶，因为某些事情而受罚被冰封为雕像。\n");
        set("no_kill",1);
        set("no_fight",1);
        set("no_conjure",1);
        set("inquiry",([
                "冰封秘咒" : (:ice_spell:),
                "洞穴" : (:find_hole:),
                "释放" : "只要将当年我师父所用的法术再一次施展在奴家身上，奴家就可以重新获得自由了...\n",
        ]));
    setup();
}

void init()
{
    object me = this_player();
        string gen;

    if(me->query_temp("icestorm/ice_spell")==1) {
        if(me->query("gender")=="男性") gen = "道长";
        else gen = "道姑";
    
        write(HIC"蝶魂说道：多谢"+gen+"将我召唤出来...\n\n"NOR);
                write(HIC"虽然奴家的灵魂获得解放，但躯壳还是被「冰封秘咒”给囚住了...\n\n"NOR);
                write(HIC"只希望"+gen+"好人作到底，将我给「释放”出来...\n\n"NOR);
                me->set_temp("icestorm/ice_spell",2);
    }
}

string ice_spell()
{
        object me = this_player();
        
        if(me->query_temp("icestorm/ice_spell")==2)
        {
                command("say 我只知道我师父将我冰封之后，便带着一本书跳进了一座「洞穴”之内...");
                me->set_temp("icestorm/ice_spell",3);
                return "或许那本书就是‘冰封秘咒’吧...";
        }
}

string find_hole()
{
        object me = this_player();
        
        if(me->query_temp("icestorm/ice_spell")==3)
        {
                me->set_temp("icestorm/ice_spell",4);
                return "嗯...你试着转动(turn)我的雕像看看...";
        }
}

