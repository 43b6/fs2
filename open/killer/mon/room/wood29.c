//written by acelan...../u/a/acelan/room/wood29.c

inherit ROOM;

void create()
{
        set("short", "�����ϵ��ܵ�");
        set("long", @LONG
����������һֻ���ϵķ�è, ��������Ϊ���ɵ�����ץ����ȸ,
��������һ���м�֧����׶��ǧ�ź�, ���������ƺ���ɱ�����˴�
��������, ��֪��׷ɱ������������ﰵɱ��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood22.c",
       "west" : "/open/killer/mon/room/wood28.c",
   ]));

        set("no_clean_up", 0);

        setup();
}
