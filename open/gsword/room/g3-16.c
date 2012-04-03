// Room: /open/gsword/room/g3-15.c
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
这是通往仙剑七侠寝居的木制走廊, 在这儿听不到外面的吵杂声, 有的只是
淡淡得花香, 和和煦的光线。东边是四侠赵鹤之寝居, 西边是五侠梁发之寝居 ,
当然他们都忙着自个儿的事, 很少会在寝居内做白日梦的 .

LONG);

  set("exits", ([ /* sizeof() == 4 */
    "west" : "/open/gsword/room/g3-22.c",
    "north" : "/open/gsword/room/g3-15",
    "south" : "/open/gsword/room/g3-17",
    "east" : "/open/gsword/room/g3-21.c",
]));

  set("light_up", 1);

  setup();
}
