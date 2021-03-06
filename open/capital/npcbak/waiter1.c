// /d/snow/npc/waiter.c
#include </open/open.h>

inherit F_VENDOR;

void create()
{
	set_name("店小二", ({ "waiter" }) );
	set("nickname","天耳通");
	set("gender", "男性" );
	set("age", 22);
	set("long",
		"这位店小二正笑咪咪地招呼客人，还不时被唤去问东问西。\n");
	set("combat_exp",110);
	set("attitude", "friendly");
	set("inquiry", ([
	"thief" : "想问事情就得赏些小费吧..\n\n店小二的大手在你面前晃啊晃的。",
	]));
	set("rank_info/respect", "小二哥");
	set("vendor_goods", ({
		"/obj/example/wineskin",
		"/obj/example/dumpling",
		"/obj/example/chicken_leg",
        CAPITAL_OBJ"tea",
        COMMON_OBJ"needle",
	}) );
	set("greeting_msg", ({
	"来来来..客倌要点什么..\n",
	"小弟正是包打听, 天下事事事都晓..\n",
	"来喔..便宜的特产喔..\n",
	}));
	setup();
}

int accept_object(object who, object ob)
{      
	string *secret=
	({" 呵呵..那个萧甚么的大盗，听说逃到蜀山去了..\n",
	  " 唉..杨老可是清官耶..居然要被砍头了..\n",
	  " 王老板最近要嫁女儿了耶..\n",
	  " 举头三尺有 Wade..亏心事莫做!\n",
	  " 李大婶昨儿个被她儿子气死了..真是不孝子阿..\n",
	  " 听说干将剑削铁如泥哩!\n",
	  " 听说无赖窝里的那两只无赖地痞也懂得不少事耶..\n",
	  " 街口的那个武林豪客每次都在吹嘘他差点抓到那京城大盗, 也不知是真是假..\n",
	});
	if( ob->value() > 100 )
        {   
          command("say 嘿嘿.."+RANK_D->query_respect(ob)+"真是上道..\n");
          command("say 让我天耳通来告诉你天下事..\n");
	  command("whisper "+who->query("id")+secret[random(sizeof(secret))]);
	}												
        else
          command("say 你也太瞧不起我天耳通了。\n");
       	return 1;
}       								
