#include <ansi.h>
#include <room.h>

inherit ROOM;
void create()
{
set("short","仙境灵池");
set("long", @LONG
昆仑山中的聚灵圣地，眼前池水绿波荡漾，四周灵气袅袅上升，
一座石椅上流露出阵阵彩霞，一幅绿光环绕的骨骸盘坐其中，令你不
知觉的想对它膜拜(pray)起来。

                陆皓云的骨骸 (Skeleton)

LONG);

        set("light_up", 1);
        set("light", 1);
        set("no_chome", 1);
        set("no_fanset", 1);
        set("exits", ([ /* sizeof() == 1 */
        "south" : "/open/tendo/room/b1",
        ]));
        setup();

}

void init()
{
        add_action("do_pray", "pray");
}

int do_pray(string str){
   object me;
   me = this_player();

        if(!str || str != "skeleton"){
                return notify_fail("你想拜谁啊？\n");

      return 1;
    }
            tell_object(me,HIY"妳双膝跪地，虔诚的对着陆皓云的骨骸膜拜起来。\n"HIG"忽然间一道细微的声音传进你的耳朵。\n"HIR"吾..早知....时日无多.......\n只是...除魔大业....未..成\n天下...未能太平..\n今留下...灵鹰于此\n盼....有缘人..得以....收服\n除魔卫道....保天下...之..太平...\n则吾虽立于...九泉之下\n其心..亦安......\n"NOR);
            return 1;
}
