// Room: /open/wu/room/luroom15.c
// ��ɽ��ݵĻ�԰
inherit ROOM;
void create()
{
        set("short", "��԰");
        set("long", @LONG
��������ɽ��ݵĻ�԰,������ɽ��ݵĵ���λ��λ���Ϸ������ļ���
��,��������,��ľ����,һ�������ķ紵��,һ��ɭ��ԡ�������˾���
��ˬ,������,��������ƽʱ����,���ܺ�������,����̸��˵���ĺõط���
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "south" : __DIR__"luroom16",
        "west" : __DIR__"luroom12",
]));
        setup();
}
