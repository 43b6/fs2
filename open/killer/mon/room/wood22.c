//written by acelan...../u/a/acelan/room/wood22.c

inherit ROOM;

void create()
{
        set("short", "�����ϵ��ܵ�");
        set("long", @LONG
��������¥��, ������ķ��������Ͼ�Ȼ��һ��������Ƶ��ܵ�
, ���û���൱�̶ȵ���\��, ���޷�����ǰ������С�������̤����
֦, ����ǰ����
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood29.c",
       "west" : "/open/killer/mon/ghost/room/ghost1.c",
       "down" : "/open/killer/mon/room/wood15.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc2.c":2,
   ]));

   set("no_clean_up", 0);

   setup();
}
