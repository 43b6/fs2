// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
  set ("short", "蜀山奇阵之阵心");
  set ("long", @LONG
所有的幻像向四周消逝了,你发现你处于一个奇异的房间,地上
有个巨大的太极图,黑白分明绕着一座金炉(golden fireplace)旋
转,四周的墙璧闪烁着七彩光芒,袅袅的清烟环绕四周,这就是蜀山
奇阵的阵心 ??
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "golden fireplace" : "金炉上面刻着:
    夫五行者,变化生物之道,金克木,木克土,
    土克水,水克火,火克金.  蜀山奇阵,如此而已...
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"mroom6",
]));
  set("light_up", 1);

  setup();
}
