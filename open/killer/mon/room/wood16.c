//written by acelan...../u/a/acelan/room/wood16.c

inherit ROOM;

void create()
{
        set("short", "�ص������");
        set("long", @LONG
һ�߽��ص�, һ�ɺ���ʹ����˸�����, ���ԵĻ���յ����Ӱ
��ҡ�β���, �������ﲢ���Ǻ����˼�, ˵��������δ֪��Σ��, ��
��ҪС�ĵ�ǰ����
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood23.c",
       "up" : "/open/killer/mon/room/wood12.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc2.c":2,
   ]));
   set("no_clean_up", 0);

   setup();
}
