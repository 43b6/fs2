//written by acelan...../u/a/acelan/ghost/room/ghost26.c

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
       "south" : __DIR__"ghost19.c",
       "east"  : __DIR__"ghost27.c",
       "west"  : __DIR__"ghost25.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
