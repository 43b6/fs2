//written by acelan...../u/a/acelan/ghost/room/ghost18.c

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
       "north" : __DIR__"ghost25.c",
       "east"  : __DIR__"ghost19.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
