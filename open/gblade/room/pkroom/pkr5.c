// pkr5.c by konn
inherit ROOM;

void create()
{
        set("short", "第一武道馆");
        set("long", @LONG
这里是天下第一武道会馆, 抬头一看, 你的头上有一块刻着「天下第一堂”
的桧木扁额, 在你的正前方是一个长宽各百米的比武教练场, 你的右手边陈
列着许多种兵器, 有弓、弩、枪、刀、剑、矛、盾、钺、斧、戟、鞭、戬、
挝、殳、叉、爬头、绵绳套索、白打等十八种兵器随你挑选, 在场子的左边
站着一个身穿青布衣, 脚上套着僧侣鞋的壮汉, 他就是比武大会的主持人。
看着场子里几个大汉正在比试, 你不禁也想下去和他们较量较量。



LONG);
        set("exits", ([ /* sizeof == 4 */
            "north" : __DIR__"pkr2",
            "east"  : __DIR__"pkr6",
            "west"  : __DIR__"pkr4",
            "south" : __DIR__"pkr8",
      ]));

        set("objects", ([ /* sizeof == 1 */
            "/open/gblade/npc/officer1" : 1,
      ]));
set("no_scale",1);
        set("no_transmit", 1);
        set("light_up", 1);
        set("no_clean_up",1);
        setup();
}

