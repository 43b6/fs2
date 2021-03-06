// 本档案放在 /d/wiz/npc/test.c
// 有关于 npc 的种种设定, 请到 /doc/build/npc 去参考
inherit NPC;

string do_ask (object me);
int test();
int random_move();

void create()
{
        set_name("测试员", ({ "test man", "man" }) );
        set("long", "你看到的是测试员, 是菠萝面包(wade)的最爱。\n");

	// 年龄
	// 由于系统将会依年龄而计算出, 该怪物之天赋及基本状态,
	// 故请务必设定怪物的年龄。
	set( "age", 15);

	// 天赋, 请参考 help gift
	// set( "属性", 数值 );		<-- 数值范围: 10 - 30
	// 如果没有设定, 将由年龄计算
        set("str", 33);
        set("cor", 30);

	// 状态
	// 如果没有设定, 将由年龄计算, 请参考 help stats
	set( "gin", 200 );
	set( "force_factor", 3 );

	// 一般没有特殊技能的怪物, 其战斗经验(combat_exp)几乎决定了怪物的强度。
	// set( "combat_exp", 数值 );
	// set( "score", 数值 );
        set("combat_exp", 100);

	// 技能
	// 如果想做些较厉害的怪物或让玩家学技能时, 最好的方式即是设定技能。
	// 设定方式:
	//		1.怪物学过的技能: set_skill( "技巧名", 数值 );
	//		2.怪物施展的技能: map_skill( "技巧种类", "技巧名" );

	// 种族
	// 种族会影响攻击方式, 请参考 /doc/build/npc 的第八项
	// 如果未指定种族, 系统将会自动选定人类。
	// 目前已知的有: 人类, 赛亚人, 妖魔, 野兽 
	set("race", "人类");

	// 性别
	// 依种族之不同, 有两种系统: 1.男性, 女性。
	//                           2.雄性, 雌性, 中性。
	// 设定方式: set( "gender", "性别" );
	set( "gender", "男性");

	// 设定 npc 攻击方式及受功击部位。
	// set( "limbs", ({ "受功部位1", "受功部位2", ...}) );
        set("limbs", ({ "头部", "身体", "前脚", "后脚", "尾巴" }) );
	// set( "verbs", ({ "攻击方式1", "攻击方式2", ...}) );
        set("verbs", ({ "bite", "claw" }) );

	// 暗语
	// 我们可以在怪物上设定某些暗语, 使得当玩家询问(ask)特定之
	// 关键字时, 怪物能自动做我们预设之动作。
	// 设定方式: set( "inquiry", ([
        //	          "暗语1" : "回应之语\n",
        //	          "暗语2" : (: this_object(), "呼叫副程式之名" :)
        //	        ]) );
	set("inquiry", ([
	    "wade"	:	"哈哈, 他不是史上最伟大的神吗?\n",
	    "god"	:	(: do_ask :),
	]) );

        // attitude npc 的战斗行为请参考 /doc/help/attitude
        set("attitude", "friendly");

        set("chat_chance", 10);
        set("chat_msg", ({
	    (: this_object(), "random_move" :),
	    (: this_object(), "test" :),
	    (: this_object(), "test" :),
	    (: this_object(), "test" :),
	    "测试员说道: 想知道怎么写好一个 npc 吗? 看看我的档案就知道了\n",
	    "测试员说道: 有事没事用 help npc_example\n",
	    "测试员说道: 其实喔, /doc 下很多资料的啦\n",
	    "测试员说道: 写程式最快最安全的方法是参考别人写好的例子\n",
	    "测试员说道: 巫师如果不知道 more, cat, cd, wiz 那大概可以拿面线上吊自杀了\n",
	    "测试员说道: ㄟ, 如果有问题喔, 可以用 wiz channel 问, 这样会比较快\n",
        }) );

	// 底下的可以用到 eqs/weapons 里, 可增强该 mob 的能力
	// if armor then 加 (+xxx)
	// if /dodge 加enable level
	// if spells 加enable spells level
        set_temp("apply/attack", 15);
        set_temp("apply/damage", 6);
        set_temp("apply/armor", 2);

        setup();
}

//   /std/npc/npc.c 里面预设了几个 function
//   所谓的 npc 其实是指 mob & player, 也就是在网路上所模拟出来的角色
// object carry_object(string file)
// 给 npc 加一项装备
//  参考 /d/npc/sungoku.c
// object add_money(string type, int amount)
// 给 npc 钱, 这样当 npc 被杀死之后, 玩家可以从它尸体拿到钱
//  参考 /d/oldpine/npc/bandit.c
// int random_move() 可以用来在 npc 受伤过重或某种情况下自动逃跑
//  参考 ???
// 也可以加上个 return_home() 让 mob 跑回家
//  参考 ???
// chat_msg  其实是由 chat() 函数呼叫的, 可以自己定义 chat()
//  参考 /d/wiz/npc/judge.c
// void cast_spell(string spell)  可以让 npc 施法术
//  参考 /d/temple/npc/taoist.c
// int exert_function(string func)  可以让 npc 使用自己的内功心法
//   参考 /d/waterfog/npc/guard.c
// int perform_action(string action)  可以让 npc 使用自己的 skill
//   参考 /d/snow/npc/girl.c"
// is_fighting() 可以侦测是否战斗中
//   参考 /d/npc/sungoku.c


// 定义在人物物件中的附加函数(apply functions)
// void defeated_enemy(object victim)
// 当这名人物打昏一个敌人的时候会呼叫这个附加函数，victim 即是被打昏的的敌人物件
// 呼叫者: COMBAT_D
//   参考: /d/snow/npc/sungoku.c
// void killed_enemy(object victim)
// 当这名人物杀死一个敌人的时候会呼叫这个附加函数
// 呼叫者: COMBAT_D
//   参考: /oldpine/npc/spy.c
// int accept_fight(object who)
// 当有其他生物对这个人物下 fight 指令的时候，会呼叫这个附加函数
// 呼叫者: "fight" 指令
//   参考: /d/npc/sungoku.c
// int accept_object(object who, object item)
// 当有人用 give 指令给这个非玩家人物东西时，会呼叫这个附加函数
// 呼叫者: "give" 指令
//   参考: /d/snow/npc/dog.c
// void recruit_apprentice(objct apprentice)
// 当一个人物收了另一个人物做弟子时会呼叫这个附加函数，
// 呼叫者: "apprentice" 指令
//   参考:   ????

string do_ask (object me)
{
/*
  if (!arg)
    return "你想问我什么啊?!\n";
*/

  return "难道你不知道最伟大的神是菠萝面包(Wade)吗?\n";
}

int test ()
{
  tell_room (environment(this_object()),
             "测试员说道: hahaa......I am a super test man...\n");
}

int random_move ()
{
  tell_room (environment(this_object()),
             "测试员说道: hahaa......I am a super test man...\n");
  // ::random_move();
}
