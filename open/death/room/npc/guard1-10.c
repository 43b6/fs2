//  guard1-10 make by pokai

inherit NPC;

void create()
{
	set_name("关卡守卫",({"guard"}));
        set("gender", "男性");
	set("age",500);
        set("long","
    一只相貌丑恶的鬼卒守卫，你瞧他那副穿金带银的模样，不禁怀疑一般的守卫
怎会这样有钱？　难道...... 不如问问他怎样通过(pass)这里好了。\n");

        set("chat_chance", 1);
        set("chat_msg",({
        "关卡守卫用古怪的语调喝道：「你看什么看啊！小心老子扁你！”\n",
 	"关卡守卫用斜眼瞄你，露出贪婪的笑容。\n",
        }));

        set("inquiry", ([
            "pass" : "没听说过贿赂(bribe)啊！难道要老子教你？\n",
        ]));

	setup();
}

int accept_fight(object me)
{
        command("say 你老师咧！去去去....连你老子都想扁！\n");
        return 0;
}
