//written by acelan...../u/a/acelan/ghost/room/ghost9.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰С��");
        set("long", @LONG
����һ����Ĺ԰�е�С��, ��ͨ�˴�, ����ͨ��������Ĺ, ��С
�������ľ�ͷ, ��һ���ô�ķ�Ĺ, ��������С������רΪ�Ǹ���Ĺ
���ٵ�, ����������һ��С��Ĺ��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east"  : __DIR__"ghost10.c",
       "west"  : __DIR__"ghost8.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black4.c" : 1,
  "/open/killer/mon/ghost/npc/black5.c" : 1,
]));
   setup();
}
