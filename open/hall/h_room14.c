// Room: /open/hall/h_room14.c

inherit ROOM;

void create()
{
        set("short","����ͷ����  ��֮�᷿");
        set("long", @LONG
�˴�����������ͷ����  �ɵ��᷿��һϯľ�ƵĴ��̣����������
����һ�������Ƶ��ޱ����ɼ����Ǹ������ɵ��ˣ����������һ˿����
������ɾ��������ƺ��е��е㺹��!!
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "north":__DIR__"h_room11",
]));
        set("objects", ([ /* sizeof() == 1 */
        "/open/hall/npc/chi.c":1,
]));

        setup();
}
