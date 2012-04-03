inherit NPC;

void create()
{
        set_name("三首九尾龟", ({ "nine-switch tortoise","tortoise" }) );
        set("race", "野兽");
        set("age", 1000);
        set("long", "
三个好像牛头一般大的头部，真不知道牠要怎么协调彼此的动作？而那满
是花纹的龟壳，倒是相当的漂亮，听说乌龟壳的花纹越多，表示年龄越大
，看样子牠大概活了上千年了。
");
        set("str", 68);
        set("con", 40);
	  set("kee",10000);
	 set("max_kee",10000);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "头部", "龟壳","尾巴"  }) );
        set("attitude","peacful");
	set("combat_exp",1000000);
	set_temp("apply/attack",100);
	set_temp("apply/dodge",100);
        set("chat_chance",10);
        set("chat_msg", ({
        "九尾龟慢慢的爬着。\n",
        }) );
       setup();
}
void init()
{
        object ob;
        ::init();
        if(interactive(ob=this_player()) && !is_fighting())
        {
        remove_call_out("greeting");
        call_out("greeting",2,ob);
        }
}
void greeting(object ob)
{
if(ob->query("pass_gblade")<6)
        this_object()->kill_ob(ob);
}
void die()
{
        object ob;
        ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<6)
	ob->set("pass_gblade",6);
::die();
}

