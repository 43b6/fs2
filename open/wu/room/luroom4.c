// Room: /open/wu/room/luroom4.c
// ��ɽ��ݵ����䳡
inherit ROOM;
void create()
{
        set("short", "���䳡");
        set("long", @LONG
��վ����ɽ�����䳡��һ��,����ǰ����������ľͷ��,ľͷ������ȭ
������,ָ�۴���,�������ݵ���������ȭ�ĵط�,�㿴����ͷ���ڽ̵�
��ݵ�����η��������еķ�ʽ��
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "north" : __DIR__"luroom3",
        "east" : __DIR__"luroom7",
]));
        set("objects", ([ /* sizeof() == 1 */
        "/open/wu/npc/c_trainee" : 3,
        "/open/wu/npc/c_trainer" : 1,
     ]));
        setup();
}
