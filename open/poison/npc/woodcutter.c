inherit NPC;

void create()
{
	set_name("樵夫",({ "woodcutter","cutter" }) );
	set("long", "这是一个平凡的樵夫，但不知他在喃喃自语些什么。\n");

	set( "age", 35);

	set("str", 32);
        set("cor", 30);


	set("combat_exp",264);


	set_skill("dodge",10);
	set_skill("hammer",20);

	set("race", "人类");

	set( "gender", "男性");


        set("attitude", "friendly");

	set("chat_chance",10);
        set("chat_msg", ({
	"樵夫说道:最近这附近常常有魔教徒出末。\n",
	"樵夫喃喃自语:住在北边的猎人居然不怕魔教徒。\n",
	"樵夫说道:我怀疑他也是魔教徒。\n",
	 }) );
    setup();
}
