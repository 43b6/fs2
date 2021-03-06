// 段家 门人
#include </open/open.h>
inherit NPC;
string do_linpo();
void create()
{
        set_name("段七",({"duan chi","chi","duan"}));
        set("long","段七是段云的义子, 是段云二十年前自山道旁捡来的婴儿, 因为那"+
"天是大年初七, 所以便取名为段七。\n");
        set("gender","男性");
        set("class","scholar");
        set("attitude","heroism");
        set("chat_chance", 5);
        set("chat_msg", ({
        "段七说: 唉....凌波微步的步法真是复杂, 搞得我头都晕了。\n",
        "段七说: 义父给我的这卷轴真是怪异, 上头的步法都看不懂。\n"
        }));
        set("age",20);
        set("inquiry", ([
        "thief" : "什么贼不贼的, 没看到我正专心练「凌波微步”吗？",
        "scar" : "唉..别烦我, 没看过这种人啦",
        "sad_story" : "义父的事？嗯..不清楚..。",
        "凌波微步秘笈" : (: do_linpo :),
        ]));
        set("force",500);
        set("max_force",500);
        set("combat_exp", 10000);
        set_skill("force",30);
        set_skill("dodge", 5);
        set_skill("parry", 5);
        set_skill("unarmed",10);
        set_skill("sunforce",30);
        set_skill("linpo-steps",5);
        set_skill("six-fingers",40);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("unarmed","six-fingers");
        set_temp("apply/damage",40);
        set("force_factor", 5);
        setup();
        carry_object(PING_OBJ"linpo_book");
        carry_object(PING_OBJ"neck1")->wear();
        add_money("silver",1);
        create_family("段家",11,"弟子");
}

string do_linpo()
{
        object me=this_player();

        if(me->query("family/family_name")!="段家") return 0;
        if(me->query("marks/ask_linpo")!=2) return 0;

        if(present("book",this_object())){
        me->set("marks/ask_linpo",3);
        return "秘笈???不就是我手上拿的这本?";
        }
        else{
        return 0;
        }
}
