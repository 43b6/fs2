//written by acelan...../u/a/acelan/ghost/room/ghost20.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰С��");
        set("long", @LONG
����һ����Ĺ԰�е�С��, ��ͨ�˴�, ����ͨ��������Ĺ, С��
�򱱲��ϵ�����, ����ʬ��ɢ������, ������Ӧ���������, ������
��һ��С��Ĺ, �������������µġ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost27.c",
       "south" : __DIR__"ghost13.c",
       "east"  : __DIR__"ghost21.c",
       "west"  : __DIR__"ghost19.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black4.c" : 1,
  "/open/killer/mon/ghost/npc/black4.c" : 1,
]));
   setup();
}
