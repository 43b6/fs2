
inherit NPC;
void create()
{
set_name("铜人",({"man"}) );
	set("gender", "男性" );
        set("age",45);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
set("long","一个给你练习用的铜人.\n"
                "他正忙着他的工作.\n");
set("combat_exp",5000);
	set("attitude", "peaceful");
set("max_kee",2000);
        set("chat_chance", 25);
set_skill("parry",20);
set_skill("dodge",20);
set_skill("unarmed",15);
	setup();
         	
}

