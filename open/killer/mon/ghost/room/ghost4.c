//written by acelan...../u/a/acelan/ghost/room/ghost4.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰С��");
        set("long", @LONG
����һ����Ĺ԰�е�С��, ��ͨ�˴�, ����ͨ��������Ĺ, С��
�򱱲��ϵ�����, ��������һ��Ƭ������ͷ, �����߿�������������
δ���õ�Ĺ��, ����Ӧ����û������������ɡ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost7.c",
       "south" : __DIR__"ghost1.c",
       "west"  : __DIR__"ghost3.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
