// 段家 门人 made by onion
#include </open/open.h>
inherit NPC;
void create()
{
	set_name("段小诗",({"duan"}));
	set("long","段小诗是段云的独生女, 她就站在窗前, 襦裙袅袅, 蛮纤垂笑。\n");
	set("gender","女性");
	set("class","scholar");
        set("combat_exp", 4000);
        set("attitude","peaceful");
	set("age",19);
	set("chat_chance", 5);
	set("chat_msg", ({
	"段小诗道: 大师哥怎么还没回来啊。\n",
        "段小诗道: 好想学「一阳心法秘笈”上的绝招喔。\n",
	}));
	set("inquiry", ([
	"thief" : "京城的盗贼喔, 关我们段家什么事啊?",
	"scar"  : "人家哪有什么伤痕啊, 你不要胡言乱语的喔。",
	"sad_story" : "人家年纪轻, 问什么伤心往事嘛..",
        "一阳心法秘笈"  : "这里头记载了一个绝招喔。",
	]));
	set("force",100);
	set("max_force",100);
	set("force_factor", 1);
	set_skill("force",10);
        set_skill("unarmed",30);
	set_skill("sunforce",10);
        set_skill("linpo-steps",30);
        set_skill("six-fingers",20);
        map_skill("force","sunforce");
	map_skill("dodge","linpo-steps");
	map_skill("move","linpo-steps");
        map_skill("unarmed","six-fingers");
        set_temp("apply/dodge",30);
	setup();
	carry_object(PING_OBJ"cloth2")->wear();
	carry_object(PING_OBJ"cape0")->wear();
	add_money("coin",100);
	create_family("段家",11,"弟子");
}

