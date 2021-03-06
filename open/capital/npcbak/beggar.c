// beggar.c
// first written by grand 9/30/1995
// fixed by wade

inherit NPC;

void create()
{
	set_name("乞丐", ({ "beggar" }) );
	set("race", "人类");
	set("age", 23);
	set("long", "一个浑身脏兮兮的乞丐，用乞求的眼光看着你.\n
	              你想起你是如此的杀孽罪重,不禁想帮他...\n ");
	set("str", 24);
	set("cor", 26);
	set("chat_chance", 15);
	set("chat_msg", ({
		"乞丐用手拉了拉你袖子。\n",
		"乞丐抱住你的脚，想讨东西吃。\n",
		"乞丐对着你喃喃自语。\n" }) );
	set("inquiry", ([
	"thief" : "给我一些钱, 我就偷偷说与你听。",
	]));
	set("combat_exp",256);
	set_temp("apply/attack", 10);
	set_temp("apply/armor", 3);

        setup();
carry_object("/obj/cloth")->wear();
}

void reset()
{
  delete("accept_object");
}

// 用总次数故定对某些玩家不公, 会无法学到, 改成一人只给一次机会
// reset 的时候或者死掉重生的时候清掉重来, fixed by wade 12/13/1995
int accept_object(object who, object ob)
{
	int b, value;

	if (!query("accept_object/"+who->query("id"))) {
	  b = who->query("bellicosity"); 
          if( (value=ob->value())  && b>0 ) {
		value = value/10;
		if (value < 1) value = 1;
		b = b - value;
		if (b < 0) b = 0;
	        who->set("bellicosity", b); 
		add("accept_object/"+who->query("id"), 1);
		write("你觉得罪孽洗清了一些.\n");
	  }
	}
	else
	  say ("谢谢! 谢谢!\n");
	destruct(ob);
        return 1;
}
