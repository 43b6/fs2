// Room: /open/wu/room/luroom14.c
// ��ɽ��ݵĻ�԰
inherit ROOM;
void create()
{
        set("short", "СϪ��");
        set("long", @LONG
��������ɽ��ݵĻ�԰�Ϸ���СϪ,�峹���׵�СϪ,���˺�����ȥ��ˮ
һ��,����������Կ���ˮ�����������,���㡢Ϻ..��,����Ϫ����,��
��������,ƽ�ս��ŵ��������
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "north" : __DIR__"luroom12",
        "east" : __DIR__"luroom16",
        "west" : __DIR__"luroom13",
]));
        setup();
}
