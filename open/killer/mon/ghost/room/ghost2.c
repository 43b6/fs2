//written by acelan...../u/a/acelan/ghost/room/ghost2.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰");
        set("long", @LONG
������ʮ����Ĺ��һ��, ���ڵش�ƫԶ, �ټ��Ϸ�ˮ�����Ǻ���
��, �������ﲢû�����з�Ĺ������Ұ�ݼ���, �Ҽ���߻谵, ����
�Ŵ���������, ���Ի��ǲ�Ҫ�����ĺá�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost5.c",
       "east"  : __DIR__"ghost3.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black4.c" : 1,
  "/open/killer/mon/ghost/npc/black5.c" : 1,
]));
   setup();
}
