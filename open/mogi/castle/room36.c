
inherit ROOM;
#include <ansi.h>
void create () {
set ("short",HIB"青龙室"NOR);
        set ("long","这里就是青龙密室，墙上雕着一只栩栩如生张牙舞爪的青色巨龙，
但是屋内正中央放着一本密笈，隐隐有火焰缭绕，宝光流动不息，
令你不禁呆了一呆。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "north" :  __DIR__"room37",
      ]));
        set("objects",([ /* sizeof() == 1 */
        __DIR__"obj/fire_book" : 1,
 //       __DIR__"obj/sspill" : 2,
      ]));

        setup();
}
