#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIC"聚灵正殿"NOR);
	set ("long", @LONG
殿内缭绕着些许的灵气，灵气在空中缓缓飞旋，并慢慢朝着凤翔
天聚集，灵光并将整个聚灵正殿照耀的如白昼般明亮，若大的殿堂之
中，足可以容下数百人之大，让聚灵山庄更显得壮丽。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor25",
	"south"	: __DIR__"manor02",
	]));

	set("light_up", 1);

	setup();
}
