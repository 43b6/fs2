#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(HIY"蛇尾模组"NOR,({"snake tail","tail","c-snake-3"}));
	set_weight(100);
	set("long","
这是一个蛇的尾巴部分，还欠缺蛇头与蛇身，才能组合(compose)
成一条完整的蛇。\n");
	set("unit","个");
	set("value",100);
setup();
}