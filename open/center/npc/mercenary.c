// rewriten from bully.c
// mercenary.c by powell

inherit NPC;
int do_say();
void create()
{
        set_name("镖师", ({ "Mercenary","mercenary" }) );
        set("race", "人类");
        set("gender", "男性");
        set("age", 25);
        set("long","武威镖局的镖师,若非有一点本事,普通人在这是讨不到饭吃的.\n"+
        "他正为了增进自己本身武学而辛勤的与别人对招.\n");
        set("cps", 5);
        set("str", 28);
        set("cor", 20);
        set("kar",10);
        set("spi", 1);

        set( "inquiry", ([
             "here" : "这儿是武威镖局的总行,若没什么事就不要在此逗留."
             ]));               
        set("chat_chance_combat", 20);
        set("chat_msg_combat", ({
        (: this_object(),"do_say" :),
        "镖师说道 : 这家伙交给我就好了, 你们都别插手。\n",
         }) );
                
        set_temp("apply/attack", 1);
           set_skill("unarmed",40);
        set("combat_exp",280);
        setup();
        add_money("silver",3);
}

int do_say()
{
        object me=this_player();
        tell_room(environment(this_object()),
        "镖师喝道：可恶!! "+RANK_D->query_rude(me)+"你是活的不耐烦了吗? 竟敢来武威镖局来撒野。\n");
}
        
void defeated_enemy(object ob)
{
        say("[36m镖师冷笑一声道 : 没本事也敢到这来撒野。[0m\n");
        remove_killer(ob);
}        
