//written by acelan...../u/a/acelan/ghost/room/ghost25.c

inherit ROOM;

void create()
{
        set("short", "�����");
        set("long", @LONG
������ɱ��Ĺ԰����ҵ�һ��, ����Ĺڣһ��һ�ѵ���������,
������������Ǻ���¶�����, ���������ټ��ϲ�ʱ���������ԵĹ�
��, û���˻���Ϊ�����ǿ��Ծ���֮�ء�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"ghost18.c",
       "east"  : __DIR__"ghost26.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black4.c" : 1,
  "/open/killer/mon/ghost/npc/black5.c" : 1,
]));
   setup();
}
