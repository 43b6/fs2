//written by acelan...../u/a/acelan/room/wood28.c

inherit ROOM;

void create()
{
        set("short", "�����ϵ��ܵ�");
        set("long", @LONG
��ǰ����Զ��, �㷢����һ����֥, ����֥�������Ӳݲ���, ��
�����ѵ�һ����ǧ����֥, ������Ϊ��ֵ��������֥������ʰ��
, ���������綾, ���ǲ���Ϊ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east" : "/open/killer/mon/room/wood29.c",
       "west" : "/open/killer/mon/room/wood27.c",
   ]));

        set("no_clean_up", 0);

        setup();
}
