// Room: /open/wu/room/luroom21.c
// ��ɽ�����Ϣ��
inherit ROOM;
void create()
{
    set("short", "�ر���");
    set("long", @LONG
������ɽ�ɵ�EQ��ż���Ϣ��,������ȥ���صı��Ｐҩ��,����
��ô��Ķ���,�㲻��Ҫ��лǰ����Ŭ��,�������ڵ��ջ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
   "north" : __DIR__"luroom18",
]));
        set("light_up", 1);
        setup();
}
