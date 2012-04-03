#include </open/open.h>

inherit NPC;
void create()
{
        set_name("李秀才", ({ "scholar lee","lee","scholar" }) );
	set("race", "人类");
	set("class","scholar");
	set("age", 33);
	set("long","他是一位悠游于武林里的书生, 看他笑容满面的样子, "+
	"大概日子还过的不错吧。\n");

        set("chat_chance",10);
        set("chat_msg", ({
"李秀才吟道:        「杨柳青青江水平，闻郎江上唱歌声。\n                    东边日出，西边雨，道是无晴，还又晴？”\n",
"李秀才吟道:        「万里清江万里天，一村桑柘一村烟。\n                    渔翁醉着无人唤，过午醒来雪满船。”\n",
"李秀才吟道:	  「秦楼几夜惬心期，不料仙郎有别离。\n                    睡觉莫言云去处，残灯一盏野娥飞。”\n",
	}));                                            	         

        set("chat_chance_combat", 20);
        set("chat_msg_combat", ({
        "李秀才道：出外江湖何必如此动气呢?!\n",
	 }) );
		
	set_skill("dodge",40);
	set_skill("parry",20);
	set_skill("stabber",40);
	set("combat_exp",4000);
	setup();
        add_money("coin",500);
        carry_object(CAPITAL_OBJ"fan0")->wield();
        carry_object(CAPITAL_OBJ"head0")->wear();
        carry_object(CAPITAL_OBJ"stabber_book");
}

void defeated_enemy(object ob)
{
	say("[36m李秀才微微揖了一躬道 : 承让承让。[0m\n");
        remove_killer(ob);
}        
