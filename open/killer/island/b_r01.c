#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",HIW"走道"NOR);
set("long",@LONG
你慢步的行走，底板却因为受重而发出"吱吱"的响声，看来这里结构似乎已经
快要腐朽掉了，你似乎得小心一点啰。
LONG);
set("exits",([
"north":__DIR__"b_s",
"south":__DIR__"b_r02",
]));
setup();
}