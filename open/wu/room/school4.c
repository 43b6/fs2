// Room: /u/d/devils/school4.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG
��վ��������ݵĶ�����,����ǰ������������,�������ϵ�ǹ���
������ȫ�����ڶ����֮���ԷŹ��������ܵ�����Ϊ�����������ϻ���
��һ������(sign)��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"school7",
  "west" : __DIR__"school3",
]));

        set("outdoors", "/open/wu");
        setup();
        set("item_desc", ([
                "sign": "�����ñϣ��ǵ÷Ż�ԭλ\n"
        ]) );
}
