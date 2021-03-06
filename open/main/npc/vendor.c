#include "/open/open.h"

inherit F_VENDOR;

string do_ask ();

void create()
{
	set_name("卖茶的老人", ({ "old man", "man" }) );
	set("nickname","驼老");
	set("gender", "男性" );
	set("age", 62);
	set("combat_exp",54);
	set("long", @LONG
你正盯着一位卖茶水的老人，瞧他的样子，应该是满经风霜的
江湖过来人，他的手上拿着一包东西，不知是什么名堂。
LONG);

	set("vendor_goods", ({
	    MAIN_OBJ"bento",
	    MAIN_OBJ"tea",
	}) );

	set("greeting_msg", ({
 	    "驼老说道: 客倌买壶茶喝吧!\n",
	}) );
	set("chat_chance", 8);
	set("chat_msg", ({
	    "驼老说道: 对付真正高手用硬砍的是不行的。\n",
	    "驼老说道: 可惜不知道哪里有真正无色无味的蒙汗药。\n",
	    "驼老说道: 角落那个好汉在这儿呆好久了，一壶茶都快喝光了。\n",
	    "驼老说道: 谁都知道真正高手是锋芒不露的。\n",
	    "驼老说道: 客倌您知道蒙汗药吗? 我找半天找不到。\n",
	}) );
	set("inquiry", ([
	    "硬砍"	:	"听听老人言吧，硬砍不如下药的好。",
	    "茶"	:	"客倌，买一壶茶吧。",
	    "真正高手"	:	"放眼天下，足以称为真正高手的，我看只有燕南天了吧。",
	    "高手"	:	"我还高脚咧。",
	    "哭风坡"	:	"这儿不就是哭风坡了吗?",
	    "蒙汗药"	:	"我手上这包不知是也不是？不过，我死也不会给你的。",
	    "好汉"	:	"他手上拿着一把生锈的铁刀，据说他是传说中的燕南天。",
	    "燕南天"	:	(: do_ask :),
	    "大侠燕南天":	(: do_ask :),
	]) );
	setup();
	carry_object(CENTER_OBJ"cloth1")->wear();
	add_money("silver", 10);
}

string do_ask()
{
  object	ob, env=environment(this_object());

  if (!ob=present("day", env)) {
    ob = new(MAIN_NPC"day");
    if (ob) ob->move(env);
    if (random(2))
      return "嘘，您瞧，他不就在那儿吗?!....小心他手中那把剑。\n";
    else
      return "你再看仔细，他不就在你旁边?\n";
  }
  return "您看，他正瞪着您看呢，客倌小心一些应付吧。\n";
}

int accept_fight(object me)
{
  return notify_fail ("驼老说道: 饶了我吧，我这把骨头哪里还能拆招解招哩。\n");
}

void die()
{
  object	me;

  me = this_object()->query_temp("last_damage_from");
  if (!me) me = this_object();
  tell_object(me, "...............\n");
  if (me->query_temp("quests/badman_license")) {
    tell_room(environment(),
	sprintf ("从%s的手里滚出一包纸包，不知是什么东西。\n",
	this_object()->name()) );
    new(MAIN_OBJ"paper")->move(environment());
    tell_room(environment(), sprintf ("%s被杀死了。\n",
	this_object()->name()));
  }
  ::die();
}
