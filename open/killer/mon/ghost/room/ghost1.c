//written by acelan...../u/a/acelan/ghost/room/ghost1.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰���");
        set("long", @LONG
������ɱ��Ĺ԰�����, �������ֲֿ���, ��ǰ������һ��ʯ��
, ��Լ�����ɸ�, ��������߸��֣�ɱ�ֵ�ʮ����Ĺ����֪�����涼
��Щʲô������
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost4.c",
       "west" : "/open/killer/mon/room/wood22.c",
   ]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black5.c" : 2,
]));
   setup();
}
