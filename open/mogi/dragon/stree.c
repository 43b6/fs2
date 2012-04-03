// Room: /u/p/poloer/dragon/stree
inherit ROOM;

void create ()
{
  set ("short", "树林");
  set ("long", @LONG
一片广大的树林，树木长的都非常的高耸，而它茂密的叶子，把
阳光都遮住了，使得这里看起来都暗昏昏的。树木多的都看不到前方
的路，只能慢慢的前进。

LONG);
        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"a6",
  "east" : __DIR__"stree-1",
]));
  set("outdoors", "/u/p");

  setup();
}
