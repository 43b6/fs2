//written by acelan...../u/a/acelan/room/wood18.c

inherit ROOM;

void create()
{
        set("short", "神木之底");
        set("long", @LONG
这里是中央神木的底部, 神木的中心已经被人挖空, 可以直接通
往地面, 垂下来的木梯受潮很严重, 看起来似乎已经不堪使用了, 四
周布满了青苔, 显然已经很久没有人到过这里来了。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "up" : "/open/killer/mon/room/wood19.c",
       "west" : "/open/killer/mon/room/wood17.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }
