//written by acelan...../u/a/acelan/ghost/room/ghost19.c

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
       "north" : __DIR__"ghost26.c",
       "south" : __DIR__"ghost12.c",
       "east"  : __DIR__"ghost20.c",
       "west"  : __DIR__"ghost18.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
