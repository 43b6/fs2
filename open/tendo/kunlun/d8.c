//������
// by airke

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long", @LONG
�⸽�����Ǹ������Ƶ���ľ��ż�����м�ֻС¹�������߹�������
Զ���ƺ����������������ǣ����渲���˰�ɫ�Ļ�ѩ���ѿ�����ԭ������
��ɫ��Ϊ�Ρ�ǰ��������·��Ӧ����ͨ�������ġ�

LONG
	);
	
	set("exits", ([ /* sizeof() == 3 */
"north":__DIR__"g1.c",
        "pass" : __DIR__"c1",
]));
	set("outdoors", "1");

	setup();
}


