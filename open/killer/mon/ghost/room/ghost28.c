//written by acelan...../u/a/acelan/ghost/room/ghost28.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰С��");
        set("long", @LONG
����һ����Ĺ԰�е�С��, ��������ȴ���������, ��������Ϊ
С������Ϊֹʱ, ���Ȼ���ö�����Լ����Щʲô����, ��һ���ŷ�
��, С���������޵������Ŷ������졣
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"ghost21.c",
       "east"  : __DIR__"ghost29.c",
       "west"  : __DIR__"ghost27.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black3.c" : 1,
  "/open/killer/mon/ghost/npc/black4.c" : 1,
]));
   setup();
}
