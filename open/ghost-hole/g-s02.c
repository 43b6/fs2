inherit ROOM;
#include <ansi.h>
void create ()
{
set("short",YEL"双冥祭台"NOR);
set("long",@LONG
这里是【生】冥王的祭台, 在你眼前有一个
小小的石板(stone),除此之外, 里面还放置了许
许多多奇奇怪怪的工具, 看来可能都是祭祀用的
工具。
LONG);
set("item_desc",([
"stone":"诚心奉献(g-sac)死冥王之头者，吾人将以‘生命之水’作为谢礼。\n",
"石板":"诚心奉献(g-sac)死冥王之头者，吾人将以‘生命之水’作为谢礼。\n",
]));
set("no_light",1);
set("exits",([
"west":__DIR__"g-s01",
]));
set("no_transmit",1);
setup();
}

void init()
{
add_action("do_gsac","g-sac");
}

int do_gsac(string arg)
{
object ob,ob2,me;
me=this_player();
ob=present("death-ghost-head",me);
ob2=new(__DIR__"obj/living-water");
if(!arg)
return notify_fail("你要奉献什么东西??\n");
if(arg!="death-ghost-head"&&arg!="head")
return notify_fail("祭祀神台并不接受你所奉献的物品!!\n");
if(!present("death-ghost-head",me))
return notify_fail("你身上并没有死冥王的头!!\n");
destruct(ob);
message_vision(HIY"一道黄色的光芒从天而降, 光柱中缓缓落下了一滴
生命之水, 刚好落在$N的手中!!\n"NOR,me);
ob2->move(me);
tell_object(me,HIY"你得到了一滴生命之水\n"NOR);
me->set_temp("ghost-hole/sac/death",1);
return 1;
}

