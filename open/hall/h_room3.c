// Room: /open/hall/h_room3.c

inherit ROOM;

void create()
{
        set("short", "�عٵ�����");
        set("long", @LONG
��ִ�����ú������������Ϣ�ĵط�����ط���û��ʲô����֮
����������ǰ��һ�Ŵ�����(table)���������Ʋ�������
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "southeast" : __DIR__"hall_3",
]));

        set("item_desc", ([ /* sizeof() == 1 */
  "table" : "  һ���ɺ�̴ľ���Ƴɵ�����, ��������һ��첼��\n",
 ]));

        setup();
}
