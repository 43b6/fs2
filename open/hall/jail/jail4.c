// Room: /open/hall/jail/jail4.c

inherit ROOM;

void create()
{

        set("short", "监    牢");
        set("long", @LONG
一个充满恶臭及汙秽的地方，在墙角的石床上散乱洒着几束稻草!!
地板上由于太过潮湿，显的一片泥泞不堪，继而冒出阵阵的剧毒沼气!!
墙上斑斓的血迹，使人心里升起了一股不祥预兆，似乎正强烈的暗示着
死亡的讯息!!
LONG);

        set("exits", ([ ]));
        set("no_clean_up", 0);

        setup();

        replace_program(ROOM);

}

