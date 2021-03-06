// Room: /d/wiz/hall1.c
#include <room.h>


inherit ROOM;

void create()
{
	set("short", "巫师交谊厅");
	set("long", @LONG
这里是巫师们聊天讨论的地方，如果巫师们要开会的话，也多半会选在这
里举行, 有什么重大事情也大部份是在这儿公布。如果您是新手巫师, 请先多
读读文件, 多上线, 多找高级巫师聊天或讨论事情, 升级的最主要参考要件之
一就是: 您是否有心为这个站贡献心力, 因此, 常常上线是必须的, 也是基本
要求, 别一当上 immortal 就想要有自己的目录, 就想要呜师披风, 就想要有
权力编辑档案, 要知道, 权力是您自己努力才能拥有的. 祝各位当巫师都能功
课顺利, 事业发达, 爱情的路上有她陪伴, 身体健康, 财源广进.
    往东是巫师会客室, 专门用来讨论跟玩家有关的事, 北边是您破斯特您的
想法的地方, 只有您的想法, 才能造成这儿的新特色. 南边是程式讨论区, 欢
迎各位多多利用该版讨论程式写作技巧, 也欢迎到我家去参考参考. 西边则是
邮局, 跟中央驿站相通.
LONG
	);
	set("valid_startroom",1);
	set("exits", ([ /* sizeof() == 2 */
	    "north" : "/open/wiz/jobroom",
	    "east"  : "/open/wiz/entrance",
	    "south" : "/open/wiz/program_room",
	    "west"  : "/open/wiz/post_office",
	]));

	set("no_clean_up", 0);

	setup();
	call_other("/obj/board/wizard_b", "???");
}
