// Room: /open/wu/room/luroom13.c
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
        "north" : __DIR__"luroom11",
        "east" : __DIR__"luroom14",
]));
        setup();
}
